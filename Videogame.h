#ifndef VIDEOGAME_H
#define VIDEOGAME_H

class Videogame
{
  public:
    char* getPublisher();
    int getRating();
  private:
    char* publisher;
    int rating;
};

#endif