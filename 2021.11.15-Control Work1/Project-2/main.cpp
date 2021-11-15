#include <iostream>
#include <stdio.h>
#include <windows.h>

using namespace std;

int main(int argc, char* argv[])
{
    int x = 0;
    int max = 0;
    int min = 0;
    int i = 2;
    cin >> max >> min;
    while ( cin << /n )
    {

        if(i % 2)
        {
            if ( x < min )
                {
                    min = x;
                }
        }
        else if (x > max)
        {
            max = x;
        }
        i++;
    }
    cout << max + min;
    return EXIT_SUCCESS;
}

