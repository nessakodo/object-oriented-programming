

// Main
// Illustrate the use of the Movie class by creating an instance with specified properties, setting the genre using an integer, and displaying the movie's details, including the genre in string format using the genreToString method.
#include <iostream>
#include <string>
#include <iomanip>

#include "Movie.h"

int main()
{

// Constructor Testing

    Movie movie1 = Movie();
    Movie movie2 = Movie("A Clockwork Orange", "Quentin Tarantino", 334, 4);

    std::cout << movie1.to_string();
    std::cout << movie2.to_string();

    return 0;
};