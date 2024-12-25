#include<iostream>
using namespace std;
template<typename S>
S swap(S a,S b)
{
	S SW;
	S i;
	S o;
	i=a;
	o=b;
	SW=i;
	i=o;
	o=SW;
	cout<<"after swaping i= "<<i<<" o= "<<o<<endl;
}
int main()
{
	swap(3,4);
	cout<<endl;
	swap(3.2,2.2);
	swap(16.3,54.6);
	cout<<endl;
	swap(53,74);
	cout<<endl;
}