#ifndef __SUBLIST_HPP__
#define __SUBLIST_HPP__

#include "listelements.hpp"
#include <vector>
#include <string>
using namespace std;

class Sublist : public ListElements {
    private:
	int size;
	string listName;
	vector<ListElements*> theList;

    public:
	Sublist(string name) : ListElements(), listName(name) {
		priority = 11;
		size = 0;
		isDone = false;
	}
	int sortList (int val);
	ListElements* at(int place) {
		return theList.at(place);
	}
	void setName (const string name);
	Sublist (const Sublist &sub);
	~Sublist() { }
	ListElements* find (const string name);
	int getSize() const { return size; }
	void add (ListElements* input);
	void markComplete ();
	void remove (ListElements* out);
	int getPriority() const;
	void print() const;
	Sublist* clone();
	string getName() const { return listName; }
	bool getCompleted() const { return isDone; }
};
	
#endif //__SUBLIST_HPP__
