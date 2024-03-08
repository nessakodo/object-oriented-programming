// BankAccount.h

#include <iostream>
#include <string>

// Specifications for the BankAccount Class:

class BankAccount
{

// Private Data Members:
private:


    // accountNumber (std::string): A unique identifier for the bank account.
    std::string accountNumber;

    // ownerName (std::string): Name of the account holder.
    std::string ownerName;

    // balance (double): The current balance in the account.
    double balance;

    // interestRate (double): Annual interest rate (expressed as a decimal; e.g., 0.05 for 5% per annum).
    double interestRate;

// Public Member Functions:
public:


    // Default Constructor: Initializes accountNumber and ownerName to empty strings, balance to 0.0, and interestRate to 0.01 (1%).
    BankAccount();

    // Partial Parameterized Constructor: Accepts accountNumber, ownerName. Use the default values for the balance and interestRate.
    BankAccount(std::string accountNumber, const std::string &ownerName);

    // Parameterized Constructor: Accepts accountNumber, ownerName, and balance and interestRate.
    BankAccount(std::string accountNumber, const std::string &ownerName, double balance, double interestRate);

// Accessors (getters):

    // getAccountNumber(): Returns the account number.
    std::string getAccountNumber();

    // getOwnerName(): Returns the name of the account holder.
    std::string getOwnerName();

    // getBalance(): Returns the current balance.
    double getBalance();

    // getInterestRate(): Returns the annual interest rate.
    double getInterestRate();

// Mutators (setters):

    // setAccountNumber(std::string): Sets the account number.
    void setAccountNumber(std::string anAccountNumber);

    // setOwnerName(std::string): Sets the owner's name.
    void setOwnerName(const std::string &anOwnerName);

    // setBalance(double): Sets the balance.
    void setBalance(double aBalance);

    // setInterestRate(double): Sets the annual interest rate.
    void setInterestRate(double anInterestRate);


// Member Functions:

    // deposit(double amount): Increases the balance by the specified amount.
    double deposit(double amount);

    // withdraw(double amount): Decreases the balance by the specified amount, but ensure the balance doesn't go negative.
    double withdraw(double amount);

    // applyInterest(): Applies the annual interest rate to the balance. This can be done by multiplying the balance by (1 + interestRate).
    std::string applyInterest();

    std::string to_string();
    
    void printTransactions();
};

