#include<iostream>
using namespace std;
int peakElementFromMountainArray(int* arr, int size) {
    int start = 0;
    int end = size - 1;
    while (start < end) {
        int mid = start + (end - start)/2;
        if (arr[mid] < arr[mid+1])
            start = mid + 1;
        else
            end = mid;
    }
    return start;
}
int main()
{
    int arr[] = {0, 10, 5, 2};
    int size = sizeof(arr)/sizeof(arr[0]);
    int peakIndex = peakElementFromMountainArray(arr, size);
    cout << "Peak Element is " << arr[peakIndex];
    return 0;
}

// Peak Element is 10