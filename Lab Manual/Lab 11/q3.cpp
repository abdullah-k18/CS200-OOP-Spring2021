#include <iostream> 
#include <limits>
using namespace std;
int main()
{
	cin.exceptions(iostream::failbit);
 	int num = 0;
 	try
	{
 		do
		{
 			cout << "Enter a number between 1 and 10" << endl;
 			cin >> num;
 			if(num < 1 || num > 10)
			{
 				cout << "Illegal value, " << num << " entered. Please try again." << endl;
 			}
 		}
		while (num < 1 || num > 10);
 		{
 			cout << "Value " << num << " correctly entered! Thank you." << endl;
		}
	}
	catch(iostream::failure& iof)
	{
 		cout << "Non-integer value. Please enter a number." << endl;
 		cin.clear(); 
		cin.ignore(numeric_limits<int>::max(), '\n'); 
	}
}