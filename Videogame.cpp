//title, year, publisher, rating.
#include <iostream>
#include "Videogame.h"

using namespace std;

Videogame::Videogame()
{
  publisher = new char[100];
  rating = new char[100]; 
}
  
char* Videogame::getPublisher()
{
  return publisher;  
}

char* Videogame::getRating()
{
  return rating;
}





