#include <iostream>
#include "Song.h"

const int MAX_SONGS = 100;

int main() {
    Song catalog[MAX_SONGS];
    int numSongs = 0;
    int option;

    do {
        std::cout << "==================" << std::endl;
        std::cout << "Song Menu Example" << std::endl;
        std::cout << "==================" << std::endl;
        std::cout << "1) Add Song" << std::endl;
        std::cout << "2) Print Songs" << std::endl;
        std::cout << "99) Exit" << std::endl;
        std::cout << "------------------" << std::endl;
        std::cout << "Enter option: ";
        std::cin >> option;

        switch (option) {
            case 1: {
                if (numSongs < MAX_SONGS) {
                    std::string track, genre;
                    int bitrate;
                    std::cout << "Enter track name: ";
                    std::cin.ignore(); // Clear input buffer
                    std::getline(std::cin, track);
                    std::cout << "Enter genre: ";
                    std::getline(std::cin, genre);
                    std::cout << "Enter bitrate (bps): ";
                    std::cin >> bitrate;
                    catalog[numSongs++] = Song(track, genre, bitrate);
                    std::cout << "Song added successfully!" << std::endl;
                } else {
                    std::cout << "Catalog full! Cannot add more songs." << std::endl;
                }
                break;
            }
            case 2: {
                std::cout << "|                          TRACK |           Genre |    BitRate      |    Kbps.         |" << std::endl;
                for (int i = 0; i < numSongs; ++i) {
                    catalog[i].print();
                }
                break;
            }
            case 99:
                std::cout << "Exiting program..." << std::endl;
                break;
            default:
                std::cout << "Invalid option! Please try again." << std::endl;
        }
    } while (option != 99);

    return 0;
}
