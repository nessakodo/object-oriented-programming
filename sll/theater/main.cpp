#include "Theater.h"

int main()
{
    MovieTheater theater(1, 3, 4);

    // Test theater functionality
    theater.setCurrentMovie("Avengers: Endgame");
    theater.assignSeat(0, 0);
    theater.assignSeat(1, 1);
    theater.releaseSeat(1, 1);

    std::cout << theater.to_string();

    return 0;
}

// #include "Seat.h"

// #include <iostream>
// #include <string>

// using std::string;
// using std::cout;
// using std::cin;
// using std::endl;

// int main()
// {
//     Seat defaultSeat = Seat();
//     Seat seat1 = Seat(true, "Nessa");
//     Seat seat2 = Seat(true, "Mikie");
//     Seat seat3 = Seat(false, "");

//     string expectedNamesS1 = "Nessa";
//     string actualNamesS1 = seat1.getOccupant();

//     bool s1NameTest = expectedNamesS1 == actualNamesS1;

//     cout << "S1 name test: " << (s1NameTest ? "Pass\n" : "Fail\n") << "Actual name: " << actualNamesS1 << endl;

// return 0;


// }