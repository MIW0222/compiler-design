#include<iostream>
using namespace std;

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

int part6A()
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
}
