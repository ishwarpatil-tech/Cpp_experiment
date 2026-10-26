#include <iostream>
#include <string>
using namespace std;

class SavingsAccount
{
private:
    string accountHolderName;
    int accountNumber;
    double balance;
    double interestRate;

public:
    SavingsAccount(string name, int accNumber, double initialBalance, double rate)
    {
        accountHolderName = name;
        accountNumber = accNumber;
        balance = initialBalance;
        interestRate = rate;
    }

    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        }
    }

    void withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        }
        else
        {
            cout << "Insufficient balance" << endl;
        }
    }

    void applyInterest()
    {
        double interest = balance * interestRate / 100;
        balance += interest;
        cout << "Interest Applied: " << interest << endl;
    }

    void display()
    {
        cout << "\nSavings Account" << endl;
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
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
    CheckingAccount(string name, int accNumber, double initialBalance, double fee)
    {
        accountHolderName = name;
        accountNumber = accNumber;
        balance = initialBalance;
        transactionFee = fee;
    }

    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        }
    }

    void withdraw(double amount)
    {
        double total = amount + transactionFee;

        if (total <= balance)
        {
            balance -= total;
            cout << "Withdrawn: " << amount
                 << " (Transaction Fee: " << transactionFee << ")" << endl;
        }
        else
        {
            cout << "Insufficient balance for withdrawal" << endl;
        }
    }

    void display()
    {
        cout << "\nChecking Account" << endl;
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
        cout << "Transaction Fee: " << transactionFee << endl;
    }
};

int main()
{
    SavingsAccount saving("A", 100, 500, 2);
    CheckingAccount checking("B", 200, 1200, 20);

    saving.deposit(50);
    saving.withdraw(80);
    saving.applyInterest();
    saving.display();

    checking.deposit(100);
    checking.withdraw(200);
    checking.display();

    return 0;
}
