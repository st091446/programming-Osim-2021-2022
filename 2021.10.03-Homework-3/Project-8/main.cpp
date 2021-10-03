#include <iostream>
#include <windows.h>

using namespace std;

int main(int argc, char* argv[])
{
    int N = 0;
    int sum = 0;
    cin >> N;
    cout<<endl;
    for (int i = 1; i <= N; i++)
    {
        sum = sum + i;
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"  "<<"sum="<<sum<<endl;

    return EXIT_SUCCESS;
}
