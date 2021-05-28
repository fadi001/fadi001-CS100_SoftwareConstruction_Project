#ifndef __TEST_REMOVE_RDUDH001_HPP__
#define __TEST_REMOVE_RDUDH001_HPP__

#include "../header/listelements.hpp"
#include "../header/sublist.hpp"
#include "../header/task.hpp"

#include "gtest/gtest.h"

TEST (RemoveTest, RemoveOnlyTask) {
	Sublist* list1 = new Sublist ("List1");
	Task* task1 = new Task (2, "5/7/21", "Task1", "work");
	list1->add(task1);

	list1->remove(task1);

	EXPECT_EQ(list1->getSize(), 0);

	delete list1;
	delete task1;
}

TEST (RemoveTest, RemoveOneTask) {
        Sublist* list1 = new Sublist ("List1");
        Task* task1 = new Task (2, "5/7/21", "Task1", "work");
	Task* task2 = new Task (4, "6/22/21", "Task2", "home");
        list1->add(task1);
	list1->add(task2);

        list1->remove(task1);

        EXPECT_EQ(list1->getSize(), 1);

        delete list1;
        delete task1;
}

TEST (RemoveTest, RemoveEmptyList) {
        Sublist* list1 = new Sublist ("List1");
        Task* task1 = new Task (2, "5/7/21", "Task1", "work");
	Sublist* list2 = new Sublist ("List2");
        list1->add(task1);
	list1->add(list2);

        list1->remove(task1);

	ListElements* expected = list1->find("List2");

        EXPECT_EQ(expected, list2);

        delete list1;
        delete task1;
}

TEST (RemoveTest, RemoveListwTask) {
        Sublist* list1 = new Sublist ("List1");
	Sublist* list2 = new Sublist ("List2");
        Task* task1 = new Task (2, "5/7/21", "Task1", "work");
        Task* task2 = new Task (4, "6/22/21", "Task2", "home");
        list1->add(task1);
        list2->add(task2);
	list1->add(list2);

        list1->remove(list2);

        EXPECT_EQ(list1->getSize(), 1);

        delete list1;
        delete task1;
}

/*TEST (RemoveTest, RemoveNotFound) {
        Sublist* list1 = new Sublist ("List1");
        Sublist* list2 = new Sublist ("List2");
        Task* task1 = new Task (2, "5/7/21", "Task1", "work");
        Task* task2 = new Task (4, "6/22/21", "Task2", "home");
        list1->add(task1);
        list2->add(task2);
        list1->add(list2);

	ListElements* remove = list1->find("Task 1");

        list1->remove(task1);

        EXPECT_EQ(list1->getSize(), 1);

        delete list1;
        delete task1;
}*/
//this test would call assert func in remove func since the task to be removed was not found


#endif
