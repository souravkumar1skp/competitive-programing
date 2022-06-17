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
    ll n,x=-1,sum=0;
    cin>>n;
    ll a[n];
    forn(i,0,n)
    {
        cin>>a[i];
        sum+=a[i];
        if((sum==0 || sum<0)&& x==-1)
        x=i+1;
    }
    if(sum!=0)
    {
        cout<<"No";
        return;
    }
    int flag=1;
    forn(i,x,n)
    {
        if(a[i]!=0)
        {
            flag=0;
            break;
        }
    }
    if(flag==0)
    cout<<"No";
    else
    cout<<"Yes";
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