#include "../header/sublist.hpp"

void Sublist::add (ListElements* input) {
	theList.push_back(input);
	//sortList(); once function is defined I will uncomment, this will be tested to make sure push_back works
	++size;
}
