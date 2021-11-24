//title, director, year, duration, rating
#include <iostream>
#include "Movie.h"

using namespace std;

Movie::Movie()
{
  director = new char[100];
  int rating; //out of 5?
  int duration; //in minutes 
}

char* Movie::getDirector()
{
  return director; 
}

int Movie::getRating()
{
  return rating;
}

int Movie::getDuration()
{
  return duration;
}