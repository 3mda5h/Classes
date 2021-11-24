#ifndef VIDEOGAME_H
#define VIDEOGAME_H

#include <iostream>
#include "Media.h"

class Videogame : public Media
{
  public:
    char* getPublisher();
    int getRating();
  private:
    char* publisher;
    int rating;
};

#endif