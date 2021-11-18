//title, artist, year, duration, publisher.
#include <iostream>
#include "Media.cpp"
#include "Music.h"

using namespace std;

class Music : public Media
{
public:
  publisher = new char[100];
  artist = new char[100];
  float duration; //min.sec 
  
  char* getPublisher()
  {
    return publisher; 
  }

  char* getArtist()
  {
    return artist;
  }

  float getDuration()
  {
    return duration;
  }
};