#include <iostream>
#include <string>
#include "../header/listelements.hpp"
#include "../header/sublist.hpp"
#include "../header/task.hpp"

using namespace std;

char main_menu(Sublist* currList);

int main() {
	Sublist* curr = nullptr;
	char entered = main_menu(curr);
	string inputNameS;
	string inputNameT;
	string inputDate;
	string inputDesc;
	int p;
	cin.clear();
		
	while (entered != 'q') {
		if (entered == 'a') {
			cout << "Please enter a name for your new list/sublist: ";
			getline(cin, inputNameS);
			Sublist* list = new Sublist(inputNameS);
			curr = list;
		}
		else if (entered == 'b') {
			cout << "Enter following task information: " << endl;
			cout << "Task name: ";
			getline(cin, inputNameT);
			cin.clear();

			cout << "Enter task due date (ex. 12/5/2021): " << endl;
			getline(cin, inputDate);
			cin.clear();
	
			cout << "Enter the priority of this task: ";
			cin >> p;
			cin.clear();

			cout << "Enter a description for your task: ";
			getline(cin, inputDesc);
			cin.clear();
			
			Task* task = new Task(p, inputDate, inputNameT, inputDesc);
			curr->add(task);
		}
		else if (entered == 'c') {
			//implement
		}
		
		entered = main_menu(curr);
	}

	return 0;
}

char main_menu(Sublist* currList) {
	cout << "Current sublist: ";
	if (currList == nullptr) {
		cout << "No list created" << endl;
	}
	else {
		cout << currList->getName() << endl;
	}
	cout << "Please select an action: " << endl << endl;
	cout << "(a) Create a sublist (Choose this option to create initial list)" << endl;
	cout << "(b) Add a task to current list" << endl;
	cout << "(c) Print elements of current list" << endl;
	cout << "(q) Quit" << endl;

	char in;

	cin >> in;

	return in;
}
