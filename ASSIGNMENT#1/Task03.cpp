#include<iostream>
using namespace std;
int main()
{
	int amount;
	float tax_percent, sale_tax;
	cout<<"Enter Amount:";
	cin>>amount;
	cout<<"Enter Tax Percent:";
	cin>>tax_percent;
	sale_tax=amount*(tax_percent/100);
	cout<<"Sale Tax="<<sale_tax<<endl;
	system("pause");
	return 0;
}
