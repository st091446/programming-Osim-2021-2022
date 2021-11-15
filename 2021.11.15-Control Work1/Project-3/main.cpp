#include <iostream>
#include <windows.h>

using namespace std;

int nod(int x, int y)
{
    int prom = 0;

    while (x != y)
    {
     if (x > y)
     {
       prom = x;
       x = y;
       y = prom;
     }
       y = y - x;
    }
     return x;
}

   int main(int argc, char* argv[])
{
    int x = 0;
    int y = 0;
    int nok = 0;

    cin >> x >> y;

    nok = (x * y) / nod(x, y);

    cout << nok << endl;

    return EXIT_SUCCESS;
}
