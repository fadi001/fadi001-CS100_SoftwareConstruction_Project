#include "gtest/gtest.h"
#include "../header/task.hpp"

TEST(DescTest, SimpleGetterTest){
 	Task* aTask = new Task(1,"May 18, 2021", "Final Work", "Complete final project");
 	EXPECT_EQ("Complete final project", aTask->getDescription());
}

TEST(DescTest, SimpleSetterTest){
         Task* aTask = new Task(1,"May 18, 2021", "Final Work", "Complete final project");
 	aTask->setDescription("Finish issues for final project."); 
 	EXPECT_EQ("Finish issues for final project.", aTask->getDescription());
}
