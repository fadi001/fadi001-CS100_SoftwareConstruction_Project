#ifndef __TEST_GETTERS_SETTERS_RDUDH001_HPP__
#define __TEST_GETTERS_SETTERS_RDUDH001_HPP__

#include "../header/listelements.hpp"
#include "../header/sublist.hpp"
#include "../header/task.hpp"
#include "gtest/gtest.h"


TEST (TestGettersSetters, TaskGetName) {
	int p = 2;
	string date = "5/6/21";
	string name = "Task 1";
	string desc = "home";

	Task* task = new Task (p,date,name,desc);

	EXPECT_EQ(task->getName(), name);
}

TEST (TestGettersSetters, TaskGetPriority) {
        int p = 2;
        string date = "5/6/21";
        string name = "Task 1";
        string desc = "home";

        Task* task = new Task (p,date,name,desc);

        EXPECT_EQ(task->getPriority(), p);
}


TEST (TestGettersSetters, TaskGetDate) {
        int p = 2;
        string date = "5/6/21";
        string name = "Task 1";
        string desc = "home";

        Task* task = new Task (p,date,name,desc);

        EXPECT_EQ(task->getDueDate(), date);
}

TEST (TestGettersSetters, TaskGetDesc) {
        int p = 2;
        string date = "5/6/21";
        string name = "Task 1";
        string desc = "home";

        Task* task = new Task (p,date,name,desc);

        EXPECT_EQ(task->getDescription(), desc);
}

TEST (TestGettersSetters, TaskSetName) {
        int p = 2;
        string date = "5/6/21";
        string name = "Task 1";
        string desc = "home";

        Task* task = new Task (p,date,name,desc);
	task->setName("Task 2");
	string expected = "Task 2";

        EXPECT_EQ(task->getName(), expected);
}

TEST (TestGettersSetters, TaskSetPriority) {
        int p = 2;
        string date = "5/6/21";
        string name = "Task 1";
        string desc = "home";

        Task* task = new Task (p,date,name,desc);
	task->setPriority(3);

        EXPECT_EQ(task->getPriority(), 3);
}


TEST (TestGettersSetters, TaskSetDate) {
        int p = 2;
        string date = "5/6/21";
        string name = "Task 1";
        string desc = "home";

        Task* task = new Task (p,date,name,desc);
	task->setDueDate("3/4/21");
	string expected = "3/4/21";

        EXPECT_EQ(task->getDueDate(), expected);
}

TEST (TestGettersSetters, TaskSetDesc) {
        int p = 2;
        string date = "5/6/21";
        string name = "Task 1";
        string desc = "home";

        Task* task = new Task (p,date,name,desc);
	task->setDescription("work");
	string expected = "work";

        EXPECT_EQ(task->getDescription(), expected);
}



#endif
