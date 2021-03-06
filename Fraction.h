#pragma once

class Fraction
{
private:
	int Denominator;
	int Numerator;

	int GCD(int, int);
	static bool Comments;
public:
	Fraction();
	Fraction(double);
	Fraction(int Denominator, int Numerator);
	Fraction(const Fraction &);
	void Normalize();
	void Show();
	~Fraction();

	//Overloaded Asignment Operator
	Fraction & operator=(const Fraction &);

	Fraction Add(Fraction & _fraction);
	Fraction Subtract(Fraction & _fraction);
	Fraction Divide(Fraction & _fraction);
	Fraction Multiply(Fraction & _fraction);
	
	//Overloaded Class + Operator
	Fraction operator + (const Fraction &);

	//Overloaded Class - Operator
	Fraction operator - (const Fraction &);

	//Overloaded Class / Operator
	Fraction operator / (const Fraction &);

	//Overloaded Class * Operator
	Fraction operator * (const Fraction &);

	//Overloaded < Operator
	bool operator < (const Fraction &);

	//Overloaded > Operator
	bool operator > (const Fraction &);

	//Overloaded <= Operator
	bool operator <= (const Fraction &);

	//Overloaded >= Operator
	bool operator >= (const Fraction &);

	//Overloaded == Operator
	bool operator == (const Fraction &);

	//Overloaded != Operator
	bool operator != (const Fraction &);
	
	//Overloaded << Operator
	friend ostream &operator<<(ostream &output, const Fraction &f);
	
	// Overloaded Prefix Increment Operator
	Fraction & operator ++ ();

	// Overloaded Prefix Decrement Operator
	Fraction & operator -- ();

	// Overloaded Postfix Increment Operator
	Fraction operator ++ (int);

	// Overloaded Postfix Decrement Operator
	Fraction operator -- (int);

	//Overloaded Double Operator
	operator double();
	operator int();
	operator float();

};
