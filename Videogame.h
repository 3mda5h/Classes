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
    virtual void printInfo();
    char* publisher;
    char* rating;
};

#endif