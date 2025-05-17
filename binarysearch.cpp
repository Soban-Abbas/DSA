#include <iostream>
using namespace std;
int linear_search(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (target == arr[mid])
        {
            return mid;
        }
        else if (target > arr[mid])
        {
            start = mid + 1;
        }
        else //(target<mid)
        {
            end = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int size;
    cout << "Enter the size of array" << endl;
    cin >> size;
    int arr[size];
    cout << "Enter the elements of array" << " ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    int target;
    cout << "Enter the number you want to find in array";
    cin >> target;
    int array_size = sizeof(arr) / sizeof(arr[0]);
    int result = linear_search(arr, array_size, target);
    if (result != -1)
    {
        cout << "Your targeted number present at index " << result << endl;
    }
    else
    {
        cout << "Number not found in array" << " ";
    }
}