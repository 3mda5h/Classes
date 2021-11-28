#ifndef MOVIE_H
#define MOVIE_H

#include <iostream>
#include "Media.h"

using namespace std;

class Movie : public Media
{
  public:
    Movie();
    char* getDirector();
    char* getRating();
    char* getDuration();
    char* director;
    char* rating;
    char* duration;
};

#endif