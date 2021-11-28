//title, artist, year, duration, publisher.
#include <iostream>
#include "Music.h"

using namespace std;

Music::Music()
{
  publisher = new char[100];
  artist = new char[100];
  duration = new char[100]; //min:sec 
}
  
char* Music::getPublisher()
{
  return publisher; 
}

char* Music::getArtist()
{
  return artist;
}

char* Music::getDuration()
{
  return duration;
}