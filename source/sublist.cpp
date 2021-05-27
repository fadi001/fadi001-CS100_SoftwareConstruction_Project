#include "../header/sublist.hpp"

Sublist::Sublist(const Sublist& sub) {

}

void Sublist::add (ListElements* input) {
	theList.push_back(input);
	//sortList(); once function is defined I will uncomment, this will be tested to make sure push_back works
	++size;
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
