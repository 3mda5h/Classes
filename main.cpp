//Classes and inheritance project - a database of videogames, movies, and music. User can add, search, and delete media. 
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
void deleteMedia(vector<Media*> &media);

int main() 
{
  bool running = true;
  char input[100];
  vector<Media*> media;
  do
  {
    cout << "enter ADD, SEARCH, DELETE, or QUIT" << endl;
    //cin.getline( input;
    cin.getline(input, 100);
    //convert input to all uppercase so it's not case sensitive
    for(int i = 0; i < strlen(input); i++)
    {
      input[i] = toupper(input[i]);
    }
    if(strcmp(input, "ADD") == 0)
    {
      do
      {
        cout << "enter media type (movie, music, or videogame)" << endl;
        cin.getline(input, 100);
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
      } while((strcmp(input, "movie") != 0) && (strcmp(input, "music") != 0) && (strcmp(input, "videogame") != 0)); //keeps prompting user until valid input given
      cout << "media added to database" << endl;
    }
    if(strcmp(input, "SEARCH") == 0)
    {
      searchMedia(media);
    }
    if(strcmp(input, "DELETE") == 0)
    {
      deleteMedia(media);
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
  cin.getline(movie->title, 100);
  cout << "enter year" << endl;
  cin.getline(movie->year, 100);
  cout << "enter director" << endl;
  cin.getline(movie->director, 100);
  cout << "enter rating (1-5)" << endl;
  cin.getline(movie->rating, 100);
  cout << "enter duration (minutes)" << endl;
  cin.getline(movie->duration, 100);
  media.push_back(movie);
}

//creats new music class
void newMusic(vector<Media*> &media)
{
  Music* music = new Music();
  cout << "enter music title" << endl;
  cin.getline(music->title, 100);
  cout << "enter year" << endl;
  cin.getline(music->year, 100);
  cout << "enter publisher" << endl;
  cin.getline(music->publisher, 100);
  cout << "enter artist" << endl;
  cin.getline(music->artist, 100);
  cout << "enter duration (min:sec)" << endl;
  cin.getline(music->duration, 100);
  media.push_back(music);
}

//creats new videogame class
void newVideogame(vector<Media*> &media)
{
  Videogame* vg = new Videogame();
  cout << "enter videogame title" << endl;
  cin.getline(vg->title, 100);
  cout << "enter year" << endl;
  cin.getline(vg->year, 100);
  cout << "enter publisher" << endl;
  cin.getline(vg->publisher, 100);
  cout << "enter rating (1-5)" << endl;
  cin.getline(vg->rating, 100);
  media.push_back(vg);
}

//searchs media vector for matching title or year
void searchMedia(vector<Media*> media)
{
  char input[100];
  cout << "enter title or year to search by" << endl;
  cin.getline(input, 100);
  cout << "search results:" << endl;
  bool mediafound = false;
  for(int i = 0; i < media.size(); i++)
  {
    if((strcmp(media[i]->getTitle(), input) == 0) || (strcmp(media[i]->getYear(), input) == 0)) //if title or year match search term
    {
      media[i]->printInfo();
      mediafound = true;
    }
  }
  if(mediafound == false)
  {
    cout << "no media found" << endl;
  }
}

//deletes media matching title or year
void deleteMedia(vector<Media*> &media)
{
  char input[100];
  vector<Media*> deletelist; //media to be potentially deleted
  cout << "enter title or year of media" << endl;
  cin.getline(input, 100);
  cout << "results:" << endl;
  for(int i = 0; i < media.size(); i++)
  {
    if((strcmp(media[i]->getTitle(), input) == 0) || (strcmp(media[i]->getYear(), input) == 0)) //if title or year match search term
    {
      media[i]->printInfo();
      deletelist.push_back(media[i]);
    }
  }
  if(deletelist.size() > 0) //if delete list is not empty
  {
    do
    {
      cout << "are you sure you want to delete the above media? (yes/no)" << endl;
      cin.getline(input, 100);
      if(strcmp(input, "yes") == 0)
      {
        for(int i = 0; i < deletelist.size(); i++)
        {
          delete deletelist[i];
        }
        cout << "media deleted" << endl;
      }
      if(strcmp(input, "no") == 0)
      {
        return;
      }
    } while((strcmp(input, "yes") != 0) && (strcmp(input, "no") != 0)); //keep asking until user says yes or no
  }
  else
  {
    cout << "no media found" << endl;
    return;
  }
}