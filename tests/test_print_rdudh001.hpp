#ifndef __TEST_PRINT_RDUDH001_HPP__
#define __TEST_PRING_RDUDH001_HPP__


TEST (TestPrint, OneTask) {
	Sublist* list1 = new Sublist ("List 1");
	Task* task1 = new Task (2, "5/6/21", "Task 1", "home");

	list1->add(task1);
	string actual = list1->print();

	string expected = "\nList 1\n\n\tTask 1 (2)\n";

	EXPECT_EQ(actual, expected);
}

TEST (TestPrint, OneTaskAndOneSublist) {
        Sublist* list1 = new Sublist ("List 1");
	Sublist* list2 = new Sublist ("List 2");
        Task* task1 = new Task (2, "5/6/21", "Task 1", "home");
	Task* task2 = new Task (1, "6/7/21", "Task 2", "work");

        list1->add(task1);
	list2->add(task2);
	list1->add(list2);
        string actual = list1->print();

        string expected = "\nList 1\n\n\tTask 1 (2)\n\nList 2\n\n\tTask 2 (1)\n\n";

        EXPECT_EQ(actual, expected);
}

TEST (TestPrint, MultTasksAndOneSublist) {
        Sublist* list1 = new Sublist ("List 1");
        Sublist* list2 = new Sublist ("List 2");
        Task* task1 = new Task (2, "5/6/21", "Task 1", "home");
        Task* task2 = new Task (1, "6/7/21", "Task 2", "work");
	Task* task3 = new Task (5, "12/14/2005", "Task 3", "school");
	Task* task4 = new Task (9, "3/4/21", "Task 4", "game");

        list1->add(task1);
        list2->add(task2);
        list1->add(list2);
	list1->add(task3);
	list2->add(task4);
        string actual = list1->print();

        string expected = "\nList 1\n\n\tTask 1 (2)\n\tTask 3 (5)\n\nList 2\n\n\tTask 2 (1)\n\tTask 4 (9)\n\n";

        EXPECT_EQ(actual, expected);
}



#endif
