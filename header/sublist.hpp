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
	ListElements* parentList;

    public:
	Sublist(string name) : ListElements(), listName(name) {
		priority = 11;
		size = 0;
		parentList = nullptr;
		isDone = false;
	}
	void setParent(ListElements* parent) {
		parentList = parent;
	}
	void setName(const string name);
	ListElements* getParent() {
		return parentList;
	}
	int sortList (int val);
	ListElements* at(int place) {
		return theList.at(place);
	}
	Sublist(const Sublist &sub);
	~Sublist() { }
	ListElements* find (const string name);
	int getSize() const { return size; }
	void add (ListElements* input);
	void markComplete ();
	void remove (ListElements* out);
	int getPriority() const;
	string print() const;
	ListElements* clone();
	string getName() const { return listName; }
	bool getCompleted() const { return isDone; }
};
	
#endif //__SUBLIST_HPP__
