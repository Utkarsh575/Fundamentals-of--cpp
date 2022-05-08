// submission of may long Attack of Queen by shatirbillu575

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        int diag_moves = (min(x, y) - 1) + (n - max(x, y)) + (min(x, (n + 1) - y) - 1) + n - max(x, (n + 1) - y);
        int straight_moves = (n - 1) + (n - 1);
        int queen_moves = diag_moves + straight_moves;
        cout << queen_moves << endl;
    }
    return 0;
}