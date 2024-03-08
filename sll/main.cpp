// main.cpp 

#include "Seat.h"
#include "Theater.h" // Include the header file for the MovieTheater class

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
    // Test the Seat class
    Seat defaultSeat = Seat();
    Seat seat1 = Seat(true, "Peter");
    Seat seat2 = Seat(true, "Lois");
    Seat seat3 = Seat(false, "");

    string expectedNamesS1 = "Peter";
    string actualNamesS1 = seat1.getOccupant();

    bool s1NameTest = expectedNamesS1 == actualNamesS1;

    cout << "Seat class test:\n";
    cout << "S1 name test: " << (s1NameTest ? "Pass\n" : "Fail\n") << "Expected name: " << expectedNamesS1  << "\n" << "Actual name: " << actualNamesS1 << endl;

    // Test the MovieTheater class
    Theater theater1 = Theater(1, 5, 5); // Example: theater number 1, 5 rows, 5 columns

    // Assign and release seats
    cout << "\nTheater class test:\n";
    cout << "Availability before seat assignments: " << theater1.to_string();
    theater1.assignSeat(0, 0); // Assign the first seat
    theater1.assignSeat(1, 1); // Assign another seat
    theater1.releaseSeat(0, 0); // Release the first seat

    // Set current movie
    theater1.setCurrentMovie("The Matrix");

    // Output current movie and seating chart
    cout << "Current Movie: " << theater1.getCurrentMovie() << endl;
    cout << theater1.to_string();

    return 0;
}
