#ifndef MEDIA_H
#define MEDIA_H

#include <iostream>
using namespace std;

class Media
{
  public:
    Media();
    char* getTitle();
    int getYear();
    char* title;
    int year;
};

#endif