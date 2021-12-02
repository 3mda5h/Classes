//music contains fields: title, artist, year, duration, publisher.
#include <iostream>
#include "Music.h"

using namespace std;

Music::Music()
{
  publisher = new char[100];
  artist = new char[100];
  duration = new char[100];
}

Music::~Music()
{
  delete[] publisher;
  delete[] artist;
  delete[] duration;
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

//prints all fields
void Music::printInfo()
{
  cout << title << ", " << year << ", published by " << publisher << ", artist: " << artist << ", " << duration << endl; 
}