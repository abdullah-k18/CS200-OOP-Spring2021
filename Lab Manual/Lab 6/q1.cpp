#include<iostream>
using namespace std;
class circle
{
	protected:
		double radius;
	public:
		circle() 
		{
			radius=0;
		}
		circle(double m) 
		{
			radius=m;
		}
		double getarea()
		{
				return 3.14*radius*radius;
		}
};
class cylinder:public circle 
{
	private:
		double height;
	public:
		cylinder() 
		{
			radius=0;
			height=0;
		}
		cylinder(double m,double j) 
		{
			radius=m;
			height=j;
		}
		double getvolume()
		{
				return 3.14*radius*radius*height;
		}			
};
int main()
{
	double x,y;
	cout<<"radius of the circle:"; 
	cin>>x;
	circle obj1(x);
	cout<<"the area of the circle is:"<<obj1.getarea()<<endl;
	cout<<"radius of the cylinder :";
	cin>>x;
	cout<<"  height of the cylinder :";
	cin>>y;
	cylinder obj2(x,y);
	cout<<"volume of the cylinder is:"<<obj2.getvolume()<<endl;
	return 0;
	system("pause");
}