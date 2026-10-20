#include<iostream>
using namespace std;


//void sum(int m ,int n)
//{
    //int ans = m+n;
   // cout << ans<< endl;
//}

int Sum(int m, int n)//Function call declare // parameter
{
    int addition = m+n;//function define 
    return addition;
}

int multiplication (int m, int n)
{
    int multiplication = m*n;
    return multiplication;
}

void fun()
{
    cout << "Hello Sushine\n";
}


int main(){
    int a,b;
    cout << "Enter 2 numbers : ";
    cin >> a>> b;

    //function call
    //int addition = Sum(a,b);
    //cout << addition;
    cout << Sum(a,b);
    cout << endl;

    cout << multiplication (a,b);//arguments
    cout << endl;

    fun();
    cout << endl;
}
//void Sum (int m, int n)
//int addition = m+n;
//cout <<addition<<endl; these will give you the same output 