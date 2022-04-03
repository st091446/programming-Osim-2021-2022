#include<iostream>
#include<cmath>
using namespace std;
class Complex
{
private:
    int    are {};
    double aim {};
    int    bre {};
    double bim {};
public:
    Complex (int a , double b , int c , double d ): are { a }, aim { b }, bre { c }, bim { d }
    {
    }
	~Complex()
	{
	}
    void plus()
    {
	    double g,s;
	    g = are + bre;
	    s = aim + bim;
		if (s > 0)
			cout << "( " << "( " << are << " )" << "+" << "( " << bre << " )" << " )" << "+" << "( " << "( " << aim << " )" << "+" << "( " << bim << " )" << " )" << "i" << " = " << g << "+" << s << "i" << '\n';
		else
			cout << "( " << "( " << are << " )" << "+" << "( " << bre << " )" << " )" << "+" << "( " << "( " << aim << " )" << "+" << "( " << bim << " )" << " )" << "i" << " = " << g << s << "i" << '\n';
    }

    void minus()
    {
		double g, s;
		g = are - bre;
		s = aim - bim;
		if (s > 0)
			cout << "( " << "( " << are << " )" << "-" << "( " << bre << " )" << " )" << "+" << "( " << "( " << aim << " )" << "-" << "( " << bim << " )" << " )" << "i" << " = " << g << "+" << s << "i" << '\n';
		else
			cout << "( " << "( " << are << " )" << "-" << "( " << bre << " )" << " )" << "+" << "( " << "( " << aim << " )" << "-" << "( " << bim << " )" << " )" << "i" << " = " << g << s << "i" << '\n';
    }

    void multiply()
    {
		double g,s;
	    g = ((are*bre) - (aim*bim));
	    s = ((are*bim) + (aim*bre));
		if(s>0)
			cout << "((" << "( " << are << " )" << "*" << "( " << bre << " )" << " )" << "-" << "(" << "( " << aim << " )" << "*" << "( " << bim << " )" << "))" << "+" << "((" << "( " << are << " )" << "*" << "( " << bim << " )" << ")+(" << "( " << aim << " )" << "*" << "( " << bre << " )" << "))" << "i" << " = " << g << "+" << s << "i" << '\n';
		else
			cout << "((" << "( " << are << " )" << "*" << "( " << bre << " )" << " )" << "-" << "(" << "( " << aim << " )" << "*" << "( " << bim << " )" << "))" << "+" << "((" << "( " << are << " )" << "*" << "( " << bim << " )" << ")+(" << "( " << aim << " )" << "*" << "( " << bre << " )" << "))" << "i" << " = " << g << s << "i" << '\n';

    }

    void division()
	{
		double g, s;
		g = ((are*bre) + (aim*bim)) / ((bre*bre) + (bim*bim));
		s = ((are*bim) - (aim*bre)) / ((bre*bre) + (bim*bim));
		if (s > 0) {
		 cout << "((" << "( " << are << " )" << "*" << "( " << bre << " )" << ")" << "-" << "(" << "( " << aim << " )" << "*" << "( " << bim << " )" << "))/((" << "( " << bre << " )" << "*" << "( " << bre << " )" << ")+(" << "( " << bim << " )" << "*" << "( " << bim << " )" << "))"
			 << "+" << "((" << "( " << are << " )" << "*" << "( " << bim << " )" << ")-(" << "( " << aim << " )" << "*" << "( " << bre << " )" << "))/((" << "( " << bre << " )" << "*" << "( " << bre << " )" << ")+(" << "( " << bim << " )" << "*" << "( " << bim << " )" << "))"
			 << "i" << '\n' << '\n' << " = " << g << "+" << s << "i" << '\n';
		}
	    else {
		  cout << "((" << "( " << are << " )" << "*" << "( " << bre << ")" << "-" << "(" << "( " << aim << " )" << "*" << "( " << bim << " )" << "))/((" << "( " << bre << " )" << "*" << "( " << bre << " )" << ")+(" << "( " << bim << " )" << "*" << "( " << bim << " )" << "))"
			  << "+" << "((" << "( " << are << " )" << "*" << "( " << bim << " )" << ")-(" << "( " << aim << " )" << "*" << "( " << bre << " )" << "))/((" << "( " << bre << " )" << "*" << "( " << bre << " )" << ")+(" << "( " << bim << " )" << "*" << "( " << bim << " )" << "))" <<
			  "i" << '\n' << '\n' << " = " << g << s << "i" << '\n';
	    }
    }

    void abs()
    {
		double g;
		g = (sqrt(pow((are - bre), 2) + pow((aim - bim), 2)));
		cout << "Корень равен: " << g << '\n';
    }

    void iversia()
    {
        are = are*(-1);
		bre = bre*(-1);
		aim = aim*(-1);
		bim = bim*(-1);
        cout << "Числа после инверсии будут такими: " << "a.re: " << are << " " << "b.re: " << bre << " " << "a.im: " << aim << " " << "b.im: " << bim << " ";
    }

};
int main()
{
    setlocale (LC_ALL, "Russian");
    int a,c;
    double b,d;
    cout<<"Введите ваши числа: ";
    cin >> a >> b >> c >> d;
    Complex our_complex_number ( a, b, c, d );
    int n = 1, operation;
    cout << "Выберите порядковый номер опрации: " <<'\n';
    cout << "1 - Сложение  "                       <<'\n';
    cout << "2 - Вычитание  "                      <<'\n';
    cout << "3 - Умножение "                       <<'\n';
    cout << "4 - Деление  "                        <<'\n';
    cout << "5 - Модуль "                          <<'\n';
    cout << "6 - инверсия "                        <<'\n';
    cout << "0 - выход "                           <<'\n';
    while( n != 0 )
    {
		cin >> operation;
    if(operation == 1)
        our_complex_number.plus();
    if(operation == 2)
        our_complex_number.minus();
    if(operation == 3)
        our_complex_number.multiply();
    if(operation == 4)
        our_complex_number.division();
    if(operation == 5)
        our_complex_number.abs();
    if(operation == 6)
        our_complex_number.iversia();
    if(operation == 0)
        {cout << "Вы вышли!"; n = 0;}
    if(operation > 6)
        cout << "Ошибка! Операции с таким номером не существует!";
}
return 0;
}
