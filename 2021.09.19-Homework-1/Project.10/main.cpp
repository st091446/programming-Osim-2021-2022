#include <iostream>
#include <stdlib.h>
#include <windows.h>

using namespace std;

int main(int argc, char* argv[])
{
    int a = 0;
    int b = 0;
    int max = 0;
    cin >> a >> b;
    cout << endl;
    max = (a + b + abs(a - b)) / 2;
    cout << "  " << " max=" << max;
    cout << endl;

    return EXIT_SUCCESS;
}
