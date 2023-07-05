#include <iostream>
using namespace std;

int getPivotElement(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;

    while (start < end)
    {
        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}

int main()
{
    int arr[8] = {
        7,
        8,
        9,
        1,
        2,
        3,
        4,
        5,
    };

    cout
        << "The Pivot Element in given array is->" << getPivotElement(arr, 8) << endl;

    return 0;
}