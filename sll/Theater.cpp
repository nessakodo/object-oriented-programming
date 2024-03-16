// Theater.cpp

#include "Theater.h"
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



    Theater::Theater() 
    : 
    theaterNumber(1), rows(3), cols(4) 
    {
        for (int i=0; i<rows; ++i)
        {
            for (int j=0; j<cols; ++j)
            {
                seatingChart[i][j] = Seat();
            }
        }
    }

    // Seat seatToassign = seatingChart[row-1[col-1]];
    // seatToAssign.assight();


    // Constructor: Accepts theatreNumber, rows, and cols for the seating chart dimensions. Initializes all seats in seatingChart as unassigned.
    Theater::Theater(int theaterNumber, int rows, int cols)
    :
    theaterNumber(theaterNumber), rows(rows), cols(cols)
    {
        for (int i=0; i<rows; ++i)
        {
            for (int j=0; j<cols; ++j)
            {
                seatingChart[i][j] = Seat();
            }
        }
    }
    

    // Accessors (getters):

    // getTheatreNumber(): Returns the theater number.
    int Theater::getTheaterNumber()
    {
        return theaterNumber;
    }

    // getCurrentMovie(): Returns the current movie being shown.
    string Theater::getCurrentMovie()
    {
        return currentMovie;
    }

    // getCapacity(): Returns the total number of seats (capacity).
    int Theater::getCapacity()
    {
        return rows * cols;
    }

    // Member Functions:

    // assignSeat(int row, int col): Marks the seat at the specified row and column as assigned/occupied.
    void Theater::assignSeat(int row, int col)
    {
        if (row >= 0 && row < rows && col >= 0 && col < cols)
        {
            seatingChart[row][col].assign("Occupied");
        }
        else
        {
            cout << "Seat out of bounds";
        }
    }

    // releaseSeat(int row, int col): Marks the seat at the specified row and column as unassigned/available.
    void Theater::releaseSeat(int row, int col)
    {
        if (row >= 0 && row < rows && col >= 0 && col < cols)
        {
            seatingChart[row][col].release();
        }
        else
        {
            cout << "Seat out of bounds";
        }
    }
    
    // isSeatAvailable(int row, int col): Checks if the seat at the specified row and column is available. Returns true if available, false otherwise.
    bool Theater::isSeatAvailable(int row, int col)
    {
        if (row >= 0 && row < rows && col >= 0 && col < cols)
        {
             return !seatingChart[row][col].isAssigned(); // Return true if the seat is available (not assigned).
        }
        else 
        {
            cout << "Seat out of bounds";
            return false;
        }
    }

    // setCurrentMovie(std::string movie): Sets the current movie being shown in the theater.
    void Theater::setCurrentMovie(string newMovie)
    {
        currentMovie = newMovie;
    }
    
    // to_string(): Used to get a string representation of the class. See the Display Specs file for example formatting.
    string Theater::to_string()
    {
        string output = "Theater " + std::to_string(theaterNumber) + " is showing " + currentMovie + "\n";
        output += "Seating Chart:\n";
        for (int i=0; i < rows; i++)
        {
            for (int j=0; j< cols; j++)
            {
                output += seatingChart[i][j].isAssigned() ? "|x|" : "|-|";
            }
            output += "\n";
        }
        return output;
    }
    