#include <iostream>
#include <windows.h>

using namespace std;

int main(int argc, char* argv[])
{
 int x = 0;
 int y = 0;
 int M = 0;
 cin >> x;

 for (int i = 1; i <= x; i++)
 {
  for (int j = 1; j <= y; j++)
  {
   cin >> y;
   M += y;
  }
  cout << M / 2;
 }

 return EXIT_SUCCESS;
}
