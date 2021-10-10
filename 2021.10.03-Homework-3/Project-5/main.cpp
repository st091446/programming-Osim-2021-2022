#include <iostream>
#include <windows.h>

using namespace std;

int main(int argc, char* argv[])
{
    int n = 0;
    int i = 0;
    int h = 0;
    i = 1;
    cin >> n;
    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << "  " << i << " ";
        }
    }
    cout << endl;

    return EXIT_SUCCESS;
}
