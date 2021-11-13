#include <iostream>
#include <windows.h>

using namespace std;

int main(int argc, char* argv[])
{
	double n = 0;
	cin >> n;

	long long intn = *((long long*)&n);

	for (int i = 0; i < sizeof(long long) * 8; i++)
	{

		 long long bit = 0;

		 bit = ((long long)1) << ((long long) * 8 - 1 - i);

		long long cbit = 0;

		cbit = (intn & bit) >> (long long) * 8 - 1 - i);
		cout << cbit;

		if ((i + 1) % 4 == 0)
		{
			cout << " ";
		}
	}
	cout << endl;
	return EXIT_SUCCESS;
}

