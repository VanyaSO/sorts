#include <iostream>
using namespace std;


int main()
{
    const int SIZE = 5;
    int arr[SIZE] = {7,1,8,6,3};


    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    return 0;
}
