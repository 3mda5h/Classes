//title, year, publisher, rating.
#include <iostream>
#include "Media.cpp"
#include "Videogame.h"

using namespace std;

class Videogame : public Media
{
public:
  publisher = new char[100];
  int rating; 
  
  char* getPublisher()
  {
    return publisher;  
  }

  int getRating()
  {
    return rating;
  }
};




