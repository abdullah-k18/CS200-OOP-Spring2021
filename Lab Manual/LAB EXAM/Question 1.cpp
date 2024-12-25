#include<iostream>
#define PI 3.141592
#include<conio.h>
#include<string.h>
#include<math.h>
using namespace std;
#define SIZE 10
class polar
{ 
private:
    int co[SIZE] ;
public:
    polar()
	{
        for (int i=0 ; i<SIZE ; i++)
        	co[i]=0;
    }
    void getvalues ()
	{
        for(int i=4 ; i>=0 ; i--)
		{   
            cout << "Enter value of cofficient x^" <<  i  << ": " ;
        	cin  >>  co [i] ;    
        }
    }
    polar  operator + (polar);
    polar  operator - (polar);
    polar  operator * (polar);
    polar  operator +=(polar);
    polar  operator -=(polar);
    polar  operator *=(polar);
    bool  operator ==(polar);
    void print(int i = 4)
	{
        for( ; i >= 0 ; i-- )
		{  
            if( i == 0 && co[i] > 0 ) { cout << " +"; cout  << co[i] ;}
            else if( i == 0 && co[i] < 0 ) { cout << " "; cout   << co[i] ;}
            else if( co[i] > 0) { cout << " +"; cout  << co[i] << "x^" << i ;}
            else if( co[i] < 0) { cout << " "; cout  << co[i] << "x^" << i ;}
        }
        cout << endl;

    }
};
polar polar :: operator + (polar P2) {
     polar  P3;
     for ( int i = 0  ; i <= 4 ; i++ ){
           P3.co [i]  =  co [i] +  P2.co [i] ;    
     }

     return P3;     

}

 

polar polar :: operator - (polar P2) {

     polar  P3;

     for ( int i = 0  ; i <= 4 ; i++ ){

           P3.co [i]  =  co [i] -  P2.co [i] ;    

     }

     return P3;

}

 

polar polar :: operator *(polar P2){

     polar  P3;

     for( int i = 0  ; i <= 4 ; i++ ){

           for( int j = 0  ; j <= 4 ; j++ ){

                P3.co [i+j]  +=  co [i] *  P2.co [j] ;    

           }

     }

     return P3;     

}

 

bool polar :: operator ==(polar P2 ) {

     for (int i=0 ; i<=4 ; i++){

           if(co[i] != P2.co[i])

                return false;

     }

     return true;

}

 

polar polar :: operator +=(polar P2 ) {

     polar  P3;

     for  ( int i = 0  ; i <= 4 ; i++ ){

           P3.co [i]  =  co [i] +  P2.co [i] ;

           co[i] = P3.co [i];

     }

     return P3;     

}

polar polar :: operator -=(polar P2 ) {

     polar  P3;

     for  ( int i = 0  ; i <= 4 ; i++ ){

           P3.co [i]  =  co [i] -  P2.co [i] ;

           co[i] = P3.co [i];

     }

     return P3;

}

polar polar :: operator *=(polar P2 ) {

     polar  P3;

     for( int i = 0  ; i <= 4 ; i++ ){

           for( int j = 0  ; j <= 4 ; j++ ){

                P3.co [i+j]  +=  co [i] *  P2.co [j] ;    

           }

 

     }

     for( int i = 0  ; i <SIZE ; i++ )

           co[i]=P3.co[i];

     return P3;

}

 

int main()

{

     polar P1, P2, P3;

     P1.getvalues();

     P2.getvalues();

 

     P1.print();     P2.print();

 

     if(P1==P2)

           cout <<"These two polars are same \n";

 

     P3 = P1 + P2;

     cout <<"Addition of two polar is \n";      P3.print ();

 

     P3 = P1 - P2;

     cout <<"Subtraction of two polar is \n";   P3.print ();

 

     P3= P1 * P2;

     cout <<endl << "Multiplication of two polar is \n";   P3.print (9);

 float x, y, r, theta;
	
	 printf("Enter cartesian coordinate x: ");
	 scanf("%f", &x);
	 printf("Enter cartesian coordinate y: ");
	 scanf("%f", &y);
	

	 r = sqrt(x*x + y*y);
	
	
	 theta = atan(y/x);
	

	 theta = 180.0 * theta/ PI;
	
	 cout<<"Polar coordinate is: r = %0.2f and theta = %0.2f in degree"<<r<<theta;
	 cout<<endl;
	 
	  cout<<"Enter radius of polar coordinate (r): ";
	  cin>>r;
	 cout<<"Enter angle of polar coordinate in degree (theta): ";
	 cin>>theta;
	
	 
	 theta = theta * PI/180.0;
	
	
	 x = r * cos(theta);
	

	 y = r * sin(theta);
	
	 cout<<"Cartesian coordinates is: (%0.3f, %0.3f)"<< x << y;
 

     system ("PAUSE");

     return 0;    

}

 
