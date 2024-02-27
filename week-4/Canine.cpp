#include "Canine.h"
#include <iostream>
#include <string>

// constructor
Canine::Canine(std::string name, std::string breed, float weight, int age, std::string color, char gender)
: 
name(name), breed(breed), weight(weight), age(age), color(color), gender(gender)
{
    // blank intentionally
}

// getter implementations

void Canine::getCanine()
{
    std::cout << "Name: " << name << std::endl
              << "Breed: " << breed << std::endl
              << "Weight (kilos): " << weight << std::endl
              << "Age (months): " << age << std::endl
              << "Color: " << color << std::endl
              << "Gender: " << gender << std::endl;
}

std::string Canine::getName()
{
    return name;
}

std::string Canine::getBreed()
{
    return breed;
}

float Canine::getWeight()
{
    return weight;
}

int Canine::getAge()
{
    return age;
}

std::string Canine::getColor()
{
    return color;
}

char Canine::getGender()
{
    return gender;
}


// setter implementations
void Canine::setName(std::string canineName)
{
    name = canineName;
}

void Canine::setBreed(std::string canineBreed)
{
    breed = canineBreed;
}

void Canine::setWeight(float canineWeight)
{
    weight = canineWeight;
}

void Canine::setAge(int canineAge)
{
    age = canineAge;
}

void Canine::setColor(std::string canineColor)
{
    color = canineColor;
}

void Canine::setGender(char canineGender)
{
    gender = canineGender;
}

void Canine::setCanine()
{
    std::cout << "Enter a Name: ";
    std::cin >> name;

    std::cout << "Enter a Breed: ";
    std::cin >> breed;

    std::cout << "Enter a Weight (in kilos): ";
    std::cin >> weight;

    std::cout << "Enter an Age (in months): ";
    std::cin >> age;

    std::cout << "Enter a Color: ";
    std::cin >> color;

    std::cout << "Enter a Gender (M for Male, F for Female): ";
    std::cin >> gender;
}
