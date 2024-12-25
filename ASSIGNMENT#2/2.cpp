#include<iostream>
using namespace std;
int main()
{
	int arr[11]={10, 12, 20, 30, 25, 40, 32, 31, 35, 50, 60};
	cout<<"{}"<<endl;
	cout<<"{"<<arr[4]<<"}, {"<<arr[5]<<"}, {"<<arr[6]<<"}, {"<<arr[7]<<"},"<<endl;
	cout<<"{"<<arr[4]<<", "<<arr[5]<<"}, {"<<arr[4]<<", "<<arr[6]<<"}, "<<"{"<<arr[5]<<", "<<arr[6]<<"}, "<<"{"<<arr[4]<<", "<<arr[7]<<"}, ";
	cout<<"{"<<arr[5]<<", "<<arr[7]<<"}, "<<"{"<<arr[6]<<", "<<arr[7]<<"},";
	cout<<endl;
	cout<<"{"<<arr[4]<<", "<<arr[5]<<", "<<arr[6]<<"}, "<<"{"<<arr[4]<<", "<<arr[5]<<", "<<arr[7]<<"}, "<<"{"<<arr[4]<<", "<<arr[6]<<", "<<arr[7]<<"}, ";
	cout<<"{"<<arr[5]<<", "<<arr[6]<<", "<<arr[7]<<"},"<<endl;
	cout<<"{"<<arr[4]<<", "<<arr[5]<<", "<<arr[6]<<", "<<arr[7]<<"}"<<endl;
	system("pause");
	return 0;
}
