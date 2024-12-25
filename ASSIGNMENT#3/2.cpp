#include<iostream>
using namespace std;
class Distance
{
	private:
		int distance;
	public:
		void getvalue()
		{
			cout<<"Enter Distance 1:";
			cin>>distance;
		}
		void getvalue2()
		{
			cout<<"Enter Distance 2:";
			cin>>distance;
		}
		Distance operator-(Distance a)
		{
			Distance temp, i;
			temp.distance = distance - a.distance;
			if (i.distance == -temp.distance)
			{
				-temp.distance;
			}
			return(temp);
		}
		void display()
		{
			if(distance<0)
			{
				cout<<"Distance Cannot be Negative.";
			}
			else
			{
				cout<<"Subtraction of Distance: "<<distance;
			}
		}
};
int main()
{
	Distance d1, d2, d3;
	d1.getvalue();
	d2.getvalue2();
	d3 = d1 - d2;
	d3.display();
	return 0;
}
