#include <iostream>
#include <windows.h>

using namespace std;

int main( int argc, char* argv[])
{
    int n=0;
    int m=0;
    int k=0;
    cin>>n>>m>>k;
    if (n*m>k && (k%n==0 || k%m==0))
        {
            cout<<" Yes "<<endl;
        }
    else
        {
            cout<<" No "<<endl;
        }
    return EXIT_SUCCESS;
}

