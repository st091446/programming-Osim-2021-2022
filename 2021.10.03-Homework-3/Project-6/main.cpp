#include <iostream>
#include <windows.h>

using namespace std;

int main(int argc, char* argv[])
{
    int N = 0;
    int x = 0;
    int zero = 0;
    int pos = 0;
    int neg = 0;
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        cin >> x;
       if ( x == 0 )
        {
          zero++;
        }
       else if (x > 0)
       {
        pos++;
       }
          else
       {
          neg++;
       }
    }
    cout << " " << zero << " " << pos << " " << neg << endl;

    return EXIT_SUCCESS;
}
