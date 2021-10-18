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

    cout << "Using binary search algo...." << endl;
    
    int pos = -1;
    int lb = 0, ub = n - 1;
    while (lb <= ub)
    {
        int mid = lb + (ub - lb) / 2;
        if (arr[mid] == e)
        {
            pos = mid;
            break;
        }
        else if (arr[mid] > e)
            ub = mid - 1;
        else
            lb = mid + 1;
    }

    if (pos == -1)
        cout << "Element not found in array" << endl;
    else
        cout << "Element " << e << " found at position " << pos << " in array with 0-based indexing" << endl;

    return 0;
}