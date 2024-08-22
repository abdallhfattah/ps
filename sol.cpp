#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool check(int m1[], int m2[])
    {
        for (int i = 0; i < 100; i++)
        {
            if (m1[i] < m2[i])
            {
                cout << "corssing at : " << char(i+'A') << endl;
                return false;
            }
        }
        return true;
    }
    string minWindow(string s, string t)
    {
        string ans = "";
        int alpa[100], alpa2[100];
        memset(alpa , 0 , sizeof(alpa));
        memset(alpa2 , 0 , sizeof(alpa2));
        for (auto &c : t) alpa[c-'A']++;
        int mn = 1e9, b = 0, f = 0, ff = 0, bb = 0;
        bool ok = false;
        for (f = 0; f < s.size();)
        {
            alpa2[s[f]-'A']++;
            while (f >= b && check(alpa2, alpa))
            {
                if (f - b < mn)
                {
                    ff = f, bb = b, mn = ff - bb;
                    cout << "found ans : " << ff << " " << bb << endl;
                }
                ok = true;
                alpa2[s[b++]-'A']--;
            }
            f++;
        }
        while (f >= b && check(alpa2, alpa))
        {
            if (f - b < mn)
            {
                ff = f, bb = b, mn = ff - bb;
            }
            ok = true;
            alpa2[s[b++]-'A']--;
        }
        cout << ff << " " << bb << endl;
        if (ok)
        {
            for (int i = bb; i <= ff; i++) ans += s[i];
        }

        return ans;
    }
};

int main()
{
    Solution *sol = new Solution();
    string s = "aa";
    string t = "aa";
    cout << sol->minWindow(s, t) << endl;
    cout << "SOLUTION : " << sol->minWindow("ADOBECODEBANC", "ABC") << endl;
}
