#include<iostream>
#include<string>
#include<math.h>

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

bool isSingLineComm(string line)
{
    int pos=line.find("//");
    return pos>=0;
}

bool isMultLineComm(string line)
{
    int start=line.find("/*");
    int end=line.find("*/");

    return start>=0 && end>=0 && start<end;
}

bool isCommLine(string line)
{
    return isSingLineComm(line) || isMultLineComm(line);
}

bool isOp()
{
    char op[6]={'+','-','*','/','%','='};
    string c;
    cin>>c;

    bool foundOp = false;

    for(int i=0;i<c.length();i++)
    {
        for(int j=0;j<6;j++)
        {
            if(c[i]==op[j])
            {
                cout<<"Operator: "<<c[i]<<endl;
                foundOp=true;
            }
        }
    }
    return foundOp;
}

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

float arrAvg(float arr[], int size)
{
    float sum = 0;
    for(int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    return sum / size;
}

void checkLim(float arr[], int size)
{
    float max = 0;
    float min = arr[0];
    for(int i = 0; i < size; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }

        if(arr[i] < min)
        {
            min = arr[i];
        }
    }

    cout << "Largest element = " << max << "\nSmallest element = " << min;
}

void concat(string fName, string lName)
{
    fName.append(lName);

    cout<<"Full Name: "<<fName;
}

int main()
{
    char option;
    cout<<"a. Task 1 \nb. Task 2 \nc. Task 2 \nd. Task 2 \ne. Task 2 \nf. Task 2 \ng. Task 2 \nh. Exit";
    cout<<"Enter choice: ";
    cin>>option;
    do
    {
        if(option==a)
        {

        }
    }
}


