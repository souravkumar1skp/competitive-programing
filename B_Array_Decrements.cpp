#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
#define for(i,s,e) for(ll i = s; i < e; i++)
#define rfor(i,s,e) for(ll i = s; i >= e; i--)
#define mp make_pair
#define pb push_back
#define pob pop_back()
#define mod 1000000007
#define inf INT_MAX
#define minf INT_MIN
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

void solve()
{
    int n;
    cin>>n;
    int a[n],b[n];
    for(i,0,n) cin>>a[i];
    for(i,0,n) cin>>b[i];
    int d=inf;
    for(i,0,n)
    {
        if(b[i]!=0)
        d=min(a[i]-b[i],d);
    }

    int flag=1;
    if(d<0) flag=0;

    for(i,0,n)
    {
        if(a[i]-b[i]>d) flag=0;
        if(b[i]!=0 && a[i]-b[i]<d) flag=0;
    }

    if(flag==0) cout<<"NO";
    else cout<<"YES";
}
int main()
{
    fast_cin();
    ll t;
    cin>>t;
    while(t--)
    {
       solve();
       cout<<endl;
    }
    return 0;
}