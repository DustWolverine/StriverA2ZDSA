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
    vec.push_back(x);
}

pair<int,int> pp;
int maxSum=INT_MIN;
for(int i=0;i<n;i++){
    int sum=0;
    for(int j=i;j<n;j++){
        sum+=vec[j];
        if(sum>maxSum){
            maxSum=sum;
            pp.first=i;
            pp.second=j;
        }
    }
}

cout<<maxSum<<endl;
for(int i=pp.first;i<=pp.second;i++){
    cout<<vec[i]<<" ";
}

 return 0;
}