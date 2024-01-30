#include <iostream>

int main() {

float sum = 0;
int i = 0;
    while (i < 50)
    {
    sum += i;
    ++i;
    }

std::cout << "sum: " << sum << std::endl;
return 0;
}


