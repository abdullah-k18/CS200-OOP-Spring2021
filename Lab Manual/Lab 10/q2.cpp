#include<iostream>
using namespace std;
template <typename c> 
c cube(c y) 
{
    return y*y*y;
}
int main()
{
	cout<<"the cube of interger data type: "<<cube(4)<<endl;
	cout<<"the cube of float data type: "<<cube(2.5)<<endl;
	cout<<"the cube of double data type: "<<cube(9.8)<<endl;
}