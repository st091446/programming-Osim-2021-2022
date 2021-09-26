#include <iostream>
#include <windows.h>

using namespace std;

int main(int argc, char* argv[])
{
    int k=0;
    int m=0;
    int n=0;
    cin>>k>>m>>n;
    if (n<=k)
    {
        cout<<"  "<<2*m<<endl;
    }
    else if ((2*n%k)==0)
    {
        cout<<"  "<<n/k*2*m<<endl;
    }
    else
    {
        cout<<"  "<<(m*(1+(2*n/k)))<<endl;
    }

    return EXIT_SUCCESS;
}
