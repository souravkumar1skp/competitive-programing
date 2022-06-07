#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
#define mp make_pair
#define pb push_back
#define pob pop_back()
#define mod 1000000007
#define ma INT_MAX
#define mi INT_MIN
#define fi first
#define se second
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main()
{
    fast_cin();
    ll t,n;
    ll k;
    cin>>t;
    while (t--)
    {
        cin>>n>>k;
        vector<ll> v(n+1,0);
        for(int i=1; i<=n; i++)
        {
            cin>>v[i];
            v[i]+=v[i-1];
        }

        if(k>=n)
        cout<<v[n]+(n*k- (n*(n+1))/2)<<endl;

        else
        {
            ll mx= v[k];
            for(int i=k+1; i<=n; i++)
            mx= max(mx,v[i]-v[i-k]);
            cout<<mx+(k*(k-1))/2<<endl;
        }
    }
    
    return 0;
}