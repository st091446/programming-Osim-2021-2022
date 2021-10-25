#include <iostream>
#include <windows.h>

using namespace std;

int main(int argc, char* argv[])
{
    int a = 0;
    int b = 0;
    int c = 0;
    cin >> a >> b;
    c = a;
    a = b;
    b = c;
    cout << endl;
    cout << " " << a << " " << b << endl;

    return EXIT_SUCCESS;
}
