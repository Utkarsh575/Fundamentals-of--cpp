// submission of may long Pushpa by shatirbillu575

#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int v[n];
        for (int i = 0; i < n; i++)
        {

            cin >> v[i];
        }
        sort(v, v + n);
        //edge case handling
        if (n == 1)
        {
            cout << v[0] << endl;
        }
        else
        {
            int max = 0;
            int count = 0;
            for (int i = n - 1; i >= 1; i--)
            {
                if (v[i] == v[i - 1])
                {
                    count++;
                }
                else
                {
                    if (max < v[i] + count)
                    {
                        max = v[i] + count;
                    }
                    else
                    {
                        count = 0;
                    }
                }
            }
            cout << max << endl;
        }
    }

    return 0;
}