#include<iostream>
#include<string>
using namespace std;

bool isNum()
{
    string c;
    cout<<"Enter input: ";
    cin>>c;
    for(int i=0;i<c.length();i++)
    {
        if(c[i]>47 && c[i]<58)
        {
            continue;
        }
        else
        {
            return false;
        }
    }
    return true;
}

int part1A()
{
            bool num = isNum();
            if(num)
            {
                cout<<"It is a number"<<endl;
            }
            else
            {
                cout<<"It is not a number"<<endl;
            }
}

