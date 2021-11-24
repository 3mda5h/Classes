#ifndef MUSIC_H
#define MUSIC_H

#include <iostream>
#include "Media.h"

using namespace std;

class Music : public Media
{
  public:
    char* getPublisher();
    char* getArtist();
    float getDuration();
  private:
    char* publisher;
    char* artist;
    float duration;
};

#endif