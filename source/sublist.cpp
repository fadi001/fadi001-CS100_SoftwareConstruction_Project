#include "../header/listelements.hpp"
#include "../header/sublist.hpp"

Sublist:://start adding funcs

Subblist::Sublist (const Sublist &sub){

	theList = sub.theList;
	priority = sub.priority;
	isDone = false;

}
