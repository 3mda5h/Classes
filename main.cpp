//Classes and inheritance project - a media data base of videogames, movies, and music. User can add, search, and delete media. 
//Emily MacPherson, 11/28/21

#include <iostream>
#include <cstring>
#include <vector>
#include "Media.h"
#include "Movie.h"
#include "Music.h"
#include "Videogame.h"

using namespace std;

void newMovie(vector<Media*> &media);
void newMusic(vector<Media*> &media);
void newVideogame(vector<Media*> &media);
void searchMedia(vector<Media*> media);
void printMedia(Media* media);

int main() 
{
  bool running = true;
  char input[100];
  vector<Media*> media;
  do
  {
    cout << "enter ADD, SEARCH, DELETE, or QUIT" << endl;
    cin >> input;
    for(int i = 0; i < strlen(input); i++)
    {
      input[i] = toupper(input[i]);
    }
    if(strcmp(input, "ADD") == 0)
    {
      do
      {
        cout << "enter media type (movie, music, or videogame)" << endl;
        cin >> input;
        if(strcmp(input, "movie") == 0)
        {
          newMovie(media);
        }
        if(strcmp(input, "music") == 0)
        {
          newMusic(media);
        }
        if(strcmp(input, "videogame") == 0)
        {
          newVideogame(media);
        }
      } while((strcmp(input, "movie") != 0) && (strcmp(input, "music") != 0) && (strcmp(input, "videogame") != 0));
      cout << "media added to database" << endl;
    }
    if(strcmp(input, "SEARCH") == 0)
    {
      searchMedia(media);
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

//creats new movie class
void newMovie(vector<Media*> &media)
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
  media.push_back(movie);
}

//creats new music class
void newMusic(vector<Media*> &media)
{
  Music* music = new Music();
  cout << "enter music title" << endl;
  cin >> music->title;
  cout << "enter year" << endl;
  cin >> music->year;
  cout << "enter publisher" << endl;
  cin >> music->publisher;
  cout << "enter artist" << endl;
  cin >> music->artist;
  cout << "enter duration (minutes)" << endl;
  cin >> music->duration;
  media.push_back(music);
}

//creats new videogame class
void newVideogame(vector<Media*> &media)
{
  Videogame* vg = new Videogame();
  cout << "enter videogame title" << endl;
  cin >> vg->title;
  cout << "enter year" << endl;
  cin >> vg->year;
  cout << "enter publisher" << endl;
  cin >> vg->publisher;
  cout << "enter rating" << endl;
  cin >> vg->rating;
  media.push_back(vg);
}

//searchs media vector for matching title and year
void searchMedia(vector<Media*> media)
{
  char input[100];
  cout << "enter title or date to search by" << endl;
  cin >> input;
  cout << "search results:" << endl;
  for(int i = 0; i < media.size(); i++)
  {
    if((strcmp(media[i]->getTitle(), input) == 0) || (strcmp(media[i]->getYear(), input) == 0))
    {
      printMedia(media[i]);
    }
  }
}

//prints out the information of a media type
void printMedia(Media* media)
{
  cout << media->getTitle() << ", " << media->getYear() << endl;
}