#include <iostream>
#include <string>
#include <vector>
#include <assert.h>
#include "../header/listelements.hpp"
#include "../header/sublist.hpp"
#include "../header/task.hpp"

using namespace std;

char main_menu(ListElements* currList);
ListElements* find(string name);
vector<ListElements*> all;

int main() {
	char entered;
	string inputNameS;
	string inputNameT;
	string inputDate;
	string inputDesc;
	int p;
	cin.clear();

	ListElements* curr = new Sublist("Initial List");
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
		else if (entered == 'c') {
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
			task->setParent(curr);
			all.push_back(task);
			cout << endl;
		}
		else if (entered == 'b') {
			cout << "Enter the name for the new list: ";
			cin.get();
			getline(cin, inputNameS);
			Sublist* newList = new Sublist (inputNameS);
			all.push_back(newList);
			cout << endl << endl;
		}

		else if (entered == 'd') {
			cout << "Enter the name of the list to be added to the current list: ";
			cin.get();
			getline(cin, inputNameS);
			ListElements* temp = find(inputNameS);

			curr->add(temp);
			temp->setParent(curr);
			cout << endl << endl;
		}
		
		else if (entered == 'e') {
			cout << "Enter the name of the sublist you wish to switch to: ";
			cin.get();
			getline(cin, inputNameS);
			curr = find(inputNameS);
		}

		else if (entered == 'f') {
			curr = curr->getParent();
		}

		else if (entered == 'g') {
			cout << "Enter the name of the element you wish to remove: ";
			cin.get();
			getline(cin, inputNameS);

			ListElements* temp = curr->find(inputNameS);
			curr->remove(temp);

			for (auto it = all.begin(); it != all.end(); ++it) {
				temp = *it;
				
				if (temp->getName() == inputNameS){
					all.erase(it);
					break;
				}
			}
		}
		
		 else if (entered == 'h') {
                       cout << "Enter the name of the element you wish to copy: ";
                        cin.get();
                        getline(cin, inputNameS);

                        ListElements* temp = find(inputNameS);
			ListElements* newOne = temp->clone();
			all.push_back(newOne);
			cout << endl;
                }
		else if (entered == 'j') {
			cout << endl;
			cout << curr->getName() << endl;
			cout << endl;
			ListElements* temp = nullptr;

			for (int i = 0; i < curr->getSize(); ++i) {
				temp = curr->at(i);

				cout << "\t" << temp->getName() << "(" << temp->getPriority() << ")" << endl;
			}

			cout << endl;
		}
		
		else if (entered == 'i') {
			cout << "Please enter the name of the element you wish to mark: ";
			cin.get();
			getline(cin, inputNameS);
			ListElements* temp = find(inputNameS);
			temp->markComplete();
			cout << endl << endl;
		}
		//mark complete 
		
		else if (entered == 'k') {
			ListElements* temp = nullptr;
			for (int i = 0; i < curr->getSize(); ++i) {
				temp = curr->at(i);
				if (temp->getCompleted() == true) {
					cout << temp->getName() << " (" << temp->getPriority() << ")" << endl;
				}
			}

			if (temp == nullptr){
				cout << "No completed items in this list" << endl;
			}

			cout << endl;
		}
		
		
		entered = main_menu(curr);
	}

	return 0;
}

ListElements* find (string name) {
	ListElements* temp = nullptr;
       	for (auto it = all.begin(); it != all.end(); ++it) {
               	temp = *it;

                if (temp->getName() == name) {
			return temp;
                }
        }
	assert (temp != nullptr);
}


char main_menu(ListElements* currList) {
	cout << "Current List: " << currList->getName() << endl;
	cout << "Please select an action: " << endl << endl;
	cout << "(a) Change the name of your list" << endl;
	cout << "(b) Create a new list" << endl;
	cout << "(c) Create and add a new task to current list" << endl;
	cout << "(d) Add a list to current list" << endl;
	cout << "(e) Change current list to sublist" << endl;
	cout << "(f) Change back to parent list" << endl;
	cout << "(g) Remove an element from the list" << endl;
	cout << "(h) Create a copy of the current list" << endl;
	cout << "(i) Mark an element as complete" << endl;
	cout << "(j) Print elements of current list" << endl;
	cout << "(k) Print elements of current list that are completed" << endl;
	cout << "(l) Print expanded list" << endl;
	cout << "(q) Quit" << endl;

	char in;

	cin >> in;

	return in;
}
