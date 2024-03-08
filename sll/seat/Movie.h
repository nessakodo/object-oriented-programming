// Movie.h

#ifndef MOVIE_H
#define MOVIE_H

#include <iostream>
#include <string>

// Specifications for the Simplified Movie Class:

// Overview
// The Movie class represents a film in the movie theater management system, including details like the title, director, runtime, and genre. The genre is represented using integers, with a function to map these integers to their string representations.

class Movie
{

// Private Data Members
private:

    // title (std::string): The title of the movie.
    std::string title;

    // director (std::string): The director of the movie.
    std::string director;

    // runtime (int): The runtime of the movie in minutes.
    int runtime;

    // genre (string): The genre of the movie, represented by an string.
    int genre;

// Public Member Functions
public:

// Constructors

    // Default Constructor: Initializes a movie with default values for each member.
    Movie();

    // Parameterized Constructor: Accepts values for title, director, runtime, and genre. Initializes the movie with these values, with genre being an integer.
    Movie(std::string title, std::string director, int runtime, const int &genre);

// Accessors (getters)

    // getTitle(): Returns the title of the movie.
    std::string getTitle();

    // getDirector(): Returns the director of the movie.
    std::string getDirector();

    // getRuntime(): Returns the runtime of the movie.
    int getRuntime();

    // getGenre(): returns the genre.
    int getGenre();

// Mutators (setters)


    // setTitle(std::string): Sets the title of the movie.
    void setTitle(std::string movieTitle);

    // setDirector(std::string): Sets the director of the movie.
    void setDirector(std::string movieDirector);

    // setRuntime(int): Sets the runtime of the movie.
    void setRuntime(int movieRuntime);

    // setGenre(int): Sets the genre of the movie using an integer.
    void setGenre(int movieGenre);


// Member Functions

    // genreToString(int genre): Converts the genre integer to its corresponding string representation. This function uses a switch case for the conversion.
    std::string genreToString(const int &genre);

    // to_string(): Used to get a string representation of the class. See the Display Specs file for example formatting.
    std::string to_string();

};


#endif