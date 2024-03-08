// Specifications for the BankAccount Class:

// Private Data Members:

// accountNumber (std::string): A unique identifier for the bank account.
// ownerName (std::string): Name of the account holder.
// balance (double): The current balance in the account.
// interestRate (double): Annual interest rate (expressed as a decimal; e.g., 0.05 for 5% per annum).
// Public Member Functions:

// Default Constructor: Initializes accountNumber and ownerName to empty strings, balance to 0.0, and interestRate to 0.01 (1%).

// Partial Parameterized Constructor: Accepts accountNumber, ownerName. Use the default values for the balance and interestRate.

// Parameterized Constructor: Accepts accountNumber, ownerName, and balance and interestRate.

// Accessors (getters):

// getAccountNumber(): Returns the account number.
// getOwnerName(): Returns the name of the account holder.
// getBalance(): Returns the current balance.
// getInterestRate(): Returns the annual interest rate.
// Mutators (setters):

// setAccountNumber(std::string): Sets the account number.
// setOwnerName(std::string): Sets the owner's name.
// setBalance(double): Sets the balance.
// setInterestRate(double): Sets the annual interest rate.
// Member Functions:

// deposit(double amount): Increases the balance by the specified amount.
// withdraw(double amount): Decreases the balance by the specified amount, but ensure the balance doesn't go negative.
// applyInterest(): Applies the annual interest rate to the balance. This can be done by multiplying the balance by (1 + interestRate).
// Notes:

// Ensure all data members are private for proper encapsulation.
// Handle cases where a user might try to withdraw more money than available in the balance.
// Add comments to explain the functionality of each member function.
// Main:

// Implement a main program to test your function. To test, construct some objects, figure what you should be getting back when you call certain functions (the expected values), call the functions to get the actual values. Then, compare them to see if what you got matches the expected result.
// Challenge Tasks (Optional):

// Enhanced Features:

// Implement a transaction history using a std::vector<std::string>. Each time a deposit, withdrawal, or interest application occurs, append a message to this list detailing the transaction.
// Provide a method printTransactionHistory() that displays this history to the user.
// Exceptions:

// Implement proper exception handling, e.g., if someone tries to set an invalid interest rate or withdraw more than the current balance.
