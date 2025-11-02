#include<iostream>
#include<string>
using namespace std;

string concat(string fName, string lName)
{
    return fName + " " + lName;

}

int main()
{
    string fName, lName;
    cout<<"Enter first name: ";
    cin>>fName;
    cout<<"Enter last name: ";
    cin>>lName;

    string fullName = concat(fName,lName);

    cout<<"Full Name: "<<fullName;
}
