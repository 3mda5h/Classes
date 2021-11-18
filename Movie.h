#ifndef MOVIE_H
#define MOVIE_H

class movie
{
  public:
    char* getDirector();
    int getRating();
    int getDuration();
  private:
    char* director;
    int rating;
    int duration;
};

#endif