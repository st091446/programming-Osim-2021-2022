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
		printf(" Меню: \n");
		printf("0. Выход из программы. \n");
		printf("1. Вывод текущего состояния массива. \n");
		printf("2. Добавить элемент в конец массива. \n");
		printf("3. Добавить элемент в начало массива. \n");
		printf("4. Удалить элемент из конца массива. \n");
		printf("5. Удалить элемент из начало массива. \n");
		printf("6. Развернуть массив. \n");

	while (!exiting)
	{
		cout << " Input your choice: ";
		cin >> choice;
		switch (choice)
		{
		case 0:
			exiting = true;
			cout << " Успешный выход! ";
			break;
		case 1:
			cout << " Массив фактический: ";
			if (actcap == 0)
			{
				cout << " Пустой ";
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
				cout << " Новый элемент в конце: ";
				cin >> array[actcap];
				break;
			case 3:
				cout << " Новый элемент в начале: ";
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
				cout << " Последний элемент успешно удален! " << endl;
			}
			else
			{
				cout << " Невозможно удалить. Массив пусть! "<<endl;
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
				cout << " Первый элемент успешно удален! " << endl;
			}
			else
			{
				cout << " Невозможно удалить. Массив пусть! "<<endl;
			}
			break;
		case 6:
			for (int i = 0; i <= (actcap - 1) / 2; i++)
			{
				int t = array[i];
				array[i] = array[actcap - i - 1];
				array[actcap - i - 1] = t;
			}
			cout << " Массив успешно инвертирован! " << endl;
			break;
		case 7:
		printf(" Меню: \n");
		printf("0. Выход из программы. \n");
		printf("1. Вывод текущего состояния массива. \n");
		printf("2. Добавить элемент в конец массива. \n");
		printf("3. Добавить элемент в начало массива. \n");
		printf("4. Удалить элемент из конца массива. \n");
		printf("5. Удалить элемент из начало массива. \n");
		printf("6. Развернуть массив. \n");

			break;
		default:
			cout << " Ошибка 404 " << endl << " Неправилный вариант. Повторите попытку " << endl;
			break;
		}
		cout << endl;
	}

	delete[] array;
	return EXIT_SUCCESS;
}

