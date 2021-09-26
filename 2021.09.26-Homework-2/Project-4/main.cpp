#include <iostream>
#include <windows.h>

using namespace std;

int main(int argc, char* argv[] )
{
    int a=0;
    int b=0;
    int c=0;
    int d=0;
    cin>>a>>b>>c>>d;
    if (a==0 && c==0)
    {
        cout<<" INF "<<endl;
    }
    if (a*d==b*c)
    {
        cout<<" NO "<<endl;
    }
    if (-b%a==0 && a!=b && a!=d)
    {
        cout<<"  "<<(-b/a)<<endl;
    }
    return EXIT_SUCCESS;
}
