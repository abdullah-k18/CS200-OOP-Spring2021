#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	try
	{
		int total=0;
		int num=0;
		ifstream inputFile;
		inputFile.open("inFile.txt");
		if(!inputFile) 
		{
			throw("");
		}
		while(!inputFile.eof())
		{
			try
			{
				inputFile>>num;
				total+=num;
				if(!(inputFile.eof() || isspace(inputFile.peek())))
				{
					throw(num);
				}
			}
			catch(ifstream::failure& iof)
			{
				cout<<"Skipping non-integer value, found after ";
			}
		}
		inputFile.close();
		cout<<"The total value is "<<total<<"."<<endl;
	}
	catch(...)
	{
		cout<<"ERROR "<<endl;
	}
}