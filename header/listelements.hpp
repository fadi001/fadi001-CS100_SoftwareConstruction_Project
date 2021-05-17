#ifndef __LISTELEMENTS_HPP__
#define __LISTELEMENTS_HPP__

#include <string>
#include <sstream> 

using namespace std;

class ListElements{
    private:
	int priority;
    	bool isDone;

    public:
	ListElements() {}
	virtual ~ListElements();
	virtual int getPriority() = 0;
	virtual void markComplete (ListElements* completed) = 0;
	virtual void remove (ListElements* out) = 0;
	virtual void print() = 0;
	virtual ListElement* clone() = 0;
};

#endif //__LISTELEMENTS_HPP__
