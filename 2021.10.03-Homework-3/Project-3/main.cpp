#include <iostream>
#include <windows.h>

using namespace std;

int main(int argc, char* argv[])
{
    int a = 0;
    int n = 0;
    int i = 0;
    int j = 0;
    cin >> n;
    j = 1;
    i = 1;
    a = 1;
    cout<<endl;
    while (i <= n)
    {
     while ((j <= a) && (i <= n))
     {
         cout << i<< " ";
         i++;
         j++;

     }
     cout << endl;
     j = 1;

     a++;
    }

    return EXIT_SUCCESS;
}
