#include <iostream>
#include <windows.h>

using namespace std;

int main(int argc, char* arcv[])
{
    int N = 0;
    cin >> N;
    cout << endl;
    cout << "sum=" << (N / 100) + ((N % 100) / 10) + ((N % 100 % 10)) << endl;

    return EXIT_SUCCESS;
}
