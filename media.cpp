#include <iostream>
#include "media.h"
#include "movie.h"
#include "music.h"
#include "videogames.h"

using namespace std;

class Media
{
  public:
  title = new char[100];
  int year;

  *char getTitle()
  {
    return title; 
  }

  int getYear()
  {
    return year;
  }
};