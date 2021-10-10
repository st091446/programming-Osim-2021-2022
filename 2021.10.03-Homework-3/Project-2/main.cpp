#include <iostream>
#include <windows.h>
//#include <math.h>

using namespace std;

int main(int argc, char* argv[])
{
    int n = 0;
    int i = 0;
    int t = 0;
    i = 1;
    t = 1;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        t = 2 * t;
    }
    cout << "  " << t << endl;

    return EXIT_SUCCESS;
}
