//title, artist, year, duration, publisher.
#include <iostream>
#include "media.cpp"
#include "music.h"

using namespace std;

class Music : public Media
{
public:
  char publisher[100];
  char artist[100];
  float duration; //min.sec 
  
  char getPublisher()
  {
    return publisher; 
  }

  char getArtist()
  {
    return artist;
  }

  float getDuration()
  {
    return duration;
  }
};