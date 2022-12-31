#include <bits/stdc++.h>
using namespace std;

int recLastIndex(int arr[], int size, int key)
{
    if (size <= 0)
    {
        return -1;
    }
    if (arr[size] == key)
    {
        return size;
    }
    int ans = recLastIndex(arr, size - 1, key);
}
int main()
{

    int size, key;
    cin >> size >> key;
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << recLastIndex(arr, size, key);
    return 0;
}