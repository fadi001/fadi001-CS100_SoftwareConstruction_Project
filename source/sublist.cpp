#include "../header/sublist.hpp"
#include <assert.h>

using namespace std;

Sublist::Sublist(const Sublist& sub) {

}

void Sublist::setName(const string name) {
	listName = name;
}

void Sublist::add (ListElements* input) {
	theList.push_back(input);
	//sortList(); once function is defined I will uncomment, this will be tested to make sure push_back works
	++size;
}

ListElements* Sublist::find (const string name) {
	ListElements* curr = nullptr;
	string currName = "";
	for (int i = 0; i < this->size; ++i) {
		curr = theList.at(i);
		if (curr->getName() == name) {
			return curr;
		}
		curr = nullptr;
	}
	
	assert(curr != nullptr);
	return curr;
}
	
void Sublist::markComplete (ListElements* done) {

}

void Sublist::remove (ListElements* out) {

}

int Sublist::getPriority() const {

}

void Sublist::print() const {

}

Sublist* Sublist::clone() {

}

