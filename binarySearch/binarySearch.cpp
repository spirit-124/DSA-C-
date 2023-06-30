#include <iostream>
using namespace std;

// int binarySearch(int arr[], int size, int key){

//     int start = 0;
//     int end = size - 1;

//     int mid = start + (end - start) / 2;

//     while (start <= end)
//     {
//         if (arr[mid] == key)
//         {
//             return mid;
//         }

//         // go to right wala part
//         if (key > arr[mid])
//         {
//             start = mid + 1;
//         }
//         else
//         { // key < arr[mid]
//             end = mid - 1;
//         }

//         mid = start + (end - start) / 2;
//     }
//     return -1;
// }

int binarySearch(int arr[], int size, int key)
{

    int start = 0;
    int end = size - 1;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {

        if (arr[mid] == key)
        {
            return mid;
        }

        // go to right wala part
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        { // key < arr[mid]
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }

    return -1;
}

// int main()
// {
//     int even[6] = {3, 7, 8, 1, 9, 10};
//     int odd[5] = {3, 9, 1, 5, 8};

//     int index = binarySearch(odd, 5, 9);
//     cout << " Index of 5 is " << index << endl;

//     return 0;
// }
int main()
{

    int odd[5] = {3, 8, 11, 14, 16};

    int oddIndex = binarySearch(odd, 5, 3);

    cout << " Index of  is " << oddIndex << endl;

    return 0;
}
