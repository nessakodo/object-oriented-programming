#include "MovieTheater.h"
#include <algorithm>

// Parameterized constructor
MovieTheater::MovieTheater(const std::string &name, int screens)
    : theaterName(name), screenCount(screens) {}

void MovieTheater::addMovie(const std::string &movieName, double rating) {
    movieList.push_back(movieName);
    ratingList.push_back(rating);
    ticketSales.push_back(0);
}

std::string MovieTheater::getMovie(int index) const {
    if (index >= 0 && index < movieList.size()) {
        return movieList[index];
    }
    return "Movie not found";
}

double MovieTheater::getRating(int index) const {
    if (index >= 0 && index < ratingList.size()) {
        return ratingList[index];
    }
    return -1.0;  // A negative value indicates that the movie was not found.
}

void MovieTheater::sellTicket(int index) {
    if (index >= 0 && index < ticketSales.size()) {
        ticketSales[index]++;
    }
}

int MovieTheater::getTotalTickets() const {
    int total = 0;
    for (int sales : ticketSales) {
        total += sales;
    }
    return total;
}

std::string MovieTheater::highestRatedMovie() const {
    if (ratingList.empty()) {
        return "No movies available";
    }

    double maxRating = *std::max_element(ratingList.begin(), ratingList.end());
    int index = std::distance(ratingList.begin(), std::find(ratingList.begin(), ratingList.end(), maxRating));

    return movieList[index];
}

int MovieTheater::getMovieIndex(const std::string &movieName) const {
    auto it = std::find(movieList.begin(), movieList.end(), movieName);
    if (it != movieList.end()) {
        return std::distance(movieList.begin(), it);
    }
    return -1;  // Movie not found.
}
