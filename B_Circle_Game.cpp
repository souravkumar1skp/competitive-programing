#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
#define forn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s,e) for(ll i = s; i >= e; i--)
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
    ll n,sum=0;
    cin>>n;
    ll m= inf;
    ll a[n];
    forn(i,0,n) {
        cin>>a[i];
        if(m>a[i])
        {
            m=a[i];
            sum=i;
        }
    }
    // if(n==1)
    // cout<<"Mike";
    // else if(n==2)
    // cout<<"Joe";
    if(n%2==0)
    {
        if(sum%2==0)
        cout<<"Joe";
        else
        cout<<"Mike";
    }
    else
    {
        cout<<"Mike";
    }
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