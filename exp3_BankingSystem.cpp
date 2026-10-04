#include<iostream>
using namespace std;
class SavingAccount
{
    private:
        string accountHolderName;
        int accountNumber;
        double balance;
        double interestRate;

    public:
        SavingAccount(string name, int accNo, double initialBalance, double rate)
        {
            accountHolderName = name;
            accountNumber = accNo;
            balance = initialBalance;
            interestRate = rate;
        }

        void deposit(double amount)
        {
            if (amount > 0)
            {
                balance += amount;
                cout << "Deposited: Rs. " << amount << endl;
            }
        }

        void withdraw(double amount)
        {
            if (amount > 0 && amount <= balance)
            {
                balance -= amount;
                cout << "Withdrawn: Rs. " << amount << endl;
            }
            else
            {
                cout << "Insufficient Balance!" << endl;
            }
        }

        void applyInterest()
        {
            double interest = balance * interestRate / 100;
            balance += interest;
            cout << "Interest Applied: Rs. " << interest << endl;
        }

        void displayAccountDetails()
        {
            cout << "Account Holder: " << accountHolderName << endl;
            cout << "Account Number: " << accountNumber << endl;
            cout << "Balance: Rs. " << balance << endl;
            cout << "Interest Rate: " << interestRate << "%" << endl;
        }
};

class CheckingAccount
{
    private:
        string accountHolderName;
        int accountNumber;
        double balance;
        double transactionFee;

    public:
        CheckingAccount(string name, int accNo, double initialBalance, double fee)
        {
            accountHolderName = name;
            accountNumber = accNo;
            balance = initialBalance;
            transactionFee = fee;
        }

        void deposit(double amount)
        {
            if (amount > 0)
            {
                balance += amount;
                cout << "Deposited: Rs. " << amount << endl;
            }
        }

        void withdraw(double amount)
        {
            double total = amount + transactionFee;

            if (total <= balance)
            {
                balance -= total;
                cout << "Withdrawn: Rs. " << amount
                     << " (Transaction Fee: Rs. "
                     << transactionFee << ")" << endl;
            }
            else
            {
                cout << "Insufficient Balance!" << endl;
            }
        }

        void displayAccountDetails()
        {
            cout << "Account Holder: " << accountHolderName << endl;
            cout << "Account Number: " << accountNumber << endl;
            cout << "Balance: Rs. " << balance << endl;
            cout << "Transaction Fee: Rs. " << transactionFee << endl;
        }
};

//main function

int main(){
    SavingAccount sa("Sanmay", 2428, 10000.0, 5.0);
    CheckingAccount ca("Sanmay", 2428, 10000.0, 50.0);

    sa.deposit(2000.0);
    sa.withdraw(1500.0);
    sa.applyInterest();
    sa.displayAccountDetails();
    ca.deposit(2000.0);
    ca.withdraw(1500.0);
    ca.displayAccountDetails();

return 0;
}   

