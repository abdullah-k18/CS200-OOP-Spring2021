#include<iostream>
using namespace std;
int main()
{
	int years, minutes, seconds;
	cout<<"Enter Number Of Years:";
	cin>>years;
	minutes=years*365*24*60;
	cout<<"Number Of Minutes Are: "<<minutes<<endl;
	seconds=years*365*24*60*60;
	cout<<"Number Of Seconds Are: "<<seconds<<endl;
	system("pause");
	return 0;
}
