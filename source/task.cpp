#include "../header/task.hpp"
#include <sstream>

using namespace std;

Task::Task(const Task& t) {

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
	
	ss << '\t' << this->getName() << " (" << this->getPriority() << ")";
	return ss.str();
}

void Task::remove (ListElements* out) {

}

Task* Task::clone() {

}

ListElements* Task::find(const string name) {
	if (this->taskName == name) {
		return this;
	}
	return nullptr;
}


//Task:://start adding functions
