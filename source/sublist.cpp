#include "../header/sublist.hpp"
#include <assert.h>

using namespace std;

Sublist::Sublist(const Sublist& sub) {

}

void Sublist::setName(const string name) {

}

void Sublist::add (ListElements* input) {
	theList.push_back(input);
	//sortList(); once function is defined I will uncomment, this will be tested to make sure push_back works
	++size;
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


	/*ListElements* curr = nullptr;
	string currName = "";
	for (int i = 0; i < this->size; ++i) {
		curr = theList.at(i);
		if (curr->getPriority() == 11) {
			curr = curr->find(name);
			if (curr != nullptr) {
				return curr;
			}
		}	
		else {
			if (curr->getName() == name) {
				return curr;
			}
		}	
		curr = nullptr;
	}
	
	return curr;
}*/
	
void Sublist::markComplete (ListElements* done) {
	ListElements* curr = nullptr;

	curr = this->find(done->getName());
	
	for (auto it = theList.begin(); it != theList.end(); ++it) {
		if (*it == curr) {
			break;
		}
	}

	for (auto it = theList.begin(); it != theList.end(); ++it) {
		*it->markComplete(curr);
	}
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

}

void Sublist::print() const {

}

Sublist* Sublist::clone() {

}

