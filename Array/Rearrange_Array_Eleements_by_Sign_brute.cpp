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
int n;cin>>n; 
vector<int> vec;
for(int i=0;i<n;i++){
    int x; cin>>x;
    vec.pb(x);
}

vector<int> pos_array,neg_array;
for(auto it:vec){
    if(it>0)
    pos_array.pb(it);
    else
    neg_array.pb(it);
}


int j=0;
for(int i=0;i<pos_array.size();i++){
      vec[j]=pos_array[i];
      cout<<vec[j]<<" "<<j<<endl;
      j=j+2;
}
j=1;
for(int k=0;k<neg_array.size();k++){
       vec[j]=neg_array[k];
       j=j+2;
}
//? time complexity is O(n) and space complexity is O(n)
for(auto it:vec){
    cout<<it<<" ";
}

 return 0;
}