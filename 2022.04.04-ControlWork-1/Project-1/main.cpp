#include <iostream>

class Fraction

{

private:

	long long numerator;

	long long denominator;

public:

	Fraction() :numerator{}, denominator{ 1 }     // онструктор по умолчанию
	{
	}

	Fraction(long  long first, long long second) : numerator{ first }, denominator{ second } // онструктор с параметрами
	{
		if (denominator == 0) {
			throw std::overflow_error("Incorrect determinator");
		}
		if (denominator < 0) {
			denominator *= -1;
			numerator *= -1;
		}

	}

	Fraction(const Fraction &from)  //  онструктор копировани€
	{
		numerator = from.numerator;
		denominator = from.denominator;
	}

	~Fraction()  //деструктор
	{
	}

	 Fraction operator+(const Fraction &from) const
	 {
		 long long a = numerator, b = denominator;
		 long long c = from.numerator, d = from.denominator;

		 Fraction result(a*d + b * c, b*d);
		 return result;
	 }

	 Fraction operator-(const Fraction &from) const
	 {
		  Fraction a (-from.numerator,from.denominator);
		  return *this + a;
	 }

	 Fraction operator*(const Fraction &from) const
	 {
		 long long a = numerator, b = denominator;
		 long long c = from.numerator, d = from.denominator;

		 Fraction result(a*c, b*d);
		 return result;
	 }

	 friend Fraction operator*(const long long number, const Fraction& from) {   //умножение на число
		 Fraction a(from.numerator*number, from.denominator);
		 return a;
	 }

	 Fraction operator/(const Fraction &from) const
	 {
		 long long a = numerator, b = denominator;
		 long long c = from.numerator, d = from.denominator;

		 Fraction result(a*d, b*c);
		 return result;
	 }

	 friend Fraction operator/(const long long number, const Fraction& from) {   //деление на число
		 Fraction a(from.denominator * number, from.numerator);
		 return a;
	 }


	bool  operator== (const Fraction &from) const
	{
		return numerator == from.numerator && denominator == from.denominator;
	}

	bool operator < (const Fraction &from) const
	{
		return (static_cast<double>(numerator) / denominator < static_cast<double>(from.numerator) / from.denominator);
	}

	bool operator <= (const Fraction &from) const
	{
		return (*this < from || *this == from);
	}

	bool operator > (const Fraction &from) const
	{
		return (static_cast<double>(numerator) / denominator > static_cast<double>(from.numerator) / from.denominator);
	}

	bool operator >= (const Fraction &from) const
	{
		return (*this > from || *this == from);
	}

	Fraction& operator=(const Fraction &from)
	{
		if (this != &from)
		{
			this->numerator   = from.numerator;
			this->denominator = from.denominator;
		}
		return *this;
	}


	friend std::ostream& operator<< (std::ostream& ost, const Fraction &from) {
		ost << "(" << from.numerator << "/" << from.denominator << ")";
		return ost;
	}

	Fraction& reverse()
	{
		long long temp = this->numerator;
		this->numerator = this->denominator;
		this->denominator = temp;
		return *this;
	}

	Fraction& abs()
	{
		if (this->numerator < 0)
			this->numerator = this->numerator * -1;
		if (this->denominator < 0)
			this->denominator = this->denominator * -1;
		return *this;
	}

	Fraction& pow(int n)
	{
		long long a = 1, b = 1;
		if (n < 0) {
			std::cout << "Incorrect power" << std::endl;
			return *this;
		}

		while (n--)
		{
			a *= this->numerator;
			b *= this->denominator;
		}
		this->numerator = a;
		this->denominator = b;
		return *this;
	}

};

/*–еализовать:

1.  онструктор по умолчанию.   ->    сделано

2.  онструктор с параметрами.  ->    сделано

3.  онструктор копировани€.    ->    сделано

4. ƒеструктор.				   ->    сделано

5. ќператоры == , >= , <= , <, >, +, -, *, <<   ->    сделано

6. Ќахождение обратного числа, модул€ числа, степени числа  ->    сделано

пример основного кода :
*/

int main()

{

	Fraction fr1(3, 1);

	Fraction fr2(5, -2);

	if (fr1 > fr2)
		std::cout << "YES" << std::endl;

	std::cout << fr2.pow(5);

	std::cout << fr1 * fr2 << std::endl;

	std::cout << fr1 / fr2 << std::endl;

	std::cout << 1 / ((3 * fr1) + (4 * fr2)) << std::endl;

	std::cout << fr1.abs() << std::endl; //модуль числа

	std::cout << fr1.reverse() << std::endl; //обратное число

	return 0;

}
