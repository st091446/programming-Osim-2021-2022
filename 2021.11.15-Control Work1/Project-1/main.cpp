#include <iostream>
#include <windows.h>

using namespace std;

int main(int argc, char* argv[])
{
    int n = 0;
    int a = 0;
    int b = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a >> b;
        cout << (19 * b + (a + 239) * (a + 366) / 2) << endl;
    }
    cout << endl;

    return EXIT_SUCCESS;
}
