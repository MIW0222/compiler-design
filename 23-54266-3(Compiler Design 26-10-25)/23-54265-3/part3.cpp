#include<iostream>
#include<string>
using namespace std;

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

int part3A()
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
