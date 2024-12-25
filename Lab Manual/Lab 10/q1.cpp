#include<iostream>
using namespace std;
template <typename s> 
s square(s x) 
{
    return x*x;
}
int main()
{
	cout<<"the square of interger data type: "<<square(4)<<endl;
	cout<<"the square of float data type: "<<square(2.5)<<endl;
	cout<<"the square of double data type: "<<square(9.8)<<endl;
}