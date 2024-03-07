// Person.cpp
#include "Person.h"
// Constructors
Person::Person() : id(0) {}
Person::Person(const std::string& lName, const std::string&
fName, int ID)
: lastName(lName), firstName(fName), id(ID) {}
// Getters
std::string Person::getLastName() const {
return lastName;
}
std::string Person::getFirstName() const {
return firstName;
}
int Person::getId() const {
return id;
}
// Setters
void Person::setLastName(const std::string& lName) {
lastName = lName;
}
void Person::setFirstName(const std::string& fName) {
firstName = fName;
}
void Person::setId(int ID) {
id = ID;
}
