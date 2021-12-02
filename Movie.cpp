//movie class contains fields: title, director, year, duration, rating
#include <iostream>
#include "Movie.h"

using namespace std;

Movie::Movie()
{
  director = new char[100];
  rating = new char[100]; 
  duration = new char[100];
}

Movie::~Movie()
{
  delete[] director;
  delete[] rating;
  delete[] duration; 
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

//prints all feilds
void Movie::printInfo()
{
  cout << title << ", " << year << ", directed by " << director << ", rated " << rating << " star(s), " << duration << " min" << endl;
}