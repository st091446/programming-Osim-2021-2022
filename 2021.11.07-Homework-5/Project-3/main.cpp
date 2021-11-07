#include <iostream>
#include <windows.h>

using namespace std;

int main(int argc, char* argv[])
{
    int n = 0;
    cin >> n;
    if (n > 0)
    {
        cout << "  " << n;
    }
    else
    {
        cout << "  " << n * (-1);
    }
    cout << endl;

    return EXIT_SUCCESS;
}
