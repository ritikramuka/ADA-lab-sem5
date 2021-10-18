#include <bits/stdc++.h>
using namespace std;

void swap(int *i, int *j)
{
    int temp = *i;
    *i = *j;
    *j = temp;
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

    cout << "Using selection sort algo..." << endl;
    for (int i = 0; i < n; i++)
    {
        int minIdx = i;
        for (int j = i + 1; j < n; j++)
            if (arr[j] < arr[minIdx])
                minIdx = j;
        swap(&arr[minIdx], &arr[i]);
    }

    cout << "Sorted Array is" << endl;
    for (int e : arr)
        cout << e << " ";

    cout << endl;

    return 0;
}