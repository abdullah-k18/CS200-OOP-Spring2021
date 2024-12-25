#include<iostream>
using namespace std;
class Calculator{
	private:
		float num1, num2, sum, sub;
		float div, avg;
	public:
		void input()
		{
			cout<<"Enter First Number:";
			cin>>num1;
			cout<<"Enter Second Number:";
			cin>>num2;
		}
		friend float sum(Calculator &a);
		friend float sub(Calculator &b);
		friend float div(Calculator &c);
		friend float avg(Calculator &d);
		void display()
		{
			cout<<"Addition="<<sum<<endl;
			cout<<"Subtraction="<<sub<<endl;
			cout<<"Division="<<div<<endl;
			cout<<"Average="<<avg<<endl;
		}
};
float sum(Calculator &a)
{
	a.sum=a.num1+a.num2;
	return a.sum;
}
float sub(Calculator &b)
{
	b.sub=b.num1-b.num2;
	return b.sub;
}
float div(Calculator &c)
{
	c.div=c.num1/c.num2;
	return c.div;
}
float avg(Calculator &d)
{
	d.avg=(d.num1+d.num2)/2;
	return d.avg;
}
int main()
{
	Calculator a;
	a.input();
	sum(a);
	sub(a);
	div(a);
	avg(a);
	a.display();
	return 0;
}