//title, artist, year, duration, publisher.
#include <iostream>
#include "Music.h"

using namespace std;

Music::Music()
{
  publisher = new char[100];
  artist = new char[100];
  float duration; //min.sec 
}
  
char* Music::getPublisher()
{
  return publisher; 
}

char* Music::getArtist()
{
  return artist;
}

float Music::getDuration()
{
  return duration;
}