#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int,int>
#define pll pair<ll,ll>
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
#define yes() cout<<"YES"<<endl 
#define no() cout<<"NO"<<endl
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int solve(vector<int> &a)
{
    sort(a.begin(), a.end());
    int ans=0;
    // a[0]=-1;
    int x=1;
        // cout<<a.size();
    for(int i=0; i<a.size(); i++)
    {
        if(a[i]<=x && a[i]>0)
        {
            cout<<"y";
            ans+=a[i];
            x++;
            a[i]=-1;
            continue;
        }
        else
        {
            for(int j=0; j<a.size(); j++)
            {
                if(a[j]%x==0)
                {
                cout<<"n";
                    ans+=(a[j]/x);
                    x++;
                    a[j]=-1;
                    break;
                }
            }
            // i--;
        }
    }
    return ans;
}
int main()
{
    fast_cin();
    int n,x;
    cin>>n;
    vector<int> a;
    forn(i,0,n)
    {
        cin>>x;
        a.pb(x);
    }
    cout<< solve(a);
    return 0;
}