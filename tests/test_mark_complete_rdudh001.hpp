#ifndef __TEST_MARK_COMPLETE_RDUDH001_HPP__
#define __TEST_MARK_COMPLETE_RDUDH001_HPP__

#include "../header/listelements.hpp"
#include "../header/sublist.hpp"
#include "../header/task.hpp"
#include "gtest/gtest.h"

TEST(TestMark, MarkOnlyTask) {
	Sublist* list1 = new Sublist ("List 1");
	Task* task1 = new Task (2, "5/4/21", "Task 1", "work");
	ListElements* curr = nullptr;

	list1->add(task1);
	curr = list1->find("Task 1");

	curr->markComplete();
	bool expected = curr->getCompleted();

	EXPECT_EQ (expected, true);

	delete list1;
	delete task1;
}

TEST(TestMark, MarkTaskInSublist) {
        Sublist* list1 = new Sublist ("List 1");
        Sublist* list2 = new Sublist ("List 2");
	Task* task1 = new Task (2, "5/4/21", "Task 1", "work");
        ListElements* curr = nullptr;

        list1->add(list2);
	list2->add(task1);
        curr = list1->find("Task 1");

        curr->markComplete();
        bool expected = curr->getCompleted();

        EXPECT_EQ (expected, true);

        delete list1;
        delete task1;
}

TEST(TestMark, MarkWholeList) {
        Sublist* list1 = new Sublist ("List 1");
        Task* task1 = new Task (2, "5/4/21", "Task 1", "work");
	Task* task2 = new Task (4, "6/28/21", "Task 2", "home");
        ListElements* curr = nullptr;

        list1->add(task1);
	list1->add(task2);
        curr = list1->find("List 1");

        curr->markComplete();
        bool expected = curr->getCompleted();

        EXPECT_EQ (expected, true);

        delete list1;
        delete task1;
}

TEST(TestMark, MarkSublist) {
        Sublist* list1 = new Sublist ("List 1");
        Sublist* list2 = new Sublist ("List 2");
        Task* task1 = new Task (2, "5/4/21", "Task 1", "work");
	Task* task2 = new Task (4, "6/28/21", "Task 2", "home");

        ListElements* curr = nullptr;

        list1->add(list2);
        list2->add(task1);
	list2->add(task2);
        curr = list1->find("List 2");

        curr->markComplete();
        bool expected = curr->getCompleted();

        EXPECT_EQ (expected, true);

        delete list1;
        delete task1;
}
/*
TEST(TestMark, WrongInput) {
        Sublist* list1 = new Sublist ("List 1");
        Task* task1 = new Task (2, "5/4/21", "Task 1", "work");
        Task* task2 = new Task (4, "6/28/21", "Task 2", "home");
        ListElements* curr = nullptr;

        list1->add(task1);
        list1->add(task2);
        curr = list1->find("List1");

        curr->markComplete();
        bool expected = curr->getCompleted();

        EXPECT_EQ (expected, true);

        delete list1;
        delete task1;
}*/
//this test has been commented out since it causes the assert func to be called in find func 

TEST(TestMark, CheckMarkedSublist) {
        Sublist* list1 = new Sublist ("List 1");
        Sublist* list2 = new Sublist ("List 2");
        Task* task1 = new Task (2, "5/4/21", "Task 1", "work");
        Task* task2 = new Task (4, "6/28/21", "Task 2", "home");

        ListElements* curr = nullptr;

        list1->add(list2);
        list2->add(task1);
        list2->add(task2);
        curr = list1->find("Task 2");

        curr->markComplete();
        bool expected = curr->getCompleted();

        EXPECT_EQ (expected, true);

        delete list1;
        delete task1;
}



#endif
