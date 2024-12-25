#include<iostream>
#include<string>
using namespace std;
class Asset
{
protected:
	int id;
	string type;
public:
	void PrintDiscription()
	{
		cout << "Id Num Is : " << id << endl;
		cout << "Id Type is : " << type << endl;
	}
};
class Security : public Asset
{
protected:
	string tradeExchangeName;
public:
	Security()
	{
		id = 0;
		type = "";
		tradeExchangeName = "";
	}
	Security(int ID, string T, string Exch)
	{
		id = ID;
		type = T;
		tradeExchangeName = Exch;
	}
	void ShowData()
	{
		cout << "ID No Is " << id << endl;
		cout << "ID Type is " << type << endl;
		cout << "Trade Exchange name is " << tradeExchangeName << endl;
	}
};
class RealEstate : public Asset
{
protected:
	float buildUpArea;
public:
	RealEstate()
	{
	
		id = 0;
		type = "";
		buildUpArea = 0.0;
	}
	RealEstate(int ID,string T,float B)
	{
		id = ID;
		type = T;
		buildUpArea = B;
	}
	void ShowData()
	{
		cout << "ID No is " << id << endl;
		cout << "ID Type is " << type << endl;
		cout << "Build Up Area Is " << buildUpArea << endl;
	}
};
class BankAccount : public Asset
{
protected:
	string BankName;
	float Balance;
};
class SavingAccount : public BankAccount
{
protected:
	float IntrestRate;
public:
	SavingAccount()
	{
		id = 0;
		type = "";
		BankName = "";
		Balance = 0.0;
		IntrestRate = 0.0;
	}
	SavingAccount(int I , string T, string B ,float Bal, float Intr)
	{
		id = I;
		type = T;
		BankName = B;
		Balance = Bal;
		IntrestRate = Intr;
	}
	void ShowData()
	{
		cout << "ID No Is " << id << endl;
		cout << "ID Type is " << type << endl;
		cout << "Bank name is " << BankName << endl;
		cout << "Available Balance is " << Balance << endl;
		cout << "Intrest Rate is " << IntrestRate << endl;
	}
};
class CheackingAccount : public BankAccount
{
protected:
	float OverdraftLimit;
public:
	CheackingAccount()
	{
		id = 0;
		type = "";
		BankName = "";
		Balance = 0.0;
		OverdraftLimit = 0.0;
	}
	CheackingAccount(int ID, string T, string B, float Bal, float over)
	{
		id = ID;
		type = T;
		BankName = B;
		Balance = Bal;
		OverdraftLimit = over;
	}
	void ShowData()
	{
		cout << "ID No Is " << id << endl;
		cout << "ID Type is " << type << endl;
		cout << "Bank name is " << BankName << endl;
		cout << "Available Balance is " << Balance << endl;
		cout << "Over Draft Limit is " << OverdraftLimit << endl;
	}
};
int main()
{
	Security S1();
	Security S2(765, "ABC_TYPE" , "ABC_Exchange");
	cout << "Displaying Security Data \n";
	S2.ShowData();
	RealEstate R1();
	RealEstate R2(456,"ACB_TYPE",48.1);
	cout << "\n\nShowing Real Estate Data \n";
	R2.ShowData();
	SavingAccount SA1();
	SavingAccount SA2(765, "ACB_TYPE", "HBL",882.1,6.1);
	cout << "\n\nShowing Saving Account Data \n";
	SA2.ShowData();
	CheackingAccount C1();
	CheackingAccount C2(765, "ACB_TYPE", "HBL", 882.1, 40.0);
	cout << "\n\nShowing Cheacking Account Data \n";
	C2.ShowData();
	return 0;
	system("pause");
}