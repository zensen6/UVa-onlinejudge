#include <bits/stdc++.h>
#define INF 1000000000
using namespace std;

vector<pair<int, int>> v;
int n;
double ans = INF;
double d[16][1 << 16];

double dist(int x, int y)
{
    return sqrt((v[x].first - v[y].first) * (v[x].first - v[y].first) + (v[x].second - v[y].second) * (v[x].second - v[y].second));
}

double proc(int here, int mask)
{

    if (mask == ((1 << (2 * n)) - 1))
    {
        return 0;
    }
    if (d[here][mask] != -1)
        return d[here][mask];
    double ret = INF;

    if (mask & (1 << here))
        return proc(here + 1, mask);
    for (int i = here + 1; i < 2 * n; i++)
    {
        if (mask & (1 << i))
            continue;

        mask |= (1 << here);
        mask |= (1 << i);

        ret = min(proc(here + 1, mask) + dist(here, i), ret);
        mask ^= (1 << i);
        mask ^= (1 << here);
    }
    return ret;
}

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int c = 1;
    while (1)
    {

        cin >> n;
        ans = INF;
        if (!n)
            break;
        v.clear();
        for (int i = 0; i < 16; i++)
        {
            for (int j = 0; j < (1 << 16); j++)
            {
                d[i][j] = -1;
            }
        }

        string name;
        int x, y;

        for (int i = 0; i < 2 * n; i++)
        {
            cin >> name >> x >> y;
            v.push_back({x, y});
        }
        cout << fixed;
        cout.precision(2);
        cout << "Case " << c << ": " << proc(0, 0) << '\n';
        c++;
    }

    return 0;
}