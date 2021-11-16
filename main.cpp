#include <iostream>
#include <cstring>

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