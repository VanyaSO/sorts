#include <iostream>
using namespace std;


int main()
{
    const int SIZE = 5;
    int arr[SIZE] = {7,0,8,-5,3};


    for (int i = 0; i < SIZE; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < SIZE; j++)
        {
            if(arr[minIndex] > arr[j])
                minIndex = j;
        }

        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;

    }

    return 0;
}
