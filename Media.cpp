#include <iostream>
#include "Media.h"

using namespace std;

Media::Media()
{
  title = new char[100];
  year = new char[100];
}

char* Media::getTitle()
{
  return title; 
}

char* Media::getYear()
{
  return year;
}