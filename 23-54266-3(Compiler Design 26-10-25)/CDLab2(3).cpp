#include <iostream>
#include <string>
using namespace std;

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
