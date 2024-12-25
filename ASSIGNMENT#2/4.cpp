#include <iostream>
using namespace std;
int main()
{
    int arr[5][5], transArr[5][5], rows, columns;
    cout<<"Enter rows of matrix:";
    cin>>rows;
    cout<<"Enter columns of matrix:";
    cin>>columns;
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<columns; ++j)
        {
            cout<<"Enter ["<<i<<"]["<<j<<"] Element:";
            cin>>arr[i][j];
        }
    }
    cout<<"The Entered Matrix is"<<endl;
    for (int i=0; i<rows; ++i)
        {
            for (int j=0; j<columns; ++j)
            {
                cout<<arr[i][j]<<"\t";
            }
            cout<<endl;
		}
    for(int i=0; i<rows; ++i)
        for(int j=0; j<columns; ++j)
        {
            transArr[j][i]=arr[i][j];
        }
    cout<<"Transpose of Matrix"<<endl;
    for (int i=0; i<rows; ++i)
        {
            for (int j=0; j<columns; ++j)
            {
                cout<<transArr[i][j]<<"\t";
            }
            cout<<endl;
        }
        system("pause");
    	return 0;
}
