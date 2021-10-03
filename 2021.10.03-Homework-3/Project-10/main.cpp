#include <iostream>
#include <windows.h>

using namespace std;

int main(int argc, char* argv[])
{
    int a = 0;
    int b = 0;
    int c = 0;
    cin>>a>>b;
    cout<<endl;
    for (int i = a; i <= b; i++)
    {
        c = i * i;
        if (a <= c && c <= b && a <= b)
        {
            cout<<"  "<<c<<" ";
        }
    }

    return EXIT_SUCCESS;
}
