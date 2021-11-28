#ifndef MUSIC_H
#define MUSIC_H

#include <iostream>
#include "Media.h"

using namespace std;

class Music : public Media
{
  public:
    Music();
    char* getPublisher();
    char* getArtist();
    char* getDuration();
    char* publisher;
    char* artist;
    char* duration;
};

#endif