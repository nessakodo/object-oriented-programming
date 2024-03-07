#include <iostream>
#include "MovieTheater.h"

void displayMenu() {
    std::cout << "\nMovie Theater Menu:\n";
    std::cout << "1. Add a Movie\n";
    std::cout << "2. Sell a Ticket\n";
    std::cout << "3. Total Tickets Sold\n";
    std::cout << "4. Highest Rated Movie\n";
    std::cout << "5. Exit\n";
}

void addMovie(MovieTheater &theater) {
    std::string movieName;
    double rating;

    std::cout << "Enter the movie name: ";
    std::cin.ignore(); // Consume the newline character
    std::getline(std::cin, movieName);

    std::cout << "Enter the movie rating (0.0 to 10.0): ";
    std::cin >> rating;

    theater.addMovie(movieName, rating);
    std::cout << "Movie added successfully.\n";
}

void sellTicket(MovieTheater &theater) {
    int movieIndex;

    std::cout << "Enter the index of the movie to sell a ticket for: ";
    std::cin >> movieIndex;

    if (movieIndex >= 0 && movieIndex < theater.movieList.size()) {
        theater.sellTicket(movieIndex);
        std::cout << "Ticket sold for " << theater.getMovie(movieIndex) << ".\n";
    } else {
        std::cout << "Invalid movie index.\n";
    }
}

int main() {
    std::string theaterName;
    int screenCount;

    // Prompt the user for theater name and screen count
    std::cout << "Enter the theater name: ";
    std::cin.ignore(); // Consume the newline character
    std::getline(std::cin, theaterName);

    std::cout << "Enter the number of screens: ";
    std::cin >> screenCount;

    MovieTheater theater(theaterName, screenCount);

    char option;

    do {
        displayMenu();
        std::cout << "Enter your choice (1-5): ";
        std::cin >> option;

        switch (option) {
            case '1':
                addMovie(theater);
                break;
            case '2':
                sellTicket(theater);
                break;
            case '3':
                std::cout << "Total tickets sold: " << theater.getTotalTickets() << "\n";
                break;
            case '4':
                std::cout << "Highest rated movie: " << theater.highestRatedMovie() << "\n";
                break;
            case '5':
                std::cout << "Exiting the program. Thank you!\n";
                break;
            default:
                std::cout << "Invalid option. Please enter a valid option (1-5).\n";
        }
    } while (option != '5');

    return 0;
}
