#include <iostream>
#include <windows.h>

using namespace std;

int main(int argc, char* argv[])
{
    int n = 0;
    int i = 1;
    int f = 1;
    cin >> n;
    cout << endl;
    for (i = 1; i <= n; i++)
    {
        f = f * i;
    }
    cout<<" "<<f<<endl;

    return EXIT_SUCCESS;
}
