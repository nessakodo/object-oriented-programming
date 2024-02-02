// Canine.h 

#ifndef CANINE_H
#define CANINE_H

#include <string>

class Canine 
{
private: 
    std::string name;
    std::string breed;
    float weight; // kilo
    int age; // months
    std::string color;
    char gender;

public:
    // constructor
    explicit Canine(std::string name, std::string breed, float weight, int age, std::string color, char gender);

    //getters
    std::string getName();
    std::string getBreed();
    float getWeight();
    int getAge();
    std::string getColor();
    char getGender();
    
    void getCanine();

    // setters
    void setName(std::string canineName);
    void setBreed(std::string canineBreed);
    void setWeight(float canineWeight);
    void setAge(int canineAge);
    void setColor(std::string canineColor);
    void setGender(char canineGender);

    void setCanine();
};

#endif
