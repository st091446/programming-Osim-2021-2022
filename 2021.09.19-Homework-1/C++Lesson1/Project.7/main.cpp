#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int a=0;
    int b=0;
    int c;
    cin>>a>>b;
    c=a;
    a=b;
    b=c;
    cout<<endl;
    cout<<" "<<a<<" "<<b<<endl;

    return 0;
}
