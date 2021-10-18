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

    cout << "Enter element to Search" << endl;
    int e;
    cin >> e;

    cout << "Using linear search algo...." << endl;
    int pos = -1;
    for (int i = 0; i < n; i++)
        if (arr[i] == e)
        {
            pos = i;
            break;
        }

    if (pos == -1)
        cout << "Element not found in array" << endl;
    else
        cout << "Element " << e << " found at position " << pos << " in array with 0-based indexing" << endl;

    return 0;
}