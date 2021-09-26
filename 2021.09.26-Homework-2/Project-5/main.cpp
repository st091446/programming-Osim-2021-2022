#include <iostream>
#include <windows.h>

using namespace std;

int main(int argc, char* argv[])
{
    int k=0;
    cin>>k;
    if (k%4==0 || k==1)
    {
        cout<<"  "<<" Yes "<<endl;
    }
    else
    {
        cout<<"  "<<" No "<<endl;
    }
    return EXIT_SUCCESS;
}
