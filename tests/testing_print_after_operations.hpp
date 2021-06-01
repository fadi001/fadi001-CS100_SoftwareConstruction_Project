#ifndef __TESTING_PRINT_AFTER_OPERATIONS_HPP__
#define __TESTING_PRINT_AFTER_OPERATIONS_HPP__

#include "gtest/gtest.h"

#include "../header/sublist.hpp"
#include "../header/task.hpp"

TEST(CopySublistTestThenPrint, CopySubList1){
	Sublist* curr = new Sublist("Initial List");
	Task* task = new Task(3, "11/17/2001", "Birth", "The day I was born");
			curr->add(task);
			task->setParent(curr);

	ListElements* newOne = curr->clone();
	
	EXPECT_EQ(newOne->getSize(), curr->getSize());
	EXPECT_EQ(newOne->getPriority(), curr->getPriority());
	EXPECT_EQ(newOne->getName(), "Initial List Copy");
	EXPECT_EQ(newOne->print(), "\nInitial List Copy\n\n\tBirth (3): The day I was born\n\t\tdue: 11/17/2001\n");
	delete task;
	delete curr;
	delete newOne;
}

TEST(CopySublistTestTThenPrint, CopySubListTwice){
        Sublist* curr = new Sublist("Initial List");
        Task* task = new Task(3, "11/17/2001", "Birth", "The day I was born");
                        curr->add(task);
                        task->setParent(curr);

        ListElements* newOne = curr->clone();
	
	ListElements* newtwo = newOne->clone();

        EXPECT_EQ(newtwo->getSize(), curr->getSize());
        EXPECT_EQ(newtwo->getPriority(), curr->getPriority());
        EXPECT_EQ(newtwo->getName(), "Initial List Copy Copy");
        EXPECT_EQ(newtwo->print(), "\nInitial List Copy Copy\n\n\tBirth (3): The day I was born\n\t\tdue: 11/17/2001\n");
        delete task;
        delete curr;
        delete newOne;
	delete newtwo;
}

TEST(CopySublistTestThenPrint, CopySubListPushBackThenPrint){
        Sublist* curr = new Sublist("Initial List");
        Task* task = new Task(3, "11/17/2001", "Birth", "born");
                        curr->add(task);
                        task->setParent(curr);

        ListElements* newOne = curr->clone();
	curr->add(newOne);

        EXPECT_EQ(newOne->getName(), "Initial List Copy");
        EXPECT_EQ(curr->print(), "\nInitial List\n\n\tBirth (3): born\n\t\tdue: 11/17/2001\n\tSUBLIST: Initial List Copy\n\nInitial List Copy\n\n\tBirth (3): born\n\t\tdue: 11/17/2001\n\n");
        delete task;
        delete curr;
        delete newOne;
}

#endif
