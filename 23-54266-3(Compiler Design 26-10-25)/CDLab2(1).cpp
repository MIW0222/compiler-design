#include <iostream>
using namespace std;

bool isNum()
{
    string c;
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

int main()
{
    bool num = isNum();
    if(num)
    {
        cout<<"It is a number";
    }
    else
    {
        cout<<"It is not a number";
    }
    return 0;
}
