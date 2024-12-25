#include<iostream>
#include<string>
using namespace std;
class Book
{
protected:
	string Autname, isbn, tital;
	int NoOfPage;
	float price;
public:
	Book()
	{
		Autname = "";
		isbn = "";
		tital = "";
		NoOfPage = 0;
		price = 0;
	}
	Book(string A, string T, float p) //parameterized Constructor With 3 parameters 
	{
		Autname = A;
		tital = T;
		price = p;
	}
	Book(string A, string T, float p , string IS , int Pag) 
	{
		Autname = A;
		tital = T;
		price = p;
		isbn = IS;
		NoOfPage = Pag;
	}
	void ShowData()
	{
		cout << "  ** Showing Ebook Data **\n";
		cout << "Auther Name is " << Autname << endl;
		cout << "Tital Of Book Is " << tital << endl;
		cout << "price of Book is " << price << endl;
		cout << " Isbn Num Of Book is " << isbn << endl;
		cout << "Num Of Page is " << NoOfPage << endl;
	}
};
class Ebook : public Book
{
protected:
	string URL;
	float MBsize;
public:
	Ebook()
	{
		Autname = "";
		isbn = "";
		tital = "";
		NoOfPage = 0;
		price = 0;
		URL = "";
		MBsize = 0;
	}
	Ebook(string A, string T, float p , float size) //parameterized Constructor With 3 parameters 
	{
		Autname = A;
		tital = T;
		price = p;
		MBsize = size;
	}
	Ebook(string A, string T, float p, string IS, int Pag , string U , float MB)
	{
		Autname = A;
		tital = T;
		price = p;
		isbn = IS;
		NoOfPage = Pag;
		URL = U;
		MBsize = MB;
	}
	void ShowData()
	{
		cout << "\n\n\n  ** Showing Ebook Data **\n";
		cout << "Auther Name is " << Autname << endl;
		cout << "Tital Of Book Is " << tital << endl;
		cout << "price of Book is " << price << endl;
		cout << " Isbn Num Of Book is " << isbn << endl;
		cout << "Num Of Page is " << NoOfPage << endl;
		cout << "Url Of Book is " << URL << endl;
	}
};
class Paper : public Book
{
protected:
	int NumOfCop;
	float weight;
public:
	Paper()
	{
		Autname = "";
		isbn = "";
		tital = "";
		NoOfPage = 0;
		price = 0;
		NumOfCop = 0;
	}
	Paper(string A, string T, float p) //parameterized Constructor With 3 parameters 
	{
		Autname = A;
		tital = T;
		price = p;
		NumOfCop = 0;
	}
	Paper(string A, string T, float p, string IS, int Pag , int Cop , float w)
	{
		Autname = A;
		tital = T;
		price = p;
		isbn = IS;
		NoOfPage = Pag;
		NumOfCop = Cop;
		weight = w;
	}
	void ShowData()
	{
		cout << "\n\n\n  ** Showing Paper book Data **\n";
		cout << "Auther Name is " << Autname << endl;
		cout << "Tital Of Book Is " << tital << endl;
		cout << "price of Book is " << price << endl;
		cout << " Isbn Num Of Book is " << isbn << endl;
		cout << "Num Of Page is " << NoOfPage << endl;
		cout << "Num Of Copies are " << NumOfCop << endl;
		cout << "Weight OF Book is " << weight << endl;
	}
};
class Audio : public Book
{
protected:
	int playtime;
public:
	Audio()
	{
		Autname = "";
		isbn = "";
		tital = "";
		NoOfPage = 0;
		price = 0;
		playtime = 0;
	}
	Audio(string A, string T, float p, int Tim) //parameterized Constructor With 3 parameters 
	{
		Autname = A;
		tital = T;
		price = p;
		playtime = Tim;
	}
	Audio(string A, string T, float p, string IS, int Pag ,int Tim)
	{
		Autname = A;
		tital = T;
		price = p;
		isbn = IS;
		NoOfPage = Pag;
		playtime = Tim;
	}
	void ShowData()
	{
		cout << "\n\n\n  ** Showing Audio book Data **\n";
		cout << "Auther Name is " << Autname << endl;
		cout << "Tital Of Book Is " << tital << endl;
		cout << "price of Book is " << price << endl;
		cout << " Isbn Num Of Book is " << isbn << endl;
		cout << "Num Of Page is " << NoOfPage << endl;
		cout << " Play time of Book is " << playtime << endl;
	}
};
int main()
{
	Book B1();
	Book B2("ABC_Auther", "OOP", 500.0);
	Book B3("ABC_Auther", "OOP", 500.0, "034-5363-6342", 75);
	B3.ShowData();

	Ebook E1();
	Ebook E2("ABC_Auther", "OOP", 500.0, 145.0);
	Ebook E3("ABC_Auther", "OOP", 500.0, "034-5363-6342", 75,"WWW.Ebook.com " ,145);
	E3.ShowData();

	Paper P1();
	Paper P2("ABC_Auther", "OOP", 500.0);
	Paper P3("ABC_Auther", "OOP", 500.0, "034-5363-6342", 75, 5, 30);
	P3.ShowData();

	Audio A1();
	Audio A2("ABC_Auther", "OOP", 500.0, 30);
	Audio A3("ABC_Auther", "OOP", 500.0, "034-5363-6342", 75, 30);
	A3.ShowData();
	system("pause");
	return 0;
}
