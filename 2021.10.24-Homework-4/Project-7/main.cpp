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

    int min = array[0]; // минимальное число
    int k = 0;     //индекс минимального элемента
      for (int i = 0; i < N; i++)
    {
        if (min > array[i])
            {
              min = array[i];
              k = i;
            }
    }
        cout << k << endl;

    return EXIT_SUCCESS;
}













