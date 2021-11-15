//title, year, publisher, rating.
#include <iostream>
#include "media.cpp"
using namespace std;

class Videogames : public Media
{
public:
  char publisher[100];
  char rating[100]; 
};




