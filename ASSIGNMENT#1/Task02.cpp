#include<iostream>
using namespace std;
int main()
{
	int obtainMarks, totalMarks;
	float percentage;
	cout<<"Enter The Total Marks:";
	cin>>totalMarks;
	cout<<"Enter The Obtained Marks:";
	cin>>obtainMarks;
	percentage=(obtainMarks*100)/totalMarks;
	cout<<"Percentage="<<percentage<<"%"<<endl;
	system("pause");
	return 0;
}
