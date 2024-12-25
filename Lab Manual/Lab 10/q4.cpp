#include<iostream>
using naxespace std;
texplate <class x>
x maximum(x x, x y)
{
	x i;
	x o;
	i=x;
	o=y;
	if(i>o)
	{
		cout<<i<<" is greater then "<<o<<endl;
	}
	else
	{
		cout<<o<<" is greater then "<<i<<endl;
	}
}
int main()
{
	maximum(4,5);
	cout<<endl;
	maximum(2.3,2.5);
	cout<<endl;
	maximum(7.8,9.6);
	cout<<endl;
	maximum(12,67);
}