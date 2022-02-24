#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        ll arr[n];
        map<ll, ll> m;
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + n);

        for (ll i = 0; i < n; i++)
        {
            m[arr[i]]++;
        }

        ll ans = 0;
        for (ll i = 0; i < n; i++)
        {
            if (m.count(arr[i]) == 0)
                continue;
            ll find = arr[i] * x;
            if (m.count(find))
                m[find]--;
            else
                ans++;
            m[arr[i]]--;
            if (m[find] == 0)
                m.erase(find);
            if (m[arr[i]] == 0)
                m.erase(arr[i]);
        }
        cout << ans << "\n";
    }
    return 0;
}