#ifndef __TEST_ADD_SORT_RDUDH001_HPP
#define __TEST_ADD_SORT_RDUDH001_HPP

#include "../header/listelements.hpp"
#include "../header/sublist.hpp"
#include "../header/task.hpp"
#include "gtest/gtest.h"

TEST (TestSortedAdd, AddOneTask) {
	Sublist* list1 = new Sublist ("List 1");
	Task* task1 = new Task (7, "5/6/21", "Task 1", "work");

	list1->add(task1);

	ListElements* expected = list1->at(0);

	EXPECT_EQ(expected, task1);
}

TEST (TestSortedAdd, AddMultTasks) {
        Sublist* list1 = new Sublist ("List 1");
        Task* task1 = new Task (7, "5/6/21", "Task 1", "work");
	Task* task2 = new Task (5, "6/8/21", "Task 2", "home");

        list1->add(task1);
	list1->add(task2);

        ListElements* expected = list1->at(0);

        EXPECT_EQ(expected, task2);
}



#endif
