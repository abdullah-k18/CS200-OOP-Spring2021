#include <iostream>
#include <string.h>
using namespace std;
class String
{
	private:
		enum{SZ=80};
		char str[SZ];
	public:
		String()
		{
			strcpy(str, "");
		}
		String(char s[])
		{
			strcpy(str, s);
		}
		void display() const
		{
			cout<<str<<endl;
		}
		String operator += (String ss)
		{
			String temp;
			if(strlen(str) + strlen(ss.str) < SZ)
			{
				strcat(str, ss.str);
				strcpy(temp.str, str);
			}
			else
			{
				cout<<"\nString overflow";
				exit(1);
			}
			return temp;
		}
};
int main()
{
	String s1="Welcome! ";
	String s2="Hello! ";
	String s3="How are you? ";
	s1.display();
	s2.display();
	s3.display();
	s1 += s2;
	s1.display();
	s3 = s1 += s2;
	s2.display();
	s3.display();
	cout<<endl;
	return 0;
}
