#ifndef __LISTELEMENTS_HPP__
#define __LISTELEMENTS_HPP__

#include <string>
#include <sstream> 
#include <iostream>

using namespace std;

class ListElements{
    protected:
	int priority;
    	bool isDone;

    public:
	ListElements() {}
	virtual ~ListElements() = default;
	virtual string getName() const = 0;
	virtual void setName(const string name) = 0;
	virtual int getSize() const = 0;
	virtual ListElements* at(int i) = 0;
	virtual void add(ListElements* input) = 0;
	virtual int getPriority() const = 0;
	virtual ListElements* find (const string name) = 0;
	virtual void markComplete() = 0;
	virtual bool getCompleted() const  = 0;
	virtual void remove (ListElements* out) = 0;
	virtual void print() const = 0;
	virtual void setParent(ListElements* parent) = 0;
	virtual ListElements* getParent() = 0;
	virtual ListElements* clone() = 0;
};

#endif //__LISTELEMENTS_HPP__
