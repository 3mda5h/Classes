#ifndef MOVIE_H
#define MOVIE_H

#include <iostream>
#include "Media.h"

using namespace std;

class Movie : public Media
{
  public:
    char* getDirector();
    int getRating();
    int getDuration();
    char* director;
    int rating;
    int duration;
};

#endif