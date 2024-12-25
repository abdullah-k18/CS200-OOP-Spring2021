#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char str1[50], str2[50];
	cout<<"Enter First String: ";
	cin>>str1;
	cout<<"Enter Second String: ";
	cin>>str2;
	if(strcmp(str1, str2)==0)
	{
		cout<<"The Strings Are Equal."<<endl;
	}
	else
	{
		cout<<"The String Are Not Equal."<<endl;
	}
	system("pause");
	return 0;
}
