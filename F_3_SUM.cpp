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

bool f(ll i,ll w, ll sum, vector<ll> v){
    if(i>sz(v) || w>3)
    return false;

    if(w==3 && sum%10==3)
    return true;

    return (f(i+1, w+1, sum+v[i], v) || f(i+1, w,sum, v));
}

void solve()
{
    ll n;
    cin>>n;
    ll a[n], freq[10]={0};
    vector<ll> v;
    forn(i,0,n){
        cin>>a[i];
        a[i]=a[i]%10;
        if(freq[a[i]]<3)
        {
            v.pb(a[i]);
            freq[a[i]]++;
        }
    }
    // cout<<sz(v);
    if(f(0,0,0,v)==true)
    cout<<"YES";
    else
    cout<<"NO";  
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