#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int t, n, m;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        n -= 2;
        m -= 2;
        ll ans = ((n % 3 == 0 ? n / 3 : (n / 3) + 1) * (m % 3 == 0 ? m / 3 : (m / 3) + 1));
        cout << ans << '\n';
    }

    return 0;
}