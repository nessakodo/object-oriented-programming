#include <iostream>

int main()
{
    int sum{0};
    int x{1};

    while (x <= 10)
    {
        sum += x;
        ++x;
    }
    std::cout << "the sum is: " << sum << std::endl;


    // Testing sum_n equation for funsies
    
    int num(10);
    int result = num*(num+1)/2;
    std::cout << "the gauss equation gives us a result of: " << result << std::endl;
}