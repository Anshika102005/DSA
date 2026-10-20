#include<iostream>
using namespace std;

void printcol(int arr[][4], int row, int col)
{
    //column wise
    for(int j=0;j<col;j++)
    for(int i=0;i<row;i++)
    cout<<arr[i][j]<<" ";
}

int main(){ 
    int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    // for(int row=0;row<3;row++)
    // for(int col=0;col<4;col++)
    // cout<<arr[row][col]<<" ";

//print all the value inarray col wise, function call
    //printcol(arr,3,4);

    int x=7;
    for(int row=0;row<3;row++)
    for(int col=0;col<4;col++)
    {
        if(arr[row][col]==x)
        {
            cout<<"Yes ";
            return 0;
        }
    }

    cout <<"No";

}