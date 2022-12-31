#include <bits/stdc++.h>
using namespace std;

int recFindIndex(int arr[], int size, int key)
{
    if (size <= 0)
    {
        return -1;
    }
    if (arr[0] == key)
    {
        return size;
    }
    int ans = recFindIndex(arr + 1, size = 1, key);
    if (ans != -1)
    {
        return ans + 1;
    }
    else
    {
        return -1;
    }
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
    cout << recFindIndex(arr, size, key);
    return 0;
}