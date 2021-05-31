#include <iostream>
#include <string>
#include <vector>
#include "../header/listelements.hpp"
#include "../header/sublist.hpp"
#include "../header/task.hpp"

using namespace std;

char main_menu(Sublist* currList);

int main() {
	char entered;
	string inputNameS;
	string inputNameT;
	string inputDate;
	string inputDesc;
	int p;
	vector<ListElements*> all;
	cin.clear();

	Sublist* curr = new Sublist("Initial List");
	all.push_back(curr);

	entered = main_menu(curr);
		
	while (entered != 'q') {
		if (entered == 'a') {
			cout << "Please enter the new name of your list: ";
			cin.get();
			getline(cin, inputNameS);
			//cin >> inputNameS;
			curr->setName(inputNameS);
			cout << endl;
			cout << endl;
		}
		else if (entered == 'b') {
			cout << "Enter following task information: " << endl;
			cout << "Task name: ";
			cin.get();
			getline(cin, inputNameT);
			cin.clear();

			cout << "Enter task due date (ex. 12/5/2021): ";
			cin.get();
			getline(cin, inputDate);
			cin.clear();
			//cout << endl;
	
			cout << "Enter the priority of this task: ";
			cin >> p;
			cin.clear();
			//cout << endl;

			cout << "Enter a description for your task: ";
			cin.get();
			getline(cin, inputDesc);
			cin.clear();
			cout << endl;
			
			Task* task = new Task(p, inputDate, inputNameT, inputDesc);
			curr->add(task);
			all.push_back(task);
			cout << endl;
		}
		else if (entered == 'c') {
			//implement
		}
		
		
		entered = main_menu(curr);
	}

	return 0;
}

char main_menu(Sublist* currList) {
	cout << "Current sublist: " << currList->getName() << endl;
	cout << "Please select an action: " << endl << endl;
	cout << "(a) Change the name of your list" << endl;
	cout << "(b) Add a task to current list" << endl;
	cout << "(c) Create and add a new sublist to current list" << endl;
	cout << "(d) Change current list to sublist" << endl;
	cout << "(c) Print elements of current list" << endl;
	cout << "(q) Quit" << endl;

	char in;

	cin >> in;

	return in;
}
