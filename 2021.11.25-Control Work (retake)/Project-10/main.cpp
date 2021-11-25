#include <iostream>
#include <windows.h>

using namespace std;

int main(int argc, char* argv[])
{
int a[1000]{0};
int i = 0;
int n = 0;
int s = 0;
cin >> n;

for(i = 0; i < n ; i++)
cin >> a[i];

s= a[0] + a[n-1] + ((a[1] > a[n-2]) ? a[1] : a[n-2]);

for(i = 1;i < n - 1; i++)
{
    if( a[i-1] + a[i] + a[i+1] > s) s = a[i-1] + a[i] + a[i+1];
}
cout << s;
cout << endl;

return EXIT_SUCCESS;
}
