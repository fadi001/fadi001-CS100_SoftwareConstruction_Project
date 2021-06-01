#ifndef __SUBLIST_TASK_COPY_TEST_HPP__
#define __SUBLIST_TASK_COPY_TEST_HPP__

#include "gtest/gtest.h"

#include "../header/sublist.hpp"
#include "../header/task.hpp"

TEST(CopySublistTest, CopySubList1){
	Sublist* curr = new Sublist("Initial List");
	Task* task = new Task(3, "11/17/2001", "Birth", "The day I was born");
			curr->add(task);
			task->setParent(curr);

	Sublist* newOne = curr->clone();
	
	EXPECT_EQ(newOne->getSize(), curr->getSize());
	delete curr;
	delete newOne;
}

#endif
