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


