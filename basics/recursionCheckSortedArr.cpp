#include <bits/stdc++.h>
using namespace std;

bool checkSortedStatus(int arr[], int size)
{
    if (size == 1 || size == 0)
    {
        return true;
    }
    bool smallSortedArray = checkSortedStatus(arr + 1, size - 1);
    return smallSortedArray;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << checkSortedStatus(arr, size);
}