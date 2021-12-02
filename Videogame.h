#ifndef VIDEOGAME_H
#define VIDEOGAME_H

#include <iostream>
#include "Media.h"

class Videogame : public Media
{
  public:
    Videogame(); //constructor
    ~Videogame(); //deconstructor
    char* getPublisher();
    char* getRating();
    virtual void printInfo(); //print all fields 
    char* publisher;
    char* rating;
};

#endif