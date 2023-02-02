#include "Movies.hpp"
#include "Movie.hpp"
#include <vector>
#include <string>
#include <iostream>

Movies::Movies()
{
}

Movies::~Movies()
{
}

bool Movies::add_movie(std::string name, std::string rating, int watched) {
	Movie tempMovie {name, rating, watched};
	for (Movie &checkMov:movies)
	{
		if(tempMovie.get_name() == checkMov.get_name())
			return false;
	}
	movies.push_back(tempMovie);
	return true;
}

void Movies::display() const {
	for (Movie tempMov:movies) {
		std::cout << "Movie Name: " << tempMov.get_name() << std::endl;
		std::cout << "Movie Rating: " << tempMov.get_rating() << std::endl;
		std::cout << "Movie Watched: " << tempMov.get_watched() << std::endl << "-----------------------" << std::endl;
	}
}

bool Movies::increment_watched(std::string name) {
	for (Movie &tempMov:movies) {
		if (tempMov.get_name() == name) {
			tempMov.increment_watched();
			return true;
		}
		else {}
	}		
	return false;
}

