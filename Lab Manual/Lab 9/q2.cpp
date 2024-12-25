#include<iostream>
using namespace std;
class medicine
{
	protected:
	string	name;
	int price;
	public:
	virtual void  dataofmedicine()=0;
};
class tablet:public medicine
{
	private:
	string	type;
	public:
		tablet(string w,int y,string z)
		{
			name=w;
			price=y;
			type=z;
		}
		void dataofmedicine()
		{
			cout<<"name  is:"<<name<<endl;
			cout<<"price  is:"<<price<<endl;
			cout<<"type  is:"<<type<<endl;
		}
		
};
class syrup:public medicine
{
	private:
	string	type;
		public:
			syrup(string w,int y,string z)
			{
			name=w;
			price=y;
			type=z;
			}
		void dataofmedicine()
		{
			cout<<"name  is:"<<name<<endl;
			cout<<"price  is:"<<price<<endl;
			cout<<"type is:"<<type<<endl;
		}
};
int main()
{
	medicine *m;
	tablet t("",200,"");
	syrup s("",500,"");
    m=&t;
	cout<<endl;
	m->dataofmedicine();
	cout<<endl;
	m=&s;
	m->dataofmedicine();
}