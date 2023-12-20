#include <iostream>
using namespace std;
int main()
{
    int n, average = 0;
    cout << "Enter the length of array : ";
    cin >> n;
    int arr[n];
    {
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            average += arr[i];
        }
    }
    average /= n;
    cout << average<<endl;
    return 0;
}
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, average = 0;
//     cout << "Enter the size of ARRAY : ";
//     cin >> n;
//     int arr[n];
//     {
//         for (int i = 0; i < n; i++)
//         {
//             cin >> arr[i];
//             average+=arr[i];
//         }
//     }
//     average /= n;
//     cout<<average<<endl;

// }
