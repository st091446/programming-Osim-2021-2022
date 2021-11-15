#include <iostream>
#include <windows.h>

using namespace std;

int main(int argc, char* argv[])
{
    int n = 0;
    int min = 0;
    int max = 0;

    cin >> n;

    int *arr = new int[n];

    for (int i = 0; i < n; i++)
      {
        cin >> arr[i];
      }

    min = arr[0];
    max = arr[0];

    for (int i = 1; i < n; ++i)
    {
      if (max < arr[i])
     {
       max = arr[i];
     }
      if (min > arr[i])
     {
        min = arr[i];
     }
   }

    for (int i = 0; i < n; ++i)
     {
       if (arr[i] == max)
       {
         arr[i] = min;
       }
        cout << arr[i] << " ";
     }
     cout << endl;

    return EXIT_SUCCESS;
}
