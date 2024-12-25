#include<iostream>
using namespace std;
template<class T>
T GetAverage(T array[],int size)
{
	T sum;
	int i;
	for(i=0;i<size;i++)
	{
		sum=sum+array[i];
	}
	sum=sum/size;
	return sum;
}
int main()
{
	int intarr[]={5,7,8,3,2};
	int intavg=GetAverage(intarr,5);
	cout<<"Integer Average :"<<intavg<<endl;
	
	long longarr[]={5455888,7455544,85555,3565545,2445522};
	long longavg=GetAverage(longarr,5);
	cout<<"Long Average :"<<longavg<<endl;
	
	double doublearr[]={58.65,47.25,85.555,35.655,2.44};
	double doubleavg=GetAverage(doublearr,5);
	cout<<"Double Average :"<<doubleavg<<endl;
	
	char chararr[]={'a','b','c','d','e'};
	char charavg=GetAverage(chararr,5);
	cout<<"Char Average :"<<charavg<<endl;
}
