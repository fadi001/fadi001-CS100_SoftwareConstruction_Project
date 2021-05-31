#include "../header/sublist.hpp"
#include <assert.h>
#include <string>

using namespace std;

Sublist::Sublist(const Sublist& sub) {
	theList = sub.theList;
	priority = sub.priority;
	parentList = sub.parentList;
	isDone = false;
}

void Sublist::setName(const string name) {
	this->listName = name;
}

void Sublist::add (ListElements* input) {
	theList.push_back(input);
	++size;
	if (this->size == 1) {
		return;
	}
	
	int pVal = input->getPriority();
	int place = this->sortList(pVal);

	for (int i = ((this->size) - 2); i >= place; --i) {
		theList.at(i+1) = theList.at(i);
	}

	theList.at(place) = input;
	//sortList(); once function is defined I will uncomment, this will be tested to make sure push_back works

}

ListElements* Sublist::find (const string name){
	ListElements* curr = nullptr;

	if (this->listName == name) {
		return this;
	}

	for (auto it = theList.begin(); it != theList.end(); ++it) {
		curr = *it;
		curr = curr->find(name);
		if (curr != nullptr) {
			return curr;
		}
	}

	assert (curr != nullptr);

	return curr;
}
	
void Sublist::markComplete () {
	ListElements* curr = nullptr;

	for (auto it = theList.begin(); it != theList.end(); ++it) {
		curr = *it;
		curr->markComplete();
	}
	
	isDone = !isDone;
}

void Sublist::remove (ListElements* out) {
	auto it = theList.begin();
	int currSize = this->size;
	ListElements* curr = *it;
	for (it = theList.begin(); it != theList.end(); ++it) {
		curr = *it;
		if (curr->getName() == out->getName()) {
			theList.erase(it);
			--this->size;
			break;
		}
	}

	assert (currSize != size);
}

int Sublist::getPriority() const {
	return priority;
}

void Sublist::print() const {

}

Sublist* Sublist::clone() {

}

int Sublist::sortList(int val) {
	if (this->size == 0) {
		return 0;
	}
	if (this->size == 1) {
		if (theList.at(0)->getPriority() > val) {
			return 0;
		}
		return 1;
	}
	int currVal = 0;
	ListElements* curr = nullptr;
	
	for (int i = 0; i < this->size-1; ++i) {
		curr = theList.at(i);
		currVal = curr->getPriority();

		if (currVal > val) {
			return i;
		}
	}

	return size - 1;

}
