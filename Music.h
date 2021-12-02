#ifndef MUSIC_H
#define MUSIC_H

#include <iostream>
#include "Media.h"

using namespace std;

class Music : public Media
{
  public:
    Music(); //constructor
    ~Music(); //deconstructor
    char* getPublisher();
    char* getArtist();
    char* getDuration();
    virtual void printInfo(); //prints all fields
    char* publisher;
    char* artist;
    char* duration;
};

#endif