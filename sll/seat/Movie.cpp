// Movie.cpp

#include <iostream>
#include <string>
#include <sstream>
// Movie Class Implementations

#include "Movie.h"

// Constructors

    // Default Constructor: Initializes a movie with default values for each member.
    Movie::Movie()
    :
    title(""), director(""), runtime(0), genre(0)
    {
        // empty 
    }

    // Parameterized Constructor: Accepts values for title, director, runtime, and genre. Initializes the movie with these values, with genre being an integer.
    Movie::Movie(std::string title, std::string director, int runtime, const int &genre)
    :
    title(title), director(director), runtime(runtime), genre(genre)
    {
        // empty 
    }

// Accessors (getters)

    // getTitle(): Returns the title of the movie.
    std::string Movie::getTitle()
    {
        return title;
    }

    // getDirector(): Returns the director of the movie.
    std::string Movie::getDirector()
    {
        return director;
    }

    // getRuntime(): Returns the runtime of the movie.
    int Movie::getRuntime()
    {
        return runtime;
    }

    // getGenre(): returns the genre.
    int Movie::getGenre()
    {
        return genre;
    }

// Mutators (setters)


    // setTitle(std::string): Sets the title of the movie.
    void Movie::setTitle(std::string movieTitle)
    {
        title = movieTitle;
    }

    // setDirector(std::string): Sets the director of the movie.
    void Movie::setDirector(std::string movieDirector)
    {
        director = movieDirector;
    }

    // setRuntime(int): Sets the runtime of the movie.
    void Movie::setRuntime(int movieRuntime)
    {
        runtime = movieRuntime;
    }

    // setGenre(int): Sets the genre of the movie using an integer.
    void Movie::setGenre(int movieGenre)
    {
        genre = movieGenre;
    }


// Member Functions

    // genreToString(int genre): Converts the genre integer to its corresponding string representation. This function uses a switch case for the conversion.
    std::string Movie::genreToString(const int &genre)
    {
        switch (genre)
        {
            case 1:
            return "Action";

            case 2:
            return "Comedy";

            case 3:
            return "Drama";

            case 4:
            return "Horror";

            case 5:
            return "Sci-fi";

            case 6:
            return "Documentary";

            case 7:
            return "Animation";
            
            default:
            return "Unknown";
        }
    }

    std::string Movie::to_string()
    {

        std::string output = 
               "Movie Title: " + title + "\n" + 
               "Director: " + director + "\n" +
               "Runtime: " + std::to_string(runtime) + "\n" +
               "Genre: " + genreToString(genre) + "\n";

        return output;
        // os ostringstream oss;

        // oss << "Movie Title: " + title + "\n" + 
        //        "Director: " + director + "\n" +
        //        "Runtime: " + runtime + "\n" +
        //        "Genre: " + genre.genreToString() + "\n";

        // return oss.str();
    }
    



