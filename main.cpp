#include <iostream>
#include <cstring>
#include "Media.cpp"
#include "Media.h"

using namespace std;

int main() 
{
  bool running = true;
  char input[100];
  do
  {
    cin.get(input, 100);
    for(int i = 0; i > strlen(input); i++)
    {
      input[i] = toupper(input[i]);
    }
    if(strcmp(input, "ADD") == 0)
    {
      Media* media = new Media();
      cout << "enter media type (movie, music, or videogame)" << endl;
      cin.get(input, 100);
      do
      {
        if(strcmp(input, "movie") == 0)
        {
          
        }
        if(strcmp(input, "music") == 0)
        {

        }
        if(strcmp(input, "videogame") == 0)
        {

        }
        else
        {

        }
      } while((strcmp(input, "movie") != 0) && (strcmp(input, "music") != 0) && (strcmp(input, "videogame") != 0));
    }
    if(strcmp(input, "SEARCH") == 0)
    {

    }
    if(strcmp(input, "DELETE") == 0)
    {

    }
    if(strcmp(input, "QUIT") == 0)
    {
      running = false;
    }
  }while(running == true);
} 