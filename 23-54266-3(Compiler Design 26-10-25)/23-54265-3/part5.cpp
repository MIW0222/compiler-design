#include<iostream>
#include<math.h>
using namespace std;

float arrAvg(float arr[], int size)
{
    float sum = 0;
    for(int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    return sum / size;
}

int part5A()
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
