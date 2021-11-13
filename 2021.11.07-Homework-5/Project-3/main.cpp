#include <iostream>
#include <windows.h>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	cin >> n;

	int bit = 0;
	bit = n >>(sizeof(n)*8-1)&1;

	int newn = 0;
	for (int i = 0; i < sizeof(newn)*8; i++)
	{
		newn = (newn << 1) | bit;
	}

	n = (newn ^ n) | bit;

	cout << n << endl;

	return EXIT_SUCCESS;
}
