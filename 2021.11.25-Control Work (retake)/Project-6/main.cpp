#include <iostream>
#include <windows.h>

using namespace std;

int main(int argc, char* argv[])
{
 int n = 0;
 int k = 0;
 cin >> n;
 k = n * 45 + n / 2 * 5 + (n - 1) / 2 * 15;
 cout << 9 + k / 60 << " " << k % 60;

 return EXIT_SUCCESS;
}
