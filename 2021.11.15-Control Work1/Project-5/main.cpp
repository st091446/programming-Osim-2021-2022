#include <iostream>
#include <windows.h>

using namespace std;

int main(int argc, char* argv[])
{
    int M = 0;
    int N = 0;
    int x = 0;
    int y = 0;
    int a[1000];
    int b[1000];
    cin >> N >> M;
    cout << "     ";
    for (int x = 0; x < M; x++)
    {
        cin >> a[x];
    }
    cout << "      ";
    for (y = 0; y < N; y++)
    {
        cin >> b[y];
    }
    cout << "       ";
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (a[i] == b[j])
            {
                cout << b[j] << " ";
            }
        }
    }
    return EXIT_SUCCESS;
}

