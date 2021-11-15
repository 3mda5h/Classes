//title, artist, year, duration, publisher.
#include <iostream>
#include "media.cpp"
using namespace std;

class Music : public Media
{
public:
  char publisher[100];
  char artist[100];
  float duration; //min.sec 
};