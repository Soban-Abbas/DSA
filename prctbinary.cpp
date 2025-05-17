#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target) {
    int start = 0;
    int end = size - 1;

    while (start<=end) {
        int mid = (start + end) / 2;
        if(target==arr[mid]){
            return mid;}
            else if(target<arr[mid]){
                end= mid-1;
            }
            else// target>mid
            start=mid+1;
        }
        return -1; // if not found
    }
    

   

int main() {
    int arr[] = {2, 4, 7, 10, 15, 20, 25};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 15;

    int result = binarySearch(arr, size, target);

    if (result != -1)
        cout << "Target found at index: " << result;
    else
        cout << "Target not found";

    return 0;
}
