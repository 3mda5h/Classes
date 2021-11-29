//title, director, year, duration, rating
#include <iostream>
#include "Movie.h"

using namespace std;

Movie::Movie()
{
  director = new char[100];
  rating = new char[100]; //out of 5?
  duration = new char[100]; //in minutes 
}

char* Movie::getDirector()
{
  return director; 
}

char* Movie::getRating()
{
  return rating;
}

char* Movie::getDuration()
{
  return duration;
}

void Movie::printInfo()
{
  cout << title << ", " << year << ", directed by " << director << ", rated " << rating << " star(s), " << duration << " min" << endl;
}