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
 
void solve()
{
    int n,m,xs,ys,xe,ye;int x=1;
    cin>>n>>m;
    char a[n][m];
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
    {
        cin>>a[i][j];
        if(a[i][j]=='B' && x!=0)
        {
            xs=i+1;
            ys=j+1;
            x=0;
        }
    }
    for(int i=n-1;i>=0;i--)
    {
        for(int j=m-1;j>=0;j--)
        {
            if(a[i][j]=='B')
            {
                xe=i+1;ye=j+1;x=1;break;
            }
        }
        if(x==1)
        break;
    }
    cout<<(xs+xe)/2<<" "<<(ys+ye)/2;
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