#include "../header/listelements.hpp"
#include "../header/task.hpp"

Task::Task(const Task &t){

	priority = t.priority;
	dueDate = t.dueDate;
	taskDesc = t.taskDesc;
	isDone = false;

}
