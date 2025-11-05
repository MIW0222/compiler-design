#include <iostream>
#include<string>
#include<math.h>

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

bool isOp()
{
    char op[6]={'+','-','*','/','%','='};
    string c;
    cout<<"Enter input: ";
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

bool isSingLineComm(string line)
{
    for (int i = 0; i < line.length() - 1; i++)
    {
        if (line[i] == '/' && line[i + 1] == '/')
        {
            return true;
        }
    }
    return false;
}

bool isMultLineStart(string line)
{
    for (int i = 0; i < line.length() - 1; i++)
    {
        if (line[i] == '/' && line[i + 1] == '*')
        {
            return true;
        }
    }
    return false;
}

bool isMultLineEnd(string line)
{
    for (int i = 0; i < line.length() - 1; i++)
    {
        if (line[i] == '*' && line[i + 1] == '/')
        {
            return true;
        }
    }
    return false;
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

    cout << "\nLargest element = " << max << "\nSmallest element = " << min;
}

string concat(string fName, string lName)
{
    return fName + " " + lName;
}

int main()
{
    char option;
    cout<<"Compiler Design Lab Task 01 (by 23-54266-3)"<<endl;
    do
    {
        cout<<"\na. Identify number. \nb. Identify operators. \nc. Identify Comments (Single-Line or Multi-Line). \nd. Check validity of Identifier. \ne. Find average of elements in an array. \nf. Find maximum and minimum element in array. \ng. Concatenate name. \nh. Exit";
        cout<<"\nEnter choice: ";
        cin>>option;
        if(option=='a')
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

        else if(option=='b')
        {
            if(!isOp())
            {
                cout<<"No operators found."<<endl;
            }
        }

        else if(option=='c')
        {
            string line;
            bool inMultiline = false;

            cout << "Enter multiple lines (type STP to stop):";
            cin.ignore();

            while (true)
            {
                getline(cin, line);
                if (line == "STP")
                {
                    break;
                }

                if (inMultiline)
                {
                    cout << "This line is inside a multi-line comment." << endl;
                    if (isMultLineEnd(line))
                    {
                       cout<<"This is the end of the multi-line comment."<<endl;
                       inMultiline = false;
                    }
                }
                else if (isSingLineComm(line))
                {
                    cout << "This is a single-line comment." << endl;
                }
                else if (isMultLineStart(line))
                {
                    cout << "This is the start of a multi-line comment." << endl;
                    if (!isMultLineEnd(line))
                        inMultiline = true;
                }
                else
                {
                    cout << "This is not a comment line." << endl;
                }
            }
        }

        else if(option=='d')
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

        else if(option=='e')
        {
            int size;
            cout << "Enter array size: ";
            cin >> size;
            float arr[size];
            cout << "Enter array elements: " << endl;
            for(int i = 0; i < size; i++)
            {
                cin >> arr[i];
            }

            cout << "Array: ";
            for(int i = 0; i < size; i++)
            {
                cout << arr[i] << " ";
            }

            float avg = arrAvg(arr, size);
            cout << "\nAverage=" << avg<<endl;

        }

        else if(option=='f')
        {
            int size;
            cout << "Enter array size: ";
            cin >> size;

            float arr[size];
            cout << "Enter array elements: " << endl;
            for(int i = 0 ; i < size; i++)
            {
                cin >> arr[i];
            }

            cout << "Array: ";
            for(int i = 0 ; i < size; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;

            checkLim(arr, size);
            cout << endl;
        }

        else if(option=='g')
        {
            string fName, lName;
            cout<<"Enter first name: ";
            cin>>fName;
            cout<<"Enter last name: ";
            cin>>lName;

            string fullName = concat(fName,lName);

            cout<<"Full Name: "<<fullName<<endl;

        }

        else if(option<'a'||option>'h')
        {
            cout<<"Invalid input. Enter valid input."<<endl;
        }

    } while (option!='h');

    return 0;
}
