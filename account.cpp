#include <iostream>

using namespace std;

class Account {
    public: 
        int accountNum = 0;
        int deadlineGoal = 0;
        double currentSum = 0.0;
        double sumGoal = 0;

        Account(int setAccountNum, int setDeadlineGoal, double setCurrentSum, double setSumGoal){
            this->accountNum = setAccountNum;
            this->deadlineGoal = setDeadlineGoal;
            this->currentSum = setCurrentSum;
            this->sumGoal = setSumGoal;
        }
        
        void setAccountNum(int newAccountNum){
            this->accountNum = newAccountNum;
        } 

        int getAccountNum(){
            return this->accountNum;
        }

        void setDeadlineGoal(int newDeadlineGoal){
            this->deadlineGoal = newDeadlineGoal;
        } 

        int getDeadlineGoal(){
            return this->deadlineGoal;
        }

        void setCurrentSum(int newCurrentSum){
            this->currentSum = newCurrentSum;
        } 

        double getCurrentSum(){
            return this->currentSum;
        }

        void setSumGoal(int newSumGoal){
            this->sumGoal = newSumGoal;
        } 

        double getSumGoal(){
            return this->sumGoal;
        }

};