#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <stdio.h>

using namespace std;

int main(int argc, int argv[])
{
    setlocale(LC_ALL, "Russian");
	bool exiting = false;
	int capacity = 1;
	int* array = new int[capacity] {0};
	int actcap = 0;
    int choice = 0;

	    system("cls");
		printf(" ����: \n");
		printf("0. ����� �� ���������. \n");
		printf("1. ����� �������� ��������� �������. \n");
		printf("2. �������� ������� � ����� �������. \n");
		printf("3. �������� ������� � ������ �������. \n");
		printf("4. ������� ������� �� ����� �������. \n");
		printf("5. ������� ������� �� ������ �������. \n");
		printf("6. ���������� ������. \n");

	while (!exiting)
	{
		cout << " Input your choice: ";
		cin >> choice;
		switch (choice)
		{
		case 0:
			exiting = true;
			cout << " �������� �����! ";
			break;
		case 1:
			cout << " ������ �����������: ";
			if (actcap == 0)
			{
				cout << " ������ ";
			}
			else
			{
				for (int i = 0; i < actcap; i++)
				{
					cout << array[i] << " ";
				}
			}
			cout << endl;
			break;
		case 2: case 3:
			if (actcap == capacity)
			{
				int* newarray = new int[capacity * 2]{ 0 };
				for (int i = 0; i < capacity; i++)
				{
					newarray[i] = array[i];
				}
				delete[] array;
				array = newarray;
				capacity *= 2;
			}
			switch (choice)
			{
			case 2:
				cout << " ����� ������� � �����: ";
				cin >> array[actcap];
				break;
			case 3:
				cout << " ����� ������� � ������: ";
				for (int i = actcap; i > 0; i--)
				{
					array[i] = array[i - 1];
				}
				cin >> array[0];
				break;
			}
			actcap++;
			break;

		case 4:
			if (actcap > 0)
			{
				array[actcap] = 0;
				actcap--;
				cout << " ��������� ������� ������� ������! " << endl;
			}
			else
			{
				cout << " ���������� �������. ������ �����! "<<endl;
			}
			break;
		case 5:
			if (actcap > 0)
			{
				for (int i = 0; i < actcap; i++)
				{
					array[i] = array[i + 1];
				}
				actcap--;
				cout << " ������ ������� ������� ������! " << endl;
			}
			else
			{
				cout << " ���������� �������. ������ �����! "<<endl;
			}
			break;
		case 6:
			for (int i = 0; i <= (actcap - 1) / 2; i++)
			{
				int t = array[i];
				array[i] = array[actcap - i - 1];
				array[actcap - i - 1] = t;
			}
			cout << " ������ ������� ������������! " << endl;
			break;
		case 7:
		printf(" ����: \n");
		printf("0. ����� �� ���������. \n");
		printf("1. ����� �������� ��������� �������. \n");
		printf("2. �������� ������� � ����� �������. \n");
		printf("3. �������� ������� � ������ �������. \n");
		printf("4. ������� ������� �� ����� �������. \n");
		printf("5. ������� ������� �� ������ �������. \n");
		printf("6. ���������� ������. \n");

			break;
		default:
			cout << " ������ 404 " << endl << " ����������� �������. ��������� ������� " << endl;
			break;
		}
		cout << endl;
	}

	delete[] array;
	return EXIT_SUCCESS;
}

