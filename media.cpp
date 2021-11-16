#include <iostream>
#include "media.h"
#include "movie.h"
#include "music.h"
#include "videogames.h"

using namespace std;

class media
{
  public:
  char title[100];
  int year;

  char getTitle()
  {
    return title; //how to return whole array not just one char??
  }

  int getYear()
  {
    return year;
  }
};