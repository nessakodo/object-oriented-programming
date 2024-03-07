// Utilities.cpp
#include "Person.h"
#include "Utilities.h"
#include <iostream>
#include <iomanip>
#include <ctime>

int generateRandNum() {
// Seeds the random number
std::srand(static_cast<unsigned int>(std::time(nullptr)));
return std::rand() % 5 + 1;
}
int amount() {
return std::rand() % 501 + 500; // Generates a random number between 500 and 1000
}
std::string punishment(int randNum) {
switch (randNum) {
case 1:
return "House arrest";
case 2:
return "Jail";
case 3:
return "Fine + $10000";
case 4:
return "Ankle monitor";
case 5:
return "Just the fine";
default:
return "Unknown punishment";
}
}
void display(const Person& person) {
std::cout << std::setw(20) << std::left <<
person.getLastName() + ", " + person.getFirstName()
<< std::setw(10) << std::left << person.getId() <<
std::endl;
std::cout << "Fine: $" << std::setw(5) << std::left <<
amount() << std::endl;
std::cout << "Punishment: " << punishment(generateRandNum())
<< std::endl;
}
