//Create a program that checks if an array is sorted in ascending order.
//start the explaination of the code from int main() 

#include <iostream>
using namespace std;

bool isSorted(int arr[], int size) // isSorted element takes integer array and size as arguments
{
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] > arr[i + 1]) // check if the current element is greater than next element
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    if (isSorted(arr, size)) // check if the array is sorted and display in ascending order
    {
        cout << "The array is sorted in ascending order." << endl;
    }
    else
    {
        cout << "The array is not sorted in ascending order." << endl;
    }

    return 0;
}
