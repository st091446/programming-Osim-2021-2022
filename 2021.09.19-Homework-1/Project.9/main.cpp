#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    int x = 0;
    int x2 = 0;
    cin >> x;
    x2 = x * x;
    cout << endl;
    cout << "  " << (x2 + x) * (x2 + 1) + 1<< endl;

    return EXIT_SUCCESS;
}
