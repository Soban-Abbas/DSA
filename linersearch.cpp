#include <iostream>
using namespace std;
int linearsearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}
void print_array(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int size;
    cout << "Enter the size of array" << endl;
    cin >> size;
    int target;
    cout << "Enter the number you want to find in array" << endl;
    cin >> target;
    int arr[size];
    cout << "Enter the elements of array" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    int result = linearsearch(arr, size, target);
    if (result != -1)
    {
        cout << "Your targetted number present at " << result << "Index" << endl;
    }

    else
    {
        cout << "NO number found" << endl;
    }
}
