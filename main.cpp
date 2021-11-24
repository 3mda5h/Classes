#include <iostream>
#include <cstring>
#include <vector>
#include "Media.h"
#include "Movie.h"
#include "Music.h"
#include "Videogame.h"

using namespace std;

void newMovie();

int main() 
{
  bool running = true;
  char input[100];
  vector<Media*> media;
  do
  {
    cin.get(input, 100);
    for(int i = 0; i > strlen(input); i++)
    {
      input[i] = toupper(input[i]);
    }
    if(strcmp(input, "ADD") == 0)
    {
      cout << "enter media type (movie, music, or videogame)" << endl;
      cin.get(input, 100);
      do
      {
        if(strcmp(input, "movie") == 0)
        {
          newMovie();
        }
        if(strcmp(input, "music") == 0)
        {
          //Music* music = new Music();
        }
        if(strcmp(input, "videogame") == 0)
        {
          //Videogame* videogame = new Videogame();
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
  } while(running == true);
} 

void newMovie()
{
  Movie* movie = new Movie();
  cout << "enter movie title" << endl;
  cin >> movie->title;
  cout << "enter year" << endl;
  cin >> movie->year;
  cout << "enter director" << endl;
  cin >> movie->director;
  cout << "enter rating" << endl;
  cin >> movie->rating;
  cout << "enter duration (minutes)" << endl;
  cin >> movie->duration;
}

void newMusic()
{

}

void newVideogame()
{

}