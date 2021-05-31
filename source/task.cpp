#include "../header/task.hpp"

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

}

void Task::setDescription (const string description) {
	this->taskDesc = description;
}

void Task::setPriority(int newVal) {
	this->priority = newVal;
}

void Task::print() const {

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
