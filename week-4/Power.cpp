#include <iostream>

int main()
{

    int i(1);
    int power(1);

    int x;
    int y;

    std::cout << "Enter an integer: ";
    std::cin >> x;


    std::cout << "Enter an power: ";
    std::cin >> y;

    while (i <= y)
    {
        power *= x;
        ++i;
    }

    std::cout << "Result: " << power << std::endl;
    return 0;
}