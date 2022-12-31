#include <bits/stdc++.h>
using namespace std;

int recFindAllIndex(int input[], int size, int key, int output[])
{
    if (size <= 0)
    {
        return 0;
    }
    int ans = recFindAllIndex(input, size - 1, key, output);
    if (input[size - 1] == key)
    {
        output[ans++] = size - 1;
    }
    return ans;
}
int outputHandler(int input[], int n, int x)
{
    int output[n];
    int size = recFindAllIndex(input, n, x, output);
    for (int i = 0; i < size; i++)
    {
        cout << output[i] << " ";
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
    cout << outputHandler(arr, size, key);
    return 0;
}