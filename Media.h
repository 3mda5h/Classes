#ifndef MEDIA_H
#define MEDIA_H

class Media
{
  public:
    Media();
    char* getTitle();
    int getYear();
  private:
    char* title;
    int year;
};

#endif