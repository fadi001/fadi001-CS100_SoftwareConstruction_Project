#ifndef __TEST_ADD_RDUDH001__
#define __TEST_ADD_RDUDH001__

#include "../header/sublist.hpp"
#include "../header/task.hpp"
#include "gtest/gtest.h"

TEST (TestAddNoSort, SimpleAdd) {
	Sublist* list1 = new Sublist("list 1");
	Task* task1 = new Task (2, "6th", "Task1", "work");
 	list1->add(task1);
	int expected = 1;
	
	EXPECT_EQ(list1->getSize(), expected);

	//delete list1;
	//delete task1;
}	
#endif //__TEST_ADD_RDUDH001__
