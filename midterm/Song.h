#ifndef SONG_H
#define SONG_H

#include <string>

class Song {
private:
    std::string track;
    std::string genre;
    int bitrate;
public:
    // Constructors
    Song(); // Default constructor
    Song(std::string track, std::string genre, int bitrate); // Explicit constructor

    // Getters and setters
    std::string getTrack() const;
    void setTrack(std::string track);
    std::string getGenre() const;
    void setGenre(std::string genre);
    int getBitrate() const;
    void setBitrate(int bitrate);

    // Print method
    void print() const;
};

#endif // SONG_H
