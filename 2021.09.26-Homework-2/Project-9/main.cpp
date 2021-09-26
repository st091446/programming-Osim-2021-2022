#include <iostream>
#include <windows.h>

using namespace std;

int main( int argc, char* argv[])
{
    int N=0;
    int M=0;
    int x=0;
    int y=0;
    cin>>N>>M>>x>>y;
    cout<<endl;
    if (x>1)
    {
        cout<<x-1<<" "<<y<<endl;
    }
    if (x<N)
    {
        cout<<x+1<<" "<<y<<endl;
    }
    if (y>1)
    {
        cout<<x<<" "<<y-1<<endl;
    }
    if (y<M)
    {
        cout<<x<<" "<<y+1<<endl;
    }

    return EXIT_SUCCESS;
}
