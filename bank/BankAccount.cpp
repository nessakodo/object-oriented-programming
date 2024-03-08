// BankAccount.cpp
#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>

#include "BankAccount.h"

    // Default Constructor: Initializes accountNumber and ownerName to empty strings, balance to 0.0, and interestRate to 0.01 (1%).
    BankAccount::BankAccount()
    :
    accountNumber(""), ownerName(""), balance(0.0), interestRate(0.01)
    {
        // empty
    }

    // Partial Parameterized Constructor: Accepts accountNumber, ownerName. Use the default values for the balance and interestRate.
    BankAccount::BankAccount(std::string accountNumber, const std::string &ownerName)
    :
    accountNumber(accountNumber), ownerName(ownerName), balance(0.0), interestRate(0.01)
    {
        // empty
    }

    // Parameterized Constructor: Accepts accountNumber, ownerName, and balance and interestRate.
    BankAccount::BankAccount(std::string accountNumber, const std::string &ownerName, double balance, double interestRate)
    :
    accountNumber(accountNumber), ownerName(ownerName), balance(balance), interestRate(interestRate)
    {
        // empty
    }

// Accessors (getters):

    // getAccountNumber(): Returns the account number.
    std::string BankAccount::getAccountNumber()
    {
        return accountNumber;
    }

    // getOwnerName(): Returns the name of the account holder.
    std::string BankAccount::getOwnerName()
    {
        return ownerName;
    }

    // getBalance(): Returns the current balance.
    double BankAccount::getBalance()
    {
        return balance;
    }

    // getInterestRate(){: Returns the annual interest rate.
    double BankAccount::getInterestRate()
    {
        return interestRate;
    }

// Mutators (setters):

    // setAccountNumber(std::string): Sets the account number.
    void BankAccount::setAccountNumber(std::string anAccountNumber)
    {
        accountNumber = anAccountNumber;
    }

    // setOwnerName(std::string): Sets the owner's name.
    void BankAccount::setOwnerName(const std::string &anOwnerName)
    {
        ownerName = anOwnerName;
    }

    // setBalance(double): Sets the balance.
    void BankAccount::setBalance(double aBalance)
    {
        balance = aBalance;
    }

    // setInterestRate(double): Sets the annual interest rate.
    void BankAccount::setInterestRate(double anInterestRate)
    {
        interestRate = anInterestRate;
    }


// Member Functions:

    // deposit(double amount): Increases the balance by the specified amount.
    double BankAccount::deposit(double amount)
    {
        if (amount > 0)
            {
                balance += amount;
            }
        else
            {
                std::cout << "deposit less or equal to 0";
            }

        return balance;
    }


    // withdraw(double amount): Decreases the balance by the specified amount, but ensure the balance doesn't go negative.
    double BankAccount::withdraw(double amount)
    {
        if (amount >= 0 && amount < balance)
            {
                balance -= amount;
            }
        else
            {
                std::cout << "withdrawal exceeds balance";
            }

        return balance;
    }



std::string BankAccount::to_string()
{
    std::ostringstream oss;
    oss << "Account Number: " << accountNumber << "\n"
        << "Owner Name: " << ownerName << "\n"
        << "Account Balance: $" << std::fixed << std::setprecision(2) << balance << "\n"
        << "Interest Rate: " << std::fixed << std::setprecision(2) << interestRate << std::endl;

    return oss.str();
}

std::string BankAccount::applyInterest()
{
    std::ostringstream oss;

    // Print current state before applying interest
    oss << "Before applying interest:\n" << to_string() << "\n";

    // Apply interest
    balance = balance * (1 + interestRate);

    // Print current state after applying interest
    oss << "After applying interest:\n" << to_string() << "\n";

    return oss.str();
}



