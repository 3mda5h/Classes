#include <iostream>

using namespace std;

class Media
{
  public:
  char title[100];
  int year;

  char getTitle()
  {
    return title;
  }

  int getYear()
  {
    return year;
  }
};