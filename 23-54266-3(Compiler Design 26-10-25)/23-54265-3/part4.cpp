#include<iostream>
#include<string>
using namespace std;

bool checkId(string id)
{
    string inv[5] = {"double", "bool", "int", "float", "short"};

    for(int i = 0; i < 5; i++)
    {
        if(id == inv[i])
        {
            return false;
        }
    }

    if((id[0]>='A' && id[0]<='Z') || (id[0]>='a' && id[0]<='z') || id[0]=='_')
    {
        for(int i = 1; i < id.length(); i++)
        {
            if(!((id[i]>='A' && id[i]<='Z') || (id[i]>='a' && id[i]<='z') || (id[i]>='0' && id[i]<='9') || id[i]=='_'))
            {
                return false;
            }
        }
        return true;
    }
    return false;
}

int part4A()
{
            string idnt;
            cout << "Enter variable name: ";
            cin >> idnt;

            if(checkId(idnt))
            {
                cout << "Valid Identifier."<<endl;
            }
            else
            {
                cout << "Invalid Identifier."<<endl;
            }
}
