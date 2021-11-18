#include <iostream>
#include "Media.h"
#include "Movie.h"
#include "Music.h"
#include "Videogame.h"

using namespace std;

Media::Media()
{
  title = new char[100];
  int year;
}

char* Media::getTitle()
{
  return title; 
}

int Media::getYear()
{
  return year;
}