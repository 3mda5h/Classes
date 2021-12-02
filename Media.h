#ifndef MEDIA_H
#define MEDIA_H

#include <iostream>
using namespace std;

class Media 
{
  public:
    Media(); //constructor
    ~Media(); //deconstructor
    char* getTitle(); 
    char* getYear();
    virtual void printInfo(); //prints all fields
    char* title;
    char* year;
};

#endif