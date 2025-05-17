#include <iostream>
using namespace std;
void bubblesort(int array[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int size;
    cout << "Enter the size od array" << endl;
    cin >> size;
    int array[size];
    cout << "Enter the elements in array" << " ";
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << endl;
    }
    bubblesort(array, size);
    cout << "Sorted array is" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}