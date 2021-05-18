#include "gtest/gtest.h"
#include "../header/task.hpp"

TEST(DueDateTest, DateGetterTest){
	Task* aTask = new Task(1,"May 18, 2021", "Final Work", "Complete final project");
	EXPECT_EQ("May 18, 2021", aTask->getDueDate();
}

TEST(DueDateTest, DateSetterTest){
	Task* aTask = new Task(1,"May 18, 2021", "Final Work", "Complete final project");
	aTask->setDueDate("June 1, 2021");
	EXPECT_EQ("June 1, 2021", aTask->getDueDate());
}
