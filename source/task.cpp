#include "../header/task.hpp"

string Task:getDueDate() const{
	return this->dueDate;
}

void Task::setDueDate(const string date){
	this->dueDate = date;
}
