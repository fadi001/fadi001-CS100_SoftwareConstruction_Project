#include <iostream>
#include <string>
#include "../header/listelements.hpp"
#include "../header/sublist.hpp"
#include "../header/task.hpp"

using namespace std;

char main_menu(Sublist* currList);

string input(){
	

int main() {
	char entered;
	string inputNameS;
	string inputNameT;
	string inputDate;
	string inputDesc;
	int p;
	cin.clear();

	Sublist* whole = new Sublist("Initial List");
	entered = main_menu(whole);
		
	while (entered != 'q') {
		if (entered == 'a') {
			cout << "Please enter the new name of your list: ";
			getline(cin, inputNameS);
			whole->setName(inputNameS);
			cout << endl;
			cout << endl;
		}
		else if (entered == 'b') {
			cout << "Enter following task information: " << endl;
			cout << "Task name: ";
			getline(cin, inputNameT);
			cin.clear();
			cout << endl;

			cout << "Enter task due date (ex. 12/5/2021): ";
			getline(cin, inputDate);
			cin.clear();
			cout << endl;
	
			cout << "Enter the priority of this task: ";
			cin >> p;
			cin.clear();
			cout << endl;

			cout << "Enter a description for your task: ";
			getline(cin, inputDesc);
			cin.clear();
			cout << endl;
			
			Task* task = new Task(p, inputDate, inputNameT, inputDesc);
			whole->add(task);
			cout << endl;
		}
		else if (entered == 'c') {
			//implement
		}
		
		
		entered = main_menu(whole);
	}

	return 0;
}

char main_menu(Sublist* currList) {
	cout << "Current sublist: " << currList->getName() << endl;
	cout << "Please select an action: " << endl << endl;
	cout << "(a) Change the name of your list" << endl;
	cout << "(b) Add a task to current list" << endl;
	cout << "(c) Print elements of current list" << endl;
	cout << "(q) Quit" << endl;

	char in;

	cin >> in;

	return in;
}
