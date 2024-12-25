#include<iostream>
using namespace std;
int main()
{
    int A[5][5], B[5][5], rows, columns, add[5][5];
    cout<<"Enter rows of matrix 1 and 2:";
    cin>>rows;
    cout<<"Enter columns of matrix 1 and 2:";
    cin>>columns;
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<columns; ++j)
        {
            cout<<"Enter ["<<i<<"]["<<j<<"] Element:";
            cin>>A[i][j];
        }
    }
    cout<<"The First Matrix is"<<endl;
    for (int i=0; i<rows; ++i)
        {
            for (int j=0; j<columns; ++j)
            {
                cout<<A[i][j]<<"\t";
            }
            cout<<endl;
		}
	for(int i=0; i<rows; i++)
    {
        for(int j=0; j<columns; ++j)
        {
            cout<<"Enter ["<<i<<"]["<<j<<"] Element:";
            cin>>B[i][j];
        }
    }
    cout<<"The Second Matrix is"<<endl;
    for (int i=0; i<rows; ++i)
        {
            for (int j=0; j<columns; ++j)
            {
                cout<<B[i][j]<<"\t";
            }
            cout<<endl;
		}
		for (int i=0; i<rows; ++i)
        {
            for (int j=0; j<columns; ++j)
            {
                add[i][j]=A[i][j]+B[i][j];
            }
		}
		cout<<"Sum of the two array A and B of size m x n."<<endl;
	for(int i=0; i<rows; i++)
	{
		for(int j=0; j<columns; j++)
		{
			cout<<add[i][j]<<"\t";
		}
		cout<<endl;;
	}
	return 0;
}
