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
int n,m; cin>>n>>m; 
vector<int> vec1,vec2;
for(int i=0;i<n;i++){
    int x; cin>>x; 
    vec1.push_back(x);
}
for(int j=0;j<m;j++){
    int x; cin>>x; 
    vec2.push_back(x);
}

int i = 0, j = 0; 
vector < int > Union; 
while (i < n && j < m) {
  if (vec1[i] <= vec2[j]) 
  {
    if (Union.size() == 0 || Union.back() != vec1[i])
      Union.push_back(vec1[i]);
    i++;
  } else 
  {
    if (Union.size() == 0 || Union.back() != vec2[j])
      Union.push_back(vec2[j]);
    j++;
  }
}
while (i < n) 
{
  if (Union.back() != vec1[i])
    Union.push_back(vec1[i]);
  i++;
}
while (j < m) 
{
  if (Union.back() != vec2[j])
    Union.push_back(vec2[j]);
  j++;
}

for(auto it:Union){
    cout<<it<<" ";
}
//? time complexity is O(n+m) and space complexity is O(n+m)
 return 0;
}