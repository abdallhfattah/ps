#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FUSION ios_base::sync_with_stdio(false), cin.tie(nullptr);
#define ld long double

#define vi vector<int>
#define vll vector<ll>
#define pll pair<ll, ll>
#define vpll vector<pll>
#define INF LLONG_MAX

// methods
#define all(item) item.begin(), item.end()
#define rall(item) item.rbegin(), item.rend()
#define mem(a, x) memset(a, x, sizeof(a))

// prints
#define NO "NO\n"
#define YES "YES\n"
#define no cout << NO
#define yes cout << YES
#define yn (ok ? yes : no)
#define el '\n'
#define wrong cout << "-1\n"
#define line cout << "\n"

template <typename T>
void read(vector<T> &args)
{
  for (auto &x : args)
    cin >> x;
}
template <typename T>
void print(T arr)
{
  for (auto &x : arr)
    cout << x << " ";
  line;
}
const ll N = 1e6 + 5, MOD = 1e9 + 7, LOG = 20;
// DP[N];
// bool ok = false;1
// 1e7 -> 1s
void solve()
{
}

int main()
{
  FUSION
  ll TESTS = 1;
  cin >> TESTS;
  // cout << "====== SOLUTIONS ======\n";
  while (TESTS--)
    solve();
  return 0;
}