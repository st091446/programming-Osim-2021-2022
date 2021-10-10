#include <iostream>
#include <windows.h>

using namespace std;

int main( int argc, char* argv[])
{
    int n = 0;
    cin >> n;
    cout << endl;
    if ((n % 4 == 0) && (n % 100 != 0) || (n % 400 == 0))
    {
     cout << " Yes " << endl;
    }
    else
    {
     cout << " No " << endl;
    }

    return EXIT_SUCCESS;
}
