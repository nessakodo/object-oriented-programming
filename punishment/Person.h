// Person.h
#ifndef PERSON_H
#define PERSON_H
#include <string>
class Person {
private:
// Attributes
std::string lastName;
std::string firstName;
int id;
public:
// Constructors
Person();
Person(const std::string& lName, const std::string& fName,
int ID);
// Getters
std::string getLastName() const;
std::string getFirstName() const;
int getId() const;
// Setters
void setLastName(const std::string& lName);
void setFirstName(const std::string& fName);
void setId(int ID);
};
#endif
