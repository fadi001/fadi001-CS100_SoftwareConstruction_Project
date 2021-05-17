#ifndef __SUBLIST_HPP__
#define __SUBLIST_HPP__

#include "listelements.hpp"
#include <vector>

class Sublist : public ListElements {
    private:
	vector<ListElements*> theList;
	void sortList();

    public:
	Sublist();
	Sublist (const Sublist &sub);
	~Sublist();
	void add (ListElements* input);
	void markComplete (ListElements* done);
	void remove (ListElements* out);
	int getPriority();
	ListElements* clone();
};
	
#endif //__SUBLIST_HPP__
