#pragma GCC optimize("Ofast")
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
ll MOD = 998244353;
double eps = 1e-12;
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define endl "\n"
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())


int main()
{
 fast_cin();

#ifndef ONLINE_JUDGE
 freopen("input.txt", "r", stdin);
 freopen("output.txt", "w", stdout);
#endif
int n,d; cin>>n>>d; 
vector<int> v;
for(int i=0;i<n;i++){
    int x; cin>>x; 
    v.push_back(x);
}
d=d%n;
vector<int> temp;
for(int i=0;i<d;i++){
    temp.push_back(v[i]);
}
for(auto it:temp){
    cout<<it<<" ";
}
cout<<endl;
for(int i=d;i<n;i++){
    v[i-d]=v[i];
}
int j=0;
for(int i=n-d;i<n;i++){
    v[i]=temp[j];
    j++;
}
for(auto it:v){
    cout<<it<<" ";
}
//?time complextiy is O(d+n-d+d)=O(n+d)=O(n) since (d<=n) and space complexity is O(d)
 return 0;
}