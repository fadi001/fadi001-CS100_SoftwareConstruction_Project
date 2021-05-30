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

TEST (TestSortedAdd, AddMultTasksP1) {
        Sublist* list1 = new Sublist ("List 1");
        Task* task1 = new Task (7, "5/6/21", "Task 1", "work");
	Task* task2 = new Task (5, "6/8/21", "Task 2", "home");
	Task* task3 = new Task (6, "10/4/21", "Task 3", "office");
	Task* task4 = new Task (9, "12/12/21", "Task 4", "school");

        list1->add(task1);
	list1->add(task2);
	list1->add(task3);
	list1->add(task4);

        ListElements* expected = list1->at(0);

        EXPECT_EQ(expected, task2);
}

TEST (TestSortedAdd, AddMultTasksP2) {
        Sublist* list1 = new Sublist ("List 1");
        Task* task1 = new Task (7, "5/6/21", "Task 1", "work");
        Task* task2 = new Task (5, "6/8/21", "Task 2", "home");
        Task* task3 = new Task (6, "10/4/21", "Task 3", "office");
        Task* task4 = new Task (9, "12/12/21", "Task 4", "school");

        list1->add(task1);
        list1->add(task2);
        list1->add(task3);
        list1->add(task4);

        ListElements* expected = list1->at(1);

        EXPECT_EQ(expected, task3);
}


TEST (TestSortedAdd, AddMultTasksP3) {
        Sublist* list1 = new Sublist ("List 1");
        Task* task1 = new Task (7, "5/6/21", "Task 1", "work");
        Task* task2 = new Task (5, "6/8/21", "Task 2", "home");
        Task* task3 = new Task (6, "10/4/21", "Task 3", "office");
        Task* task4 = new Task (9, "12/12/21", "Task 4", "school");

        list1->add(task1);
        list1->add(task2);
        list1->add(task3);
        list1->add(task4);

        ListElements* expected = list1->at(2);

        EXPECT_EQ(expected, task1);
}

TEST (TestSortedAdd, AddMultTasksP4) {
        Sublist* list1 = new Sublist ("List 1");
        Task* task1 = new Task (7, "5/6/21", "Task 1", "work");
        Task* task2 = new Task (5, "6/8/21", "Task 2", "home");
        Task* task3 = new Task (6, "10/4/21", "Task 3", "office");
        Task* task4 = new Task (9, "12/12/21", "Task 4", "school");

        list1->add(task1);
        list1->add(task2);
        list1->add(task3);
        list1->add(task4);

        ListElements* expected = list1->at(3);

        EXPECT_EQ(expected, task4);
}


TEST (TestSortedAdd, AddEmptyList) {
        Sublist* list1 = new Sublist ("List 1");
        Sublist* list2 = new Sublist ("List 2");

        list1->add(list2);

        ListElements* expected = list1->at(0);

        EXPECT_EQ(expected, list2);
}

TEST (TestSortedAdd, AddMultEmptyLists) {
        Sublist* list1 = new Sublist ("List 1");
        Sublist* list2 = new Sublist ("List 2");
	Sublist* list3 = new Sublist ("List 3");

        list1->add(list2);
        list1->add(list3);

        ListElements* expected = list1->at(0);

        EXPECT_EQ(expected, list2);
}

TEST (TestSortedAdd, AddSublistP1) {
        Sublist* list1 = new Sublist ("List 1");
	Sublist* list2 = new Sublist ("List 2");
        Task* task1 = new Task (7, "5/6/21", "Task 1", "work");
	Task* task2 = new Task (3, "7/9/21", "Task 2", "home");

        list1->add(task1);
	list2->add(task2);
	list1->add(list2);

        ListElements* expected = list1->at(0);

        EXPECT_EQ(expected, task1);
}

TEST (TestSortedAdd, AddSublistP2) {
        Sublist* list1 = new Sublist ("List 1");
        Sublist* list2 = new Sublist ("List 2");
        Task* task1 = new Task (7, "5/6/21", "Task 1", "work");
        Task* task2 = new Task (3, "7/9/21", "Task 2", "home");

        list1->add(task1);
        list2->add(task2);
        list1->add(list2);

        ListElements* expected = list1->at(1);

        EXPECT_EQ(expected, list2);
}


TEST (TestSortedAdd, AddMultSublists) {
        Sublist* list1 = new Sublist ("List 1");
	Sublist* list2 = new Sublist ("List 2");
	Sublist* list3 = new Sublist ("List 3");
        Task* task1 = new Task (7, "5/6/21", "Task 1", "work");
        Task* task2 = new Task (5, "6/8/21", "Task 2", "home");

        list1->add(list2);
        list1->add(list3);
	list2->add(task1);
	list2->add(task2);

        ListElements* expected = list1->at(0);

        EXPECT_EQ(expected, list2);
}




#endif
