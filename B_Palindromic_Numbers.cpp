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
    ll n;
    cin>>n;
    string s,s2;
    cin>>s;
    // char s1[n];
    string ans="";
    if(s[0]!='9')
    {
        forn(i,0,n)
        cout<<'9'-s[i];
    }

    else
    {
        int carry = 0;
        for(int i=n-1; i>=0; i--){
            int curr = carry + (s[i] - '0');
            if(curr <= 1){
                carry = 0;
                ans = to_string(1-curr) + ans;
            }
            else{
                ans = to_string(11-curr) + ans;
                carry = 1;
            }
        }
        cout<<ans;
    }
    // cout<<s;
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