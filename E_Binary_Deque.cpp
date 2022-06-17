#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
#define forn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s,e) for(ll i = s; i >= e; i--)
#define mp make_pair
#define pb push_back
#define pob pop_back()
#define mod 1000000007
#define inf INT_MAans
#define minf INT_MIN
#define fi first
#define se second
#define all(ans) (ans).begin(), (ans).end()
#define sz(ans) ((ll)(ans).size())
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

void solve()
{
    ll n,s, sum=0,ans=-1;
    cin>>n>>s;
    ll a[n];
    forn(i,0,n)
    {
        cin>>a[i];
        sum+=a[i];
        if(sum==s && ans==-1)
        ans=i+1;
    }
    ll j=0, mans=ans;
    // cout<<ans<<"  ";
    if(sum<s)
    {
        cout<<ans;
        return;
    }
    else
    {
        forn(i,ans,n)
        {
            ans++;
            if(a[i]==1)
            {
                forn(k,j,i+1)
                {
                    ans--;j++;
                    if(a[k]==1)
                    {
                        mans= max(ans,mans);
                        break;
                    }
                }
            }
            mans= max(ans,mans);
        }
    }
    cout<<n-mans;
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