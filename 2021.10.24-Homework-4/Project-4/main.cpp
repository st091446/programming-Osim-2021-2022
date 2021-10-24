#include <iostream>
#include <windows.h>

using namespace std;

int main(int argc, char* argv[])
{
    int array[100]{0};
    int N = 0;
    cout << " Vvedi kolvo elementov v massive:  ";
    cin >> N;
    for(int i = 0; i < N; i++)
    {
        cout << " Vvod elementa array[" << i << "]= ";
        cin >> array[i];
    }
    cout << endl;
    for (int i = 0; i < N; i++)
    {
        if (array[i] % 2 == 0)
        {
            cout << array[i] << " ";
        }
    }
    cout << endl;

    return EXIT_SUCCESS;
}
