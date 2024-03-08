// main.cpp

#include "BankAccount.h"
#include <string>

#include <iostream>
#include <string>
// #include <vector>

int main()
{
// Implement a main program to test your function. To test, construct some objects, figure what you should be getting back when you call certain functions (the expected values), call the functions to get the actual values. Then, compare them to see if what you got matches the expected result.


    // Constructor Testing

    BankAccount account1 = BankAccount();
    BankAccount account2 = BankAccount("1234", "nessa");
    BankAccount account3 = BankAccount("1114", "Michael Wronski", 19000, 0.1);

    std::cout << "Account Balance: $" << account3.getBalance() << std::endl;
    std::cout << account3.to_string();

    double num;
    std::cout << "Please enter a deposit amount: ";
    std::cin >> num;
    std::cout << account3.deposit(num) << std::endl;
    std::cout << "Current balance after a deposit of $" << num << ":\n";
    std::cout << account3.to_string();

    double num2;
    std::cout << "Please enter a withdrawal amount: ";
    std::cin >> num2;
    std::cout << account3.withdraw(num2) << std::endl;
    std::cout << "Current balance after a withdrawal of $" << num2 << ":\n";
    std::cout << account3.to_string();

    std::cout << "Current balance after applying interest: \n";
    std::cout << account3.applyInterest();

    std::cout << "Transactions: \n";
    account3.printTransactions();

    return 0;
};

// Challenge Tasks (Optional):

// Enhanced Features:

// Implement a transaction history using a std::vector<std::string>. Each time a deposit, withdrawal, or interest application occurs, append a message to this list detailing the transaction.
// Provide a method printTransactionHistory() that displays this history to the user.
// Exceptions:

// Implement proper exception handling, e.g., if someone tries to set an invalid interest rate or withdraw more than the current balance.
