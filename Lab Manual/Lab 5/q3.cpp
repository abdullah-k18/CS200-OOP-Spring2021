#include<iostream>
using namespace std;
class Calculator
{
private:
	int a, b;
public:
	void getData(int x, int y)
	{
		a = x;
		b = y;
	}
	friend class operation;
};
class operation{
public:
int add(Calculator C)
{
	int Result;
	Result = C.a + C.b;
	return Result;
}
int Sub(Calculator C)
{
	int Result;
	Result = C.a - C.b;
	return Result;
}
double Division(Calculator C)
{
	double Result;
	Result = C.a / C.b;
	return Result;
}
double Mean(Calculator C)
{
	double Result;
	Result = (C.a + C.b) / 2;
	return Result;
}
};
int main()
{
	int Fir, Seco;
	Calculator cal;
	operation op;
	cout << "Enter 1st Value : ";
	cin >> Fir;
	cout << "Enter 2nd Value : ";
	cin >> Seco;
	cal.getData(Fir, Seco);

	cout << "Addition:" << op.add(cal) << endl;
	cout << "Subtraction:" << op.Sub(cal) << endl;
	cout << "Multiplication:" << op.Division(cal) << endl;
	cout << "Average:" << op.Mean(cal) << endl;
}