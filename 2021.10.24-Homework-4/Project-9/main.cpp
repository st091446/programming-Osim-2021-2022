#include <iostream>
#include <windows.h>

using namespace std;

int main(int argc, char* argv[])
{
    int array[100];
    int N = 0;
    cout << " Vvedi kolvo elementov v massive: ";
    cin >> N;
    for(int i = 0; i < N; i++)
    {
      cout << " Vvod elementa array[" << i << "]= ";
      cin >> array[i];
    }
    cout << endl;

    for(int i = N - 1; i >= 0; --i)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    return EXIT_SUCCESS;
}






