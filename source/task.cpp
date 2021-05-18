#include "../header/task.hpp"
std::string Task::getDescription() const{
	return taskDesc;
}

void Task::setDescription(const std::string description){
	this->taskDesc = description;
}

