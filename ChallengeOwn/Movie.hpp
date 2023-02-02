#ifndef _MOVIE_H_
#define _MOVIE_H_
#include <string>

class Movie
{
private:
	std::string name;
	std::string rating;
	int watched;
public:
	Movie(std::string name = "None", std::string rating = "G", int watched = 0);
	Movie(const Movie &source);
	~Movie();
	
	void set_name(std::string name) { this->name = name; }
	std::string get_name() const{ return this->name; }
	
	void set_rating(std::string rating) { this->rating = rating; }
	std::string get_rating() const { return this->rating; }
	
	void set_watched(int watched) { this->watched = watched; }
	int get_watched() const { return this->watched; }
	
	void increment_watched() { ++watched; }
	
	void display() const;
	
};

#endif // _MOVIE_H_
