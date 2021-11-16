//title, director, year, duration, rating
#include <iostream>
#include "media.cpp"
#include "movie.h"

using namespace std;

class Movie : public Media
{
public:
  char director[100];
  int rating; //out of 5?
  int duration; //in minutes 
  
  char getDirector()
  {
    return director; 
  }

  int getRating()
  {
    return rating;
  }

  int getDuration()
  {
    return duration;
  }
};