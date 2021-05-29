#ifndef __TEST_FIND_RDUDH001_HPP__
#define __TEST_FIND_RDUDH001_HPP__

#include "../header/listelements.hpp"
#include "../header/sublist.hpp"
#include "../header/task.hpp"
#include "gtest/gtest.h"
#include <string>

using namespace std;

TEST (TestFind, FindOnlyTask) {
	Sublist* list1 = new Sublist ("List 1");
	Task* task1 = new Task (2, "5/6/21", "Task 1", "work");
	list1->add(task1);

	ListElements* found = list1->find("Task 1");

	EXPECT_EQ(found, task1);
	
	delete list1;
	delete task1;
}

TEST (TestFind, FindTaskInSublist) {
        Sublist* list1 = new Sublist ("List 1");
	Sublist* list2 = new Sublist ("List 2");
        Task* task1 = new Task (2, "5/6/21", "Task 1", "work");
	list2->add(task1);
	list1->add(list2);

        ListElements* found = list1->find("Task 1");

        EXPECT_EQ(found, task1);

        delete list1;
	delete list2;
        delete task1;
}

TEST (TestFind, FindSublist) {
        Sublist* list1 = new Sublist ("List 1");
	Sublist* list2 = new Sublist ("List 2");
        Task* task1 = new Task (2, "5/6/21", "Task 1", "work");
        list1->add(list2);
	list2->add(task1);

        ListElements* found = list1->find("List 2");

        EXPECT_EQ(found, list2);

        delete list1;
	delete list2;
        delete task1;
}

/*TEST (TestFind, NotFound) {
        Sublist* list1 = new Sublist ("List 1");
        Sublist* list2 = new Sublist ("List 2");
        Task* task1 = new Task (2, "5/6/21", "Task 1", "work");
        list2->add(task1);
        list1->add(list2);

        ListElements* found = list1->find("Task1");

        EXPECT_EQ(found, task1);

        delete list1;
        delete list2;
        delete task1;
}
*/
//this tests has been commented out because it causes the assert func in the find func to be called

#endif
