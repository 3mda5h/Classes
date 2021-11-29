#ifndef MEDIA_H
#define MEDIA_H

#include <iostream>
using namespace std;

class Media
{
  public:
    Media();
    ~Media();
    char* getTitle();
    char* getYear();
    virtual void printInfo();
    char* title;
    char* year;
};

#endif