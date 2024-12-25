#include<iostream>
using namespace std;
class shape
{
	protected:
	string colour;
		public:
			virtual double area()=0;
};
class rectangle:public shape 
{
	private:
		int length,width;
	public:
		void get(int k,int m)
		{
			length=k;
			width=m;
		}
		double area() 
		{
			return width*length;
		}
};
class triangle:public shape   
{
	int base,height;
	public:
		void get(int x,int y)
		{
			base=x;
			height=y;
		}
		double area()
		{
			return base*height/2;
		}
};
int main()
{
	shape *o; 
	rectangle b;
	o=&b;
	b.get(7788,990);
	o->area();
	cout<<"the area is:"<<o->area()<<endl;
	triangle j;
	o=&j;
	j.get(987,890);
	o->area();
	cout<<"the area  is:"<<o->area()<<endl;
}