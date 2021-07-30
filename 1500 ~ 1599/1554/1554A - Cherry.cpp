#include <bits/stdc++.h>

using namespace std;

#define fast_io()                     \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define MOD 1000000007
#define INF 1e18
#define nline "\n"
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
typedef pair<int, int> pii;

#ifndef ONLINE_JUDGE
#define debug(x)       \
    cerr << #x << " "; \
    _print(x);         \
    cerr << nline;
#else
#define debug(x)
#endif

void _print(int t)
{
    cerr << t;
}
void _print(ll t) { cerr << t; }
void _print(string t) { cerr << t; }
void _print(char t) { cerr << t; }
void _print(lld t) { cerr << t; }
void _print(double t) { cerr << t; }
void _print(ull t) { cerr << t; }

template <class T, class V>
void _print(pair<T, V> p)
{
    cerr << "{";
    _print(p.ff);
    cerr << ", ";
    _print(p.ss);
    cerr << "}";
}
template <class T>
void _print(vector<T> v)
{
    cerr << "[ ";
    for (T i : v) {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(set<T> v)
{
    cerr << "[ ";
    for (T i : v) {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T, class V>
void _print(map<T, V> v)
{
    cerr << "[ ";
    for (T i : v) {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(multiset<T> v)
{
    cerr << "[ ";
    for (auto i : v) {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("error.txt", "w", stderr);
    freopen("output.txt", "w", stdout);
#endif
    fast_io();

    int tc;
    cin >> tc;

    while (tc--) {
        int n;
        cin >> n;

        vector<int> v(n);
        for (auto& el : v) {
            cin >> el;
        }
        debug(v);

        vector<ll> answer_list;
        for (int i = 1; i < n; ++i) {
            answer_list.pb((ll)v[i] * (ll)v[i - 1]);
        }
        debug(answer_list);

        cout << *max_element(all(answer_list)) << '\n';
    }

    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;

    return 0;
}