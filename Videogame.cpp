//videogame contains fields: title, year, publisher, rating.
#include <iostream>
#include "Videogame.h"

using namespace std;

Videogame::Videogame()
{
  publisher = new char[100];
  rating = new char[100]; 
}

Videogame::~Videogame()
{
  delete[] publisher;
  delete[] rating;
}
  
char* Videogame::getPublisher()
{
  return publisher;  
}

char* Videogame::getRating()
{
  return rating;
}

//print all fields
void Videogame::printInfo()
{
  cout << title << ", " << year << ", published by " << publisher << ", rated " << rating << " star(s)" << endl; 
}





