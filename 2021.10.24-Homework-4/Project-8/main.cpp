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

    int max = 0;
    int max2 = 0;
    max = array[0];
    max2 = max;
      for (int i = 0; i < N; i++)
    {
        if (array[i] > max)
        {
            max2 = max;
            max = array[i];
        }
    }
        max = max2;
        cout <<"  "<< max2 << endl;

    return EXIT_SUCCESS;
}






