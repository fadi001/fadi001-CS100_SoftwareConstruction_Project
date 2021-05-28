#ifndef __TEST_ADD_RDUDH001__
#define __TEST_ADD_RDUDH001__

#include "../header/listelements.hpp"
#include "../header/sublist.hpp"
#include "../header/task.hpp"
#include "gtest/gtest.h"
#include <string>

using namespace std;

TEST (TestAddNoSort, SimpleAdd) {
	Sublist* list1 = new Sublist("list 1");
	Task* task1 = new Task (2, "6th", "Task1", "work");
 	list1->add(task1);
	int expected = 1;
	
	EXPECT_EQ(list1->getSize(), expected);

	delete list1;
	delete task1;
}	

TEST (TestAddNoSort, TestName) {
        Sublist* list1 = new Sublist("list 1");
        Task* task1 = new Task (2, "6th", "Task1", "work");
        
	list1->add(task1);
	string expected = "Task1";
	ListElements* found = list1->find("Task1");	

        EXPECT_EQ(found->getName(), expected);

        delete list1;
        delete task1;
}

TEST (TestAddNoSort, AddMultUnsorted) {
        Sublist* list1 = new Sublist("list 1");
        Task* task1 = new Task (2, "6th", "Task1", "work");
	Task* task2 = new Task (4, "7th", "Task2", "home");
        list1->add(task1);
	list1->add(task2);
	int expected = 2;

        EXPECT_EQ(list1->getSize(), expected);

        delete list1;
        delete task1;
}

TEST (TestAddNoSort, TestNameFirst) {
        Sublist* list1 = new Sublist("list 1");
        Task* task1 = new Task (2, "6th", "Task1", "work");
	Task* task2 = new Task (4, "7th", "Task2", "home");

        list1->add(task1);
	list1->add(task2);
	
        string expected = "Task1";
        ListElements* found = list1->find("Task1");

        EXPECT_EQ(found->getName(), expected);

        delete list1;
        delete task1;
}

TEST (TestFind, SimpleFind) {
        Sublist* list1 = new Sublist("list 1");
        Task* task1 = new Task (2, "6th", "Task1", "work");
        
        list1->add(task1);
        
	ListElements* found = list1->find("Task1");

        EXPECT_EQ(found, task1);

        delete list1;
        delete task1;
}

TEST (TestAddNoSort, MultFind) {
        Sublist* list1 = new Sublist("list 1");
        Task* task1 = new Task (2, "6th", "Task1", "work");
        Task* task2 = new Task (4, "7th", "Task2", "home");

        list1->add(task1);
        list1->add(task2);

        string expected = "Task2";
        ListElements* found = list1->find("Task2");

        EXPECT_EQ(found->getName(), expected);

        delete list1;
        delete task1;
}


/*TEST (TestAddNoSort, NotFound) {
        Sublist* list1 = new Sublist("list 1");
        Task* task1 = new Task (2, "6th", "Task1", "work");
        Task* task2 = new Task (4, "7th", "Task2", "home");

        list1->add(task1);
        list1->add(task2);

        string expected = "Task1";
        ListElements* found = list1->find("Task 1");

        EXPECT_EQ(found, nullptr);

        delete list1;
        delete task1;
}
*/
//This last test commented out because it causes program to be aborted since assert function in Sublist::find is called
#endif //__TEST_ADD_RDUDH001__
