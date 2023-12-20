//Create a program to find the Kth smallest element in an array.

#include <iostream>
using namespace std;
int main()
{

    // It input size, elements of the array, K to the Kth smallest element of the array from user
    int size, k, N = 0;

    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];

    cout << "Enter " << size << " elements for the array " << endl;
    for (int i = 0; i < size; ++i)
    {
        cout << "Enter the " << i + 1 << "th element of the array: ";
        cin >> arr[i];
    }

    // calculating and displaying the kth smallest element of the array
    do
    {
        cout << "Enter the value of K(smallest element): ";
        cin >> k;
        if (k >= 1 && k <= size)
        {
            sort(arr, arr + size);
            int kthSmallest = arr[k - 1];
            cout << "The " << k << "th smallest element is: " << kthSmallest << endl;
        }
        else
        {
            cout << "Invalid value of K(K should be between 1 and " << size << ")" << endl;
            N = 1;
        }
    } while (N);

    return 0;
}