#include <iostream>
#include <string>
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

bool isMultLineCommStart(string line)
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

int main()
{
    string input;
    getline(cin, input);

    if(isCommLine(input))
    {
        cout << "This is a comment line." << endl;
    }
    else
    {
        cout << "This is not a comment line." << endl;
    }

    return 0;
}

