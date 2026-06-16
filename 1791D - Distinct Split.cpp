#include <algorithm>
#include <iostream>
#include <map>
using namespace std;
int t, n;
string s;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> s;
        int ans = 0;
        map <char, int> a, b;
        for (char x : s) b[x]++;
        for (int j = 0; j < n - 1; j++)
        {
            a[s[j]]++;
            b[s[j]]--;
            if (b[s[j]] == 0) b.erase(s[j]);
            ans = max(ans, (int)a.size() + (int)b.size());
        }
        cout << ans << "\n";
    }
    return 0;
}
