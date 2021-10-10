#include <iostream>
#include <windows.h>

using namespace std;

int main(int argc, char* argv[])
{
    int a = 0;
    int b = 0;
    int c = 0;
    int x = 0;
    int y = 0;
    int z = 0;
    cin >> a >> b >> c >> x >> y >> z;
    cout << endl;
    cout << " " << (z + (y * 60) + (x * 3600)) - (c + (b * 60) + (a * 3600)) << endl;

    return EXIT_SUCCESS;
}
