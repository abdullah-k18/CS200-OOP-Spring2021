#include<iostream>
using namespace std;
int main()
{
	int arr[0], n, sum=0;
	int smallest=arr[0];
    int largest=arr[0];
	float average;
	cout<<"Enter The Number Of Elements Of Array:";
	cin>>n;
	for(int i=0; i<n; i++)
	{
		cout<<"Enter The "<<i+1<<" Element Of The Array:";
		cin>>arr[n];
		sum=sum+arr[n];
		if (arr[n] < smallest)
        {
            smallest = arr[n];
        }
	if (arr[n] > largest)
        {
            largest = arr[n];
        }    
	}
	cout<<"Sum="<<sum<<endl;
	average=(sum)/n;
	cout<<"Average="<<average<<endl;
	cout<<"Largest Number="<<largest<<endl;
	cout<<"Smallest Number="<<smallest<<endl;
	system("pause");
	return 0;
}
