#include <algorithm>
#include <iostream>
#include <map>
using namespace std;
long long t, n, k, x;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> k >> x;
        long long sum1 = (n * (n + 1)) / 2 - ((n - k) * (n - k + 1)) / 2, sum2 = ((k) * (k + 1)) / 2;
        if (x <= sum1 && x >= sum2) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
