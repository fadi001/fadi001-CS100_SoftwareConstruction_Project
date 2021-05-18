#include "../header/listelements.hpp"
#include "../header/task.hpp"

Task:://start adding functions

Task::Task (const Task &t){
	priority = t.priority;
	dueDate = t.dueDate;
	taskName = t.taskName;
	taskDesc = t.taskDesc;
	isDone = false;
}
