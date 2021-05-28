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
	void sortList();

    public:
	Sublist(string name) : ListElements(), listName(name) {
		priority = 11;
		isDone = false;
		size = 0;
	}
	Sublist (const Sublist &sub);
	~Sublist() { }
	ListElements* find (const string name);
	int getSize() const { return size; }
	void add (ListElements* input);
	void markComplete (ListElements* done);
	void remove (ListElements* out);
	int getPriority() const;
	void print() const;
	Sublist* clone();
	string getName() const { return listName; }
};
	
#endif //__SUBLIST_HPP__
