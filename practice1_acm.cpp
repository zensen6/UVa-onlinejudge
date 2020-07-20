#include <bits/stdc++.h>
#define PI 3.14159265357989
using namespace std;

typedef pair<int, int> ii;
typedef pair<ii, int> iii;

int main()
{
    /*
    double s;
    scanf("%lf", &s);
    printf("%7.3lf\n", s); //number 1

    */

    /*
    double pi = 2 * acos(0.0);
    int n;
    scanf("%d", &n);
    printf("%.*lf", n, pi);
    */

    // number 2

    /*
    int n, x;
    cin >> n;
    vector<int> v(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    v.resize(unique(v.begin(), v.end()) - v.begin()); 
    for (auto &p : v)
        cout << p << '\n';
    */
    // number 4

    /*
    vector<iii> v;
    int n, d, m, y;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> d >> m >> y;
        v.push_back({{m, d}, y});
    }
    sort(v.begin(), v.end());
    for (auto &p : v)
    {
        cout << p.first.first << " " << p.first.second << " " << p.second << '\n';
    }
    */
    // number 5

    /*
    int n, x, target;
    vector<int> v;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    cin >> target;
    sort(v.begin(), v.end());
    if (binary_search(v.begin(), v.end(), target))
        cout << "YES" << '\n';
    else
        cout << "NO" << '\n';
    */
    //number 6

    /*
    int p[10], n = 10;
    for (int i = 0; i < n; i++)
        p[i] = i;
    int len = sizeof(p) / sizeof(int);
    cout << len << '\n';
    do
    {
        for (auto &k : p)
            cout << char(k + 'A') << " ";
        cout << "\n";
    } while (next_permutation(p, p + len));
    */
    //number 7

    /*
    int n = 20, p[20], i, j;
    for (int i = 0; i < 20; i++)
        p[i] = i;

    for (i = 0; i < (1 << n); i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i & (1 << j))
                cout << j << '\n';
        }
        cout << '\n';
    }
    */
    //number 8

    return 0;
}