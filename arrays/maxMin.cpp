// TO FIND THE MAXIMUM AND MINIMUM ELEMENT FROM AN ARRAY.

#include <iostream>
using namespace std;

int getMin(int arr[], int n)
{
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    // returing max value;
    return min;
}
int getMax(int arr[], int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    // returing max value;
    return max;
}
int main()
{

    int size;

    cin >> size;
    int arr[100];

    // taking input in an array
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "The max element is :  " << getMax(arr, size) << endl;
    cout << "The min element is :  " << getMin(arr, size) << endl;

    return 0;
}