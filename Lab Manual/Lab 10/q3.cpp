#include<iostream>
using namespace std;
template <class o>
o minimum(o x, o y)
{
	o a;
	o b;
	a=x;
	b=y;
	if(a<b)
	{
		cout<<a<<" is less then "<<b<<endl;
	}
	else
	{
		cout<<b<<" is less then "<<a<<endl;
	}
}
int main()
{
	minimum(4,5);
	cout<<endl;
	minimum(2.3,2.5);
	cout<<endl;
	minimum(7.8,9.6);
	cout<<endl;
	minimum(12,67);
}