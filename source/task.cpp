#include "../header/task.hpp"
#include <sstream>

using namespace std;

Task::Task(const Task& t) {
	priority = t.priority;
	dueDate = t.dueDate;
	taskName = t.taskName + " Copy";
	taskDesc = t.taskDesc;
	isDone = false;
	taskParent = t.taskParent;
}

void Task::markComplete(){
	isDone = !isDone;
}

string Task::getDueDate() const {
	return dueDate;	
}

string Task::getDescription() const {
	return taskDesc;
}

int Task::getPriority() const {
	return priority;
}

void Task::setDueDate (const string date){
	this->dueDate = date;
}

void Task::setName(const string name) {
	this->taskName = name;
}

void Task::setDescription (const string description) {
	this->taskDesc = description;
}

void Task::setPriority(int newVal) {
	this->priority = newVal;
}

string Task::print() const {
	ostringstream ss;
	
	ss << '\t' << this->getName() << " (" << this->getPriority() << "): " << this->getDescription() << endl;
	ss << "\t\tdue: " << this->getDueDate();
	return ss.str();
}

void Task::remove (ListElements* out) {

}

ListElements* Task::clone() {
	return new Task(*this);
}

ListElements* Task::find(const string name) {
	if (this->taskName == name) {
		return this;
	}
	return nullptr;
}


//Task:://start adding functions
