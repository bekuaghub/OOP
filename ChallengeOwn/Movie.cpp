#include "Movie.hpp"
#include <string>
#include <iostream>

Movie::Movie (std::string valName, std::string valRating, int valWatched)
:name{valName}, rating{valRating}, watched{valWatched} {
	
}

Movie::Movie (const Movie &source)
:name{source.name}, rating{source.rating}, watched{source.watched} {
	
}

Movie::~Movie() {
}

