#include "../header/task.hpp"

Task::Task(const Task& t) {

}

void Task::markComplete(){
	isDone = !isDone;
}

string Task::getDueDate() const {

}

string Task::getDescription() const {

}

int Task::getPriority() const {
	return priority;
}

void Task::setDueDate (const string date){

}

void Task::setTaskName(const string name) {
}

void Task::setDescription (const string description) {

}

void Task::setPriority(int newVal) {

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
