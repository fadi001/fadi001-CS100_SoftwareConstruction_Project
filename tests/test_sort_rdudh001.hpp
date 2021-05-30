#ifndef __TEST_SORT_RDUDH001_HPP__
#define __TEST_SORT_RDUDH001_HPP__


#include "../header/listelements.hpp"
#include "../header/sublist.hpp"
#include "../header/task.hpp"
#include "gtest/gtest.h"

TEST (TestSort, FindFront) {
	Sublist* list1 = new Sublist ("List 1");
	Task* task1 = new Task (2, "6/7/21", "Task 1", "work");
	Task* task2 = new Task (4, "6/8/21", "Task 2", "home");
	Task* task3 = new Task (1, "7/9/21", "Task 3", "school");

	list1->add(task1);
	list1->add(task2);
	list1->add(task3);

	int pVal = task3->getPriority();
	int place = list1->sortList(pVal);

	EXPECT_EQ(place, 0);

	delete list1;
}

TEST (TestSort, FindBack) {
        Sublist* list1 = new Sublist ("List 1");
        Task* task1 = new Task (2, "6/7/21", "Task 1", "work");
        Task* task2 = new Task (4, "6/8/21", "Task 2", "home");
        Task* task3 = new Task (5, "7/9/21", "Task 3", "school");

        list1->add(task1);
        list1->add(task2);
	list1->add(task3);

        int pVal = task3->getPriority();
        int place = list1->sortList(pVal);

        EXPECT_EQ(place, 2);

        delete list1;
}

TEST (TestSort, FindMiddle) {
        Sublist* list1 = new Sublist ("List 1");
        Task* task1 = new Task (2, "6/7/21", "Task 1", "work");
        Task* task2 = new Task (4, "6/8/21", "Task 2", "home");
        Task* task3 = new Task (3, "7/9/21", "Task 3", "school");

        list1->add(task1);
        list1->add(task2);
	list1->add(task3);

        int pVal = task3->getPriority();
        int place = list1->sortList(pVal);

        EXPECT_EQ(place, 1);

        delete list1;
}

TEST (TestSort, FindSublist) {
        Sublist* list1 = new Sublist ("List 1");
        Task* task1 = new Task (2, "6/7/21", "Task 1", "work");
        Task* task2 = new Task (4, "6/8/21", "Task 2", "home");
        Task* task3 = new Task (3, "7/9/21", "Task 3", "school");
	Sublist* list2 = new Sublist ("List 2");

        list1->add(task1);
	list1->add(list2);
        list2->add(task2);
	list2->add(task3);

        int pVal = list2->getPriority();
        int place = list1->sortList(pVal);

        EXPECT_EQ(place, 1);

        delete list1;
}


	

#endif
