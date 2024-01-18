
#include <iostream>
#include <string>

int main () // return_type function_name ( paramaeters) { }
{
// int
int firstVar = 12;
int secondVar = 1527;
int signedVar = -137;
std::cout << "firstVar :" <<firstVar<< " secondVar :" << secondVar << " signedVar : "<< signedVar << std::endl;
// float
float firstFloat = -1.01;
float secondFloat = 4.7;
// doubles
double firstDub = -2.3;
double secondDub = -10.0;
double bigDub = 123.00000123001;
// char
char char1 = 'a';
char char2 = '&';
char char3 = '*';
// string
std::string str1 = "3 * 5";
std::cout << "Hello World, 5555-55-55655 " << std::endl;
std::cout << str1 << " " << firstVar * secondVar << std::endl;
// unary + and -
// -3.2, +10.3567
// binary + and - (addition and subtraction)
int result1 = firstVar + secondVar;
int result2 = firstVar - secondVar;
std::cout << result1 << " " << result2 << std::endl;
result2 = firstVar - secondVar + 4 - 7 + 231 + firstVar;
std::cout << result2 << std::endl;
firstVar = 5.95;
std::cout << firstVar << std::endl;
firstDub = 56;
std::cout << firstDub << std::endl;
return 0;
}
