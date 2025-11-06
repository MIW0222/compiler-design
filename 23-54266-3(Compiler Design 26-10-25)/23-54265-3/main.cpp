#include <iostream>
#include<string>
#include<math.h>
#include"part1.h"
#include"part2.h"
#include"part3.h"
#include"part4.h"
#include"part5.h"
#include"part6.h"
#include"part7.h"

using namespace std;
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
            part1A();
        }

        else if(option=='b')
        {
            part2A();
        }

        else if(option=='c')
        {
            part3A();
        }

        else if(option=='d')
        {
            part4A();
        }

        else if(option=='e')
        {
            part5A();

        }

        else if(option=='f')
        {
            part6A();
        }

        else if(option=='g')
        {
            part7A();
        }

        else if(option<'a'||option>'h')
        {
            cout<<"Invalid input. Enter valid input."<<endl;
        }

    } while (option!='h');

    return 0;
}
