//title, year, publisher, rating.
#include <iostream>
#include "media.cpp"
#include "videogames.h"

using namespace std;

class Videogames : public Media
{
public:
  char publisher[100];
  int rating; 
  
  char getPublisher()
  {
    return publisher;  
  }

  int getRating()
  {
    return rating;
  }
};




