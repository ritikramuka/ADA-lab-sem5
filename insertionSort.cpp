#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Enter number of elements in Array" << endl;
    int n;
    cin >> n;

    cout << "Enter elements of Array" << endl;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Using insertion sort algo..." << endl;
    for (int i = 1; i < n; i++)
    {
        int inser = arr[i];
        
        int j = i - 1;
        for(; j >= 0 && arr[j] > inser; j--)
            arr[j + 1] = arr[j];
        
        arr[j + 1] = inser;
    }

    cout << "Sorted Array is" << endl;
    for (int e : arr)
        cout << e << " ";

    cout << endl;

    return 0;
}