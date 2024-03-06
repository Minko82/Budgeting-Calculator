#include <iostream>

using namespace std;

class StartBudget {
    public: 
        int contributionFrequency = 0;
        double contributionAmount = 0.0;

        StartBudget(){

            cout << "\033[2J\033[1;1H"; // clears terminal

            cout << "\033[38;5;206mHow often do you want to contribute to your budgeting? \n1.) Weekly \n2.) Biweekly \033[0m \n" << endl;
		    cin >> contributionFrequency;

            // Validating input for contributionFrequency
            while ((contributionFrequency != 1) || (contributionFrequency != 2)) 
            {
                cout << "Please enter 1 for weekly contributions or 2 for biweekly contributions:" << endl;
                cin >> contributionFrequency;
            }

            cout << "\033[2J\033[1;1H"; // clears terminal

            if (contributionFrequency == 1) 
                cout << "\033[38;5;206mWeekly: How much $ are you willing to put towards budgeting?\033[0m" << endl;

            else if (contributionFrequency == 2)
                cout << "\033[38;5;206mBiweekly:How much $ are you willing to put towards budgeting?\033[0m" << endl; 

            
            cin >> contributionAmount;

        }

};