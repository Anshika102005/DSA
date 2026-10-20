#include<iostream>
using namespace std;

int main(){

    int age;
    double height;
    cout <<"Enter your age and height: ";
    cin >> age >> height;
    cout << "You age "<< age <<" year old and " << height << "meter tall. "<<endl;
    int number;
    cout <<"Enter a number: ";
    cin >> number;
    cout << "Your entered number " << number << endl;
    

    string name;
    cout << "Enter your full name: ";
    cin >> name;
    cout << "Hello, "<< name << "!" << endl;
    return 0;

    string fullname;
    cout << "Enter your full name: ";
    cin.ignore();
    getline(cin, fullname);
    cout << "Hello," << fullname << "1" << endl;
    return 0;
    

}