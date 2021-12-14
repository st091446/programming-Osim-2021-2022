#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	
	int a[100] = { 0 };
	int n = 0;
	cin >> n;


	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	cout << "ARRAY : ";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	cout << "EVEN : ";
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
		{
			cout << a[i] << " ";
		}
	}
	cout << endl;

	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += a[i];
	}
	cout << "SUM : " << sum << endl;

	int pr = 1;
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 0)
		{
			pr *= a[i];
		}
	}
	cout << "PRODUCT OF NEGATIVE : " << pr << endl;

	int min = a[0];
	int imin = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] < min)
		{
			min = a[i];
			imin = i;
		}
	}
	cout << "FIRST MIN INDEX : " << imin << endl;

	int	max = a[0];
	int max2 = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > max)
		{
			max2 = max;
			max = a[i];
		}
	}
	cout << "SECOND MAX : " << max2 << endl;

	cout << "REVERSE : ";
	for (int i = n - 1; i >= 0; i--)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	cout << "ODD INDEXES : ";
	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 1)
		{
			cout << a[i] << " ";
		}
	}
	cout << endl;


	return EXIT_SUCCESS;
}