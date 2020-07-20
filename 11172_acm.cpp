#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc, x, y;
    cin >> tc;
    while (tc--)
    {
        cin >> x >> y;
        cout << (x == y ? "=" : (x > y ? ">" : "<")) << '\n';
    }

    return 0;
}