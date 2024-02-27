
#include <iomanip>
#include <iostream>
#include <random>

std::default_random_engine engine{static_cast<unsigned int>(time(0))};
std::uniform_int_distribution<unsigned int> randomFloat{1,6};




for (unsigned int counter = 1, counter <= 20, ++counter) 
{
    std::cout << std::setw(10) << randomFloat(engine);

    if (counter % 5 == 0) {
        std::count << std::endl;
    }
}

