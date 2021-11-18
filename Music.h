#ifndef MUSIC_H
#define MUSIC_H

class Music
{
  public:
    char* getPublisher();
    char* getArtist();
    float getDuration();
  private:
    char* publisher;
    char* artist;
    float duration;
};

#endif