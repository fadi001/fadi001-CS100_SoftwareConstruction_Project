#ifndef __TASK_HPP__
#define __TASK_HPP__

#include "listelements.hpp"

class Task : public ListElements {
    private:
	string dueDate;
	string taskName;
	string taskDesc;

    public:
	Task(int taskPriority, string date, string name, string desc) : ListElements(), dueDate(date), taskName(name), taskDesc (desc) {
		isDone = false;
		priority = taskPriority;
	}
	Task (const Task &t);		
	void markComplete(ListElements* complete);
	~Task() { }
	string getDueDate() const;
	string getName() const { return taskName; }
	string getDescription() const;
	bool getCompleted() const;
	int getPriority() const;
	void setDueDate (const string date);
	void setTaskName(const string name);
	void setDescription (const string description);
	void setCompletion (); // will turn task's isDone variable to its inverse, 
			       // so if isDone == false then func will set isDone to true
			       // vice versa for if isDone == true
	void setPriority(int newVal);
	void print() const;
	void remove (ListElements* out);
	ListElements* find (const string name);
	Task* clone();
};

#endif //__TASK_HPP__
