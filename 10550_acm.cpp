#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, f, s, t, sum = 0;
    while (scanf("%d %d %d %d", &i, &f, &s, &t), (f || s || t))
    {
        sum = 720;
        sum += 9 * (i > f ? i - f : 40 + i - f);
        sum += 360;
        sum += 9 * (f > s ? 40 + s - f : s - f);
        sum += 9 * (s > t ? s - t : 40 + s - t);
        printf("%d\n", sum);
    }

    return 0;
}