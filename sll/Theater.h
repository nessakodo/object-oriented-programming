// Theater.h

#ifndef THEATER_H
#define THEATER_H

#include "Seat.h"

#include <iostream>
#include <string>
#include <array>
#include <iomanip>

using std::array;
using std::endl;
using std::cout;
using std::cin;
using std::string;

class Theater
{

private:

    // Private Data Members:

    // theatreNumber (int or std::string): Uniquely identifies the theater within the complex.
    int theaterNumber;

    // seatingChart (2D array of Seat objects): Represents the layout of seats in the theater.
    
    
    int rows;
    int cols;
    array <array<Seat, 10>, 10> seatingChart;

    // currentMovie (std::string, optional): The movie currently being shown in the theater.
    string currentMovie;


public:

    // Public Member Functions:

    // Constructor: Accepts theatreNumber, rows, and cols for the seating chart dimensions. Initializes all seats in seatingChart as unassigned.
    Theater();
    Theater(int theaterNumber, int rows, int cols);
    

    // Accessors (getters):

    // getTheatreNumber(): Returns the theater number.
    int getTheaterNumber();

    // getCurrentMovie(): Returns the current movie being shown.
    string getCurrentMovie();

    // getCapacity(): Returns the total number of seats (capacity).
    int getCapacity();

    // Member Functions:

    // assignSeat(int row, int col): Marks the seat at the specified row and column as assigned/occupied.
    void assignSeat(int row, int col);

    // releaseSeat(int row, int col): Marks the seat at the specified row and column as unassigned/available.
    void releaseSeat(int row, int col);

    
    // isSeatAvailable(int row, int col): Checks if the seat at the specified row and column is available. Returns true if available, false otherwise.
    bool isSeatAvailable(int row, int col);

    // setCurrentMovie(std::string movie): Sets the current movie being shown in the theater.
    void setCurrentMovie(string movie);

    // Other Functions:

    string to_string();
    // to_string(): Used to get a string representation of the class. See the Display Specs file for example formatting.

};

#endif
