#include <stdio.h>

using namespace std;

void print(char *text)
{
  printf("%s\n", text);
}


int main(int argc, char** argv)
{
  void (*p)(char *) = &print;
  p("Hello World!");
  
  return 0;
}
