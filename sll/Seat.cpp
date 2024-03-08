// Seat.cpp

#include "Seat.h"

// Constructors:

    // Default Constructor: Initialize assigned to false. occupant is initialized as an empty string.
    Seat::Seat() 
    : 
    assigned(false), occupant("")
    {
        // empty
    }

    // Parameterized Constructor: Accepts assigned and occupant. Initializes the seat with assignment status, and occupant information.
    Seat::Seat(bool assigned, const std::string &occupant) 
    :  
    assigned(assigned), occupant(occupant) 
    {
        // empty
    } 

// Accessors (getters)

    // isAssigned(): Returns true if the seat is assigned, otherwise false.
    bool Seat::isAssigned() 
    {
        return assigned;
    }

    // getOccupant(): Returns the name of the occupant or "Guest" if the seat is assigned to a non-member guest.
    std::string Seat::getOccupant() 
    {
        if (assigned)
        {
            return occupant.empty() ? "Guest" : occupant;
        }
        else
        {
            return "Seat is not assigned.";
        }
    }

// Mutators (setters):

    // assign(const std::string& name): Marks the seat as assigned and sets the occupant to the provided name.
    void Seat::assign(const std::string &name)
    {
        assigned = true;
        occupant = name;
    }

    // release(): Marks the seat as available and clears the occupant information.
    void Seat::release()
    {
        assigned = false;
        occupant = "";
    }

// Other functions:

    // to_string(): Used to get a string representation of the class. See the Display Specs file for example formatting.
    std::string Seat::to_string() const
    {
        return "Seat";
    }
    




// Notes:



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
