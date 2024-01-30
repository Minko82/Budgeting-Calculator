#include <iostream>

using namespace std;

class StartBudget {
    public: 
        int initialAmount, incomeFrequency, incomeAmount, buckets = 0;
        
        //collects necessary details about the users budgeting
        void getInfo(){
            cout << "\033[2J\033[1;1H"; // clears terminal

		    cout << "\033[38;5;206mPlease enter the initial amount for your budget: \033[0m \n" << endl;
		    cin >> initialAmount;

            cout << "\033[38;5;206m\nHow often do you recieve your income? \n1.) Weekly \n2.) Biweekly \033[0m \n" << endl;
		    cin >> incomeFrequency;

            cout << "\033[38;5;206m\nPlease enter the income amount that you earn every \033[0m";

            if (incomeFrequency == 1) 
                cout << "\033[38;5;206mweekly period:\033[0m" << endl;
            // User Guide 
            else if (incomeFrequency == 2)
                cout << "\033[38;5;206mbiweekly period:\033[0m" << endl; 
            // Invalid option
            else {
                while ((incomeFrequency != 1) || (incomeFrequency != 2)) {
                    cout << "Please enter 1 for weekly payments or 2 for biweekly payments:" << endl;
                    cin >> incomeFrequency;
                }
            }

            cin >> incomeAmount;

            cout << "\033[38;5;206m\nHow many accounts would you like to budget for?\033[0m \n" << endl;
		    cin >> buckets;
        }

        int* creatingAccounts() {
            // Dynamically allocate an array of integers
            int* accounts = new int[buckets];

            // Initialize the array with values or perform other operations

            return accounts;
        }


};