#include<iostream>
using namespace std;
class Distance{
	private:
		float feet, inches;
	public:
		Distance()
		{
			inches=1;
			feet=12;	
		}
		friend int inchesSquare(Distance &a);
		friend int feetSquare(Distance &a);
		void showdata()
		{
			cout<<"Square Of Distance in Inches:"<<inches*inches<<endl;
			cout<<"Square Of Distance in Feet:"<<feet*feet<<endl;
		}
};
int inchesSquare(Distance &a)
{
	return(a.inches*a.inches);
}
int feetSquare(Distance &a)
{
	return(a.feet*a.feet);
}
int main()
{
	Distance d;
	inchesSquare(d);
	feetSquare(d);
	d.showdata();
	return 0;
}