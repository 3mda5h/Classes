#ifndef VIDEOGAME_H
#define VIDEOGAME_H

#include <iostream>
#include "Media.h"

class Videogame : public Media
{
  public:
    Videogame();
    char* getPublisher();
    char* getRating();
    char* publisher;
    char* rating;
};

#endif