#include<iostream>
using namespace std;
int main()
{
	float celsius, fahrenheit;
	cout<<"Enter temperature in degree celcius:";
	cin>>celsius;
	fahrenheit=(9*celsius)/5+32;
	cout<<"Degree Fahrenheit:"<<fahrenheit<<endl;
	system("pause");
	return 0;
}
