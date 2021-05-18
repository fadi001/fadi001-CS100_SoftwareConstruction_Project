#include "../header/listelements.hpp"
#include "../header/sublist.hpp"

void Sublist::add (ListElements* input) {
	list.push_back(input);
	sortList();
	++size;
}
