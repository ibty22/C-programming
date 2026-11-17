#include<iostream>
#include<string>
using namespace std;
class BankAccount {
    private:
    string accountHolder;
    double balance;
    public:
    BankAccount(string holderName, double initialBalance) {
        accountHolder = holderName;
        if (initialBalance >= 0) {
            balance = initialBalance;
        } else {
            balance = 0;
            cout <<"warning : initial balance cannot be negative.set to 0."<<endl;
        }
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout <<"successfully deposited: " <<amount <<". New balance: " <<balance <<endl;
        } else {
            cout <<"error : deposit amount must be greater than zero." <<endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
        cout <<"error : withdrawal amount must be greater than 0." <<endl;
        return;
        }
        if (amount > balance) {
            cout <<"error : insufficient funds. Current balance: " <<balance <<endl;
        } else {
            balance -= amount;
            cout <<"successfully withdrew:$" <<amount <<". New balance: $" <<balance <<endl;
        }
    }
    void displayBalance() {
        cout <<"Account Holder: " <<accountHolder <<", Balance: $" <<balance <<endl;
        cout << "current balance: $" <<balance <<endl;
    }
};
 int main() {
    cout << " --- opening account ---" <<endl;
    BankAccount aliceAccount("Alice Smith" ,500.00);
    aliceAccount.displayBalance();
    cout <<"\n--- attempting deposits ---" <<endl;
    aliceAccount.deposit(200.00);
    aliceAccount.deposit(-50.00);
    cout <<"\n--- attempting withdrawals ---" <<endl;
    aliceAccount.withdraw(100.00);
    aliceAccount.withdraw(1000.00);
    aliceAccount.withdraw(-20.00);
    cout <<"\n--- final account balance ---" <<endl;
    aliceAccount.displayBalance();
    return 0;
}
