//title, director, year, duration, rating
#include <iostream>
#include "media.cpp"
#include "movie.h"

using namespace std;

class Movie : public Media
{
public:
  director = new char[100];
  int rating; //out of 5?
  int duration; //in minutes 
  
  char* Movie::getDirector()
  {
    return director; 
  }

  int Movie::getRating()
  {
    return rating;
  }

  int getDuration()
  {
    return duration;
  }
};