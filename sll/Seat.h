// Seat.h

#ifndef SEAT_H
#define SEAT_H

#include <iostream>

class Seat

{

private: // Private Data Members:

    bool assigned; // assigned (bool): A flag indicating whether the seat is currently assigned (true) or available (false).
    std::string occupant; // occupant (std::string): A string to store the name of the Member occupying the seat, or "Guest" if the seat is occupied by a non-member guest.


public: // Public Member Functions:

    // Constructors:
    Seat(); // Default Constructor: Initialize assigned to false. occupant is initialized as an empty string.
    Seat(bool assigned, const std::string &name); // Parameterized Constructor: Accepts assigned and occupant. Initializes the seat with assignment status, and occupant information.

    // Accessors (getters)
    bool isAssigned(); // isAssigned(): Returns true if the seat is assigned, otherwise false.
    std::string getOccupant(); // getOccupant(): Returns the name of the occupant or "Guest" if the seat is assigned to a non-member guest.


    // Mutators (setters):

    void assign(const std::string &name); // assign(const std::string& name): Marks the seat as assigned and sets the occupant to the provided name.
    void release(); // release(): Marks the seat as available and clears the occupant information.

    std::string to_string() const;
    // to_string(): Used to get a string representation of the class. See the Display Specs file for example formatting.


};

#endif
