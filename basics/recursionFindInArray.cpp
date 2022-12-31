#include <bits/stdc++.h>
using namespace std;

bool recFind(int arr[], int size, int key)
{
    --size;
    if (size < 0)
    {
        return false;
    }
    if (arr[size] == key)
    {
        return true;
    }
    return recFind(arr, size, key);
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
    cout << recFind(arr, size, key);
    return 0;
}