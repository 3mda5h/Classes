//title, director, year, duration, rating
#include <iostream>
#include "media.cpp"
using namespace std;

class Movie : public Media
{
public:
  char director[100];
  char rating[100];
  int duration; //in minutes 
};