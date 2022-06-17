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
    ll a,b;
    cin>>a>>b;
    ll mc= abs(a-b);
    ll temp;
    if(mc==0)
    mc++;
    while (a>0 || b>0)
    {
        temp=mc;
        while(temp>0 && a>0){
            cout<<"0";
            a--;
            temp--;
        }
        temp=mc;
        while(temp>0 && b>0){
            cout<<"1";
            b--;
            temp--;
        }
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