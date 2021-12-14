#include <iostream>
#include <windows.h>

using namespace std;

int main(int argc, char* argv[])
{
    int array[100]{0};
    int N = 0;
    cout << " Vvedi kolvo elementov v massive: ";
    cin >> N;
    for(int i = 0; i < N; i++)
    {
      cout << " Vvod elementa array[" << i << "]= ";
      cin >> array[i];
    }
    cout << endl;
    int multneg = 1;
    for ( int i = 0; i < N; i++)
    {
        if (array[i] < 0)
        {
            multneg = multneg * array[i];
        }
    }
    cout << " Multneg= " << multneg << endl;
    cout << endl;

    return EXIT_SUCCESS;
}





