#include <iostream>
#include <windows.h>

using namespace std;

int main(int argc, char* argv[])
{
    int n = 0;
    int k = 0;
    int C = 0;
    C = 1;
    cin >> n >> k;
    cout << endl;
    for (int i = n - k + 1; i <= n; i++)
    {
        C = C * i;
    }
    for (int i = 2; i <= k; i++)
    {
        C = C / i;
    }
    cout << "  " << C << endl;

    return EXIT_SUCCESS;
}
