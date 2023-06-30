// *TO FIND THE FIRST AND LAST INDEX OF AN ELEMENT IN ARRAY

#include <iostream>
using namespace std;

int firstOCC(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    int ans = -1;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int lastOCC(int arr[], int size, int key) // Right ki taraf
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    int ans = -1;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{
    int even[7] = {0, 1, 2, 3, 3, 4, 4};

    cout << "The first Occurrence of 4 is at indedx => " << firstOCC(even, 7, 4) << endl;
    cout << "The last Occurrence of 4 is at indedx => " << lastOCC(even, 7, 4) << endl;

    return 0;
}