#include <iostream>
#include "Media.h"

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