#ifndef MOVIETHEATER_H
#define MOVIETHEATER_H

#include <string>
#include <vector>

class MovieTheater {
public:
    // Attributes
    std::string theaterName;
    int screenCount;
    std::vector<std::string> movieList;
    std::vector<double> ratingList;
    std::vector<int> ticketSales;

    // Member Functions
    MovieTheater(const std::string &name, int screens);
    void addMovie(const std::string &movieName, double rating);
    std::string getMovie(int index) const;
    double getRating(int index) const;
    void sellTicket(int index);
    int getTotalTickets() const;
    std::string highestRatedMovie() const;
    int getMovieIndex(const std::string &movieName) const;
};

#endif
