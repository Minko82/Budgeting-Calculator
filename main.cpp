#include <iostream>
#include <thread> // Library used for sleep
#include "startBudget.cpp"

using namespace std;

int main()
{
	int menuOption = 0;

	cout << "\033[38;5;206mWelcome to the Budgeting Calculator!\033[0m \n" << endl; //Makes text bold + pink

	this_thread::sleep_for(chrono::milliseconds(350)); // Sleeps for 350ms

	cout << "Select an option from the following menu: " << endl;

	cout << "1.) Start Budgeting \n2.) User Guide" << endl;
	cin >> menuOption;

	// Start budgeting
	if (menuOption == 1) { 
		StartBudget budget; 
		budget.getInfo();
	}
	// User Guide 
	else if (menuOption == 2){
		StartBudget budget; 
		budget.getInfo();
	}
	// Invalid option
	else {
		while ((menuOption != 1) || (menuOption != 2)) {
			cout << "Please enter 1 for starting your budget or 2 for the user guide:" << endl;
			cin >> menuOption;
		}
	}
	
}