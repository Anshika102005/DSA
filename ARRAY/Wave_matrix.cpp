#include <iostream>
#include<vector>
using namespace std;
void wavePrint (int arr[][4], int row,  int col)
{
    for(int j=0; j<col; j++)
    {
        if(j%2==0)
        {
            /* code */
            for(int i=0;i<row;i++)
            cout<<arr[i][j]<<" ";
        }
        else
        {
            for(int i=row-1;i>=0;i--)
            cout<<arr[i][j]<<" ";

        }
        
    }
}
int main(){
    int arr1[3][4] = {1, 2, 3, 7, 5 , 9,6,3,1,9,6,3};

    cout << "Wave Matrix Traversal: ";
    wavePrint (arr1, 3, 4);
    return 0;
}