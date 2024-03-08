#include "Song.h"
#include <iostream>
#include <iomanip>

Song::Song() {
    // Default constructor initializes attributes to default values
    track = "";
    genre = "";
    bitrate = 0;
}

Song::Song(std::string track, std::string genre, int bitrate) {
    this->track = track;
    this->genre = genre;
    this->bitrate = bitrate;
}

std::string Song::getTrack() const {
    return track;
}

void Song::setTrack(std::string track) {
    this->track = track;
}

std::string Song::getGenre() const {
    return genre;
}

void Song::setGenre(std::string genre) {
    this->genre = genre;
}

int Song::getBitrate() const {
    return bitrate;
}

void Song::setBitrate(int bitrate) {
    this->bitrate = bitrate;
}

void Song::print() const {
    std::cout << "| " << std::setw(30) << std::right << track << " | "
              << std::setw(15) << std::right << genre << " | "
              << std::setw(12) << std::right << bitrate << "bps | "
              << std::setw(12) << std::right << (bitrate / 1000) << "Kbps |" << std::endl;
}
