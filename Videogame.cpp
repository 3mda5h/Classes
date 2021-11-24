//title, year, publisher, rating.
#include <iostream>
#include "Videogame.h"

using namespace std;

Videogame::Videogame()
{
  publisher = new char[100];
  int rating; 
}
  
char* Videogame::getPublisher()
{
  return publisher;  
}

int Videogame::getRating()
{
  return rating;
}





