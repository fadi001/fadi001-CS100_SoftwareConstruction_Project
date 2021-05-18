#ifndef __SUBLIST_HPP__
#define __SUBLIST_HPP__

#include "listelements.hpp"
#include <vector>

class Sublist : public ListElements {
    private:
	int size;
	string listName;
	vector<ListElements*> theList;
	void sortList();

    public:
	Sublist(string name) : listName(name) {
		priority = 11;
		isDone = false;
		size = 0;
	}
	void setName (const string name);
	string getName () const;
	Sublist (const Sublist &sub);
	~Sublist();
	void add (ListElements* input);
	void markComplete (ListElements* done);
	void remove (ListElements* out);
	int getPriority() const;
	void print() const;
	ListElements* clone();
};
	
#endif //__SUBLIST_HPP__
