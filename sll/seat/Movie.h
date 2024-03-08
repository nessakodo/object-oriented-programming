// Movie.h

// Specifications for the Simplified Movie Class:

// Overview
// The Movie class represents a film in the movie theater management system, including details like the title, director, runtime, and genre. The genre is represented using integers, with a function to map these integers to their string representations.

// Private Data Members
// title (std::string): The title of the movie.
// director (std::string): The director of the movie.
// runtime (int): The runtime of the movie in minutes.
// genre (string): The genre of the movie, represented by an string.
// Public Member Functions
// Constructors
// Default Constructor: Initializes a movie with default values for each member.
// Parameterized Constructor: Accepts values for title, director, runtime, and genre. Initializes the movie with these values, with genre being an integer.
// Accessors (getters)
// getTitle(): Returns the title of the movie.
// getDirector(): Returns the director of the movie.
// getRuntime(): Returns the runtime of the movie.
// getGenre(): returns the genre.
// Mutators (setters)
// setTitle(std::string): Sets the title of the movie.
// setDirector(std::string): Sets the director of the movie.
// setRuntime(int): Sets the runtime of the movie.
// setGenre(int): Sets the genre of the movie using an integer.
// Member Functions
// genreToString(int genre): Converts the genre integer to its corresponding string representation. This function uses a switch case for the conversion.
// to_string(): Used to get a string representation of the class. See the Display Specs file for example formatting.
// Use the mapping:
// Action = 1
// Comedy = 2
// Drama = 3
// Horror = 4
// Sci-fi = 5 (Science Fiction)
// Documentary = 6
// Animation = 7
// Main
// Illustrate the use of the Movie class by creating an instance with specified properties, setting the genre using an integer, and displaying the movie's details, including the genre in string format using the genreToString method.