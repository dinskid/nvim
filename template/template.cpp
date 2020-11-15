#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<vector<ll>> vvl;
typedef vector<ll> vl;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef map<int, int> mii;

template<typename A, typename B> ostream& operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }
template<typename X,typename T=typename enable_if<!is_same<X,string>::value,typename X::value_type>::type>ostream& operator<<(ostream &o,const X &v){o<<'{';string s;for(const T &x:v)o<<s<<x,s=", ";return o<<'}';}
void _dbg() { cerr << endl; } void _out() { cout << endl; }
template<typename Head, typename... Tail> void _dbg(Head H, Tail... T) { cerr << ' ' << H; _dbg(T...); }
template<typename Head, typename... Tail> void _out(Head H, Tail... T) { cout << H << (sizeof...(T) > 0 ? " " : ""); _out(T...); }

#ifdef LOCAL
#define dbg(...) cerr << "[" << #__VA_ARGS__ << "]:", _dbg(__VA_ARGS__)
#else
#define dbg(...)
#endif

#define  out(...) _out(__VA_ARGS__)
#define  endl 			"\n"
#define  FOR(i, a, n)   for (ll i = a; i <= n; i++)
#define  ROF(i, a, n)   for (ll i = a; i >= n; i--)
#define  all(x)         (x).begin()+1, (x).end()
#define  All(x)         (x).begin(), (x).end()

const ll   INF   =  0x7f7f7f7f7f7f7f7f;
const int  inf  =  0x7f7f7f7f;

void solve() {
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T=1;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
