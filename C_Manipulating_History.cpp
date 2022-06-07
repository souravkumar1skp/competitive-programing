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
    int t,n;
    cin>>t;
    while (t--)
    {
        cin>>n;
        string s;char ans=0;
        for(int i=1;i<=2*n+1;i++)
        {
            cin>>s;
            for(int j=0; j<s.size(); j++)
            ans^=s[j];
        }
        cout<<ans<<endl;
    }
    
    return 0;
}