#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        // Declaring Map and assing every alphabate as key and their value to 0
        map<char, ll> low;
        for (char c = 'a'; c <= 'z'; c++)
        {
            low[c] = 0;
        }
        map<char, ll> up;
        for (char c = 'A'; c <= 'Z'; c++)
        {
            up[c] = 0;
        }

        // Counting how many alphabets are in the string and assing their value
        for (ll i = 0; i < s.size(); i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                low[s[i]]++;
            }
            else if (s[i] >= 'A' && s[i] <= 'Z')
            {
                up[s[i]]++;
            }
        }

        // Counting how many Bulks are in the string.
        ll ans = 0;
        vector<ll> v;
        /*for (auto it = low.begin(); it != low.end(); ++it)
          cout << it->first << " " << it->second << '\n';
        for (auto it2 = up.begin(); it2 != up.end(); ++it2)
          cout << it2->first << " " << it2->second << '\n';*/
        for (auto it = low.begin(), it2 = up.begin(); it != low.end(), it2 != up.end(); ++it, ++it2)
        {
            // cout << it->first << " " << it->second << " " << it2->first << " " << it2->second << endl;
            ans += min(it->second, it2->second);
            v.push_back(abs(it->second - it2->second));
        }

        // Making new pairs
        sort(v.begin(), v.end());
        reverse(v.begin(), v.end());
        if (k == 0)
        {
            cout << ans << '\n';
            continue;
        }
        for (ll i = 0; i < v.size(); i++)
        {
            if (k == 0)
                break;
            while (v[i] >= 2 && k > 0)
            {
                k--;
                ans++;
                v[i] /= 2;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
