#include <iostream>
#include <windows.h>

using namespace std;

int main ()
{
    setlocale(LC_ALL, "Russian");
    int i = 0;
    int value;

    cout << "Введите число: ";
    cin >> value;
    cout << "\nДвоичная СС: ";

    for (i = 31; i >= 0; i--)
        {
        if ((1 << i) & value)
                {
            cout << "1";
        }
        else
        {
            cout << "0";
        }
    }

    cout << endl;
    return EXIT_SUCCESS;
}

