#include<iostream>
#include<string>
using namespace std;
class Shape
{
protected:
	string Color;
public:
	Shape()
	{
		Color = " ";
	}
	Shape(string c)
	{
		Color = c;
	}

	virtual double calculateArea() = 0;
	virtual double calculateperimeter() = 0;
};

class Rectangle : public Shape
{
protected:
	double Length, Width;

public:
	Rectangle()
	{
		Length = 0;
		Width = 0;
	}
	Rectangle(string c,double l, double W)
	{
		Color = c;
		Length = l;
		Width = W;
	}
	double calculateArea()
	{
		double A;
		A = Width * Length;
		return A;
	}
	double calculateperimeter()
	{
		double result;
		result = 2 * (Length + Width);
		return result;
	}
};
class circle :public Shape {
protected:
	float radius;
public:
	circle()
	{
		radius = 0;
	}
	circle(string c,float r)
	{
		Color = c;
		radius = r;
	}
	double calculateArea()
	{
		double result;
		result = 3.14*radius*radius;
		return result;
	}
	double calculateperimeter()
	{
		double result;
		result = 2 * 3.14*radius;
		return result;
	}
};
class square :public Rectangle{
protected:
	int side;
public:
	square( int s)
	{
		side = s;
	}
};
int main()
{
	Shape *std;
	Rectangle std1("",12, 12);
	std = &std1;
	cout << "area of ractangle is " << std->calculateArea() << endl;
	cout << "perimeter of ractangle is:" << std->calculateperimeter()<<endl;
	circle std2("",12);
	std = &std2;
	cout << "area of circle is" << std->calculateArea() << endl;
	cout << "perimeter of circle is" << std->calculateperimeter();
}
