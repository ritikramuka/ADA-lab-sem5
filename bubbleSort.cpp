#include <bits/stdc++.h>
using namespace std;

void swap(int *arr, int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int main()
{
    cout << "Enter number of elements in Array" << endl;
    int n;
    cin >> n;

    cout << "Enter elements of Array" << endl;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Using bubble sort algo..." << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j + 1] < arr[j])
                swap(arr, j, j + 1);
        }
    }

    cout << "Sorted Array is" << endl;
    for (int e : arr)
        cout << e << " ";

    cout << endl;

    return 0;
}