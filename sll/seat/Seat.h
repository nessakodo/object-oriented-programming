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
    Seat(bool assigned, const std::string &occupant); // Parameterized Constructor: Accepts assigned and occupant. Initializes the seat with assignment status, and occupant information.

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


// The occupant field serves to identify who is occupying the seat, whether it's a member (in which case it stores the member's name) or a guest. This allows for more detailed tracking of seat assignments.
// Ensure that the assignToMember and assignToGuest methods properly handle the assigned flag and the occupant string to reflect the current state accurately.
// Main:

// Demonstrate creating Seat objects with varying configurations (row, column, assignment status, and occupant). Use the assignToMember, assignToGuest, and release methods to update seat assignments, and use getOccupant to verify the correct occupant information.
// Challenge Tasks (Optional):

// Enhanced Features:

// Introduce functionality to keep track of seat assignment history, recording each time a seat's assignment changes, including the name of the member or if it was assigned to a guest.
// Implement a method to display the seat's full history, showing all previous occupants and the times of their occupancy.
// Exceptions:

// Add error handling to prevent assigning an already occupied seat and to validate the row and column values upon seat creation, ensuring they are within a realistic and acceptable range.

// Note: pass by reerence is what const says, you can look at my original but you cannot change it