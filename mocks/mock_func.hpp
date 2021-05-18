#ifndef __MOCK_FUNCS_HPP__
#define __MOCK_FUNCS_HPP__

#include "../header/sublist.hpp"

class mockSubList : public ListElements {
	
	pubblic :
		virtual int getPriority() {return 2;}
};

class mockTaskOne : public ListElements{

   private:
	string dueDate;
	string taskName;
	string taskDesc;

    public:
	Task(int taskPriority, string date, string name, string desc) : priority(2), dueDate("May/20"), taskName("Feed the Dog"), taskDesc ("Feed the Dog on that day because parents are gone.") {
		isDone = false;
	}
	virtual void print() const {
	cout << "Task: " << taskName << endl;
	cout << "Task Description: " << taskDesc << endl;
	cout << "Priority level: " << priority << endl;
	cout << "Due Date: " <<dueDate << endl;
	cout << "Done: " << isDone << endl; }
	string getDueDate() const{return dueDate;}
	string getTaskName() const{return taskName;}
	string getDescription() const{return taskDesc;}
	bool getCompleted() const {return isDone;}
	int getPriority() const {return priority;}
};
#endif
