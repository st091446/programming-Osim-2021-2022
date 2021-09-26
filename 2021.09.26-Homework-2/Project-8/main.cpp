#include <iostream>
#include <windows.h>
#include  <math.h>

using namespace std;

int main(int argc, char* argv[])
{
    int a=0;
    int b=0;
    int c=0;
    int x=0;
    int y=0;
    int z=0;
    cin>>a>>b>>c;
    x=a*a;
    y=b*b;
    z=c*c;
    if ((a+b)<c || (a+c)<b || (b+c)<a)
    {
        cout<<"  "<<" impossible "<<endl;
    }
    else if (x+y==z)
    {
        cout<<"  "<<" right "<<endl;
    }
    else if (x+y<z)
    {
        cout<<"  "<<" acute "<<endl;
    }
    else
    {
        cout<<"  "<<" obtuse "<<endl;
    }

    return EXIT_SUCCESS;
}
