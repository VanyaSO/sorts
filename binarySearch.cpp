#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target)
{
    int left = 0;
    int right = size - 1;

    while (left <= right)
    {
        int middle = left + (right - left) / 2;

        if(target == arr[middle])
            return middle;
        else if(target > arr[middle])
            left = middle+1;
        else if(target < arr[middle])
            right = middle-1;

    }

    return -1;
}

int main()
{
    const int SIZE = 10;
    int arr[SIZE] = {1,2,3,4,5,6,7,8,9,10};

    cout << binarySearch(arr, SIZE, 7);

    return 0;
}
