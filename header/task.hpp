#ifndef __TASK_HPP__
#define __TASK_HPP__

#include "listelements.hpp"

class Task : public ListElements {
    private:
	string dueDate;
	string taskName;
	string taskDesc;
	ListElements* taskParent;

    public:
	Task(int taskPriority, string date, string name, string desc) : ListElements(), dueDate(date), taskName(name), taskDesc (desc) {
		isDone = false;
		priority = taskPriority;
		taskParent = nullptr;
	}
	Task (const Task &t);		
	void markComplete();
	~Task() { }
	string getDueDate() const;
	string getName() const { return taskName; }
	string getDescription() const;
	bool getCompleted() const { return isDone; }
	int getPriority() const;
	void setDueDate (const string date);
	void setTaskName(const string name);
	void setDescription (const string description);
	void setPriority(int newVal);
	void print() const;
	void remove (ListElements* out);
	ListElements* find (const string name);
	Task* clone();
	void setParent (ListElements* parent) {
		taskParent = parent;
	}
	ListElements* getParent() { return taskParent; }
};

#endif //__TASK_HPP__
