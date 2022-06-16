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
    string s;
    ll n;
    cin>>s>>n;

    ll hr= n/60, mnu= n%60;
    ll cnt=0;
    
    ll ghr= (s[0]-'0')*10+s[1]-'0',gmu= (s[3]-'0')*10+(s[4]-'0');
    if((gmu%10)*10+(gmu/10)== ghr)
    cnt++;
    ll tmu= (gmu+mnu), thr= (ghr+hr+(tmu/60))%24; tmu=(tmu)%60;

    // cout<<thr<<" "<<tmu;

    while (!(thr==ghr && tmu==gmu))
    {
        if((tmu%10)*10+(tmu/10)== thr)
        cnt++;
        tmu= (tmu+mnu);
        thr=(thr+hr+(tmu/60))%24;
        tmu= (tmu)%60;
        // cout<<thr<<" "<<tmu;
    }
    cout<<cnt;
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