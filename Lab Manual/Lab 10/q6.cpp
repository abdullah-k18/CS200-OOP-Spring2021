#include<iostream>
using namespace std;
template<typename p>
class Rectangle
{
private:
p width ;
p length ;
p area ;
public:
     void setData(p m, p n)
     { 
       width = m; 
	   length = n;
	 }
     void calcArea()
     { 
        area = width * length ;
	 }
      p getWidth()
     { 
	   return width ;
	 }
    p getLength()
     {
	  return length ;
	 }
     p getArea ()
    { 
	  return area ; 
	}
};
int main()
{
	Rectangle<double> p;
	p.setData(4.5,7.8);
	p.calcArea();
	cout<<"width:"<<p.getWidth()<<endl;
	cout<<" length:"<<p.getLength()<<endl;
	cout<<"area:"<<p.getArea()<<endl;
}