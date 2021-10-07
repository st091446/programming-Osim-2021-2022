#include <iostream>
#include <stdlib.h>
using namespace std;

int main(int argc, char* argv[])
{
    int a=0,b=0, max,min;
    cin>>a>>b;
    cout<<endl;
    max=(a+b+abs(a-b))/2;
    min=(a+b-abs(a-b))/2;
    cout<<"  "<<" max="<<max<<" min="<<min<<endl;
    cout<<endl;
    cout<<"     max="<<max<<endl;

    return 0;
}
