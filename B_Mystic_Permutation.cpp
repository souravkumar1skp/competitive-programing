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
    int n,x;
    cin>>n;
    int a[n],temp[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        temp[i]=a[i];
    }
    if(n==1)
    cout<<"-1";
    else{
        sort(temp,temp+n);
        for(int i=0; i<n; i++)
        {
            if(a[i]==temp[i] && i!=n-1)
            {
                x=temp[i];
                temp[i]=temp[i+1];
                temp[i+1]=x;
            }
            else if(a[i]==temp[i] && i==n-1)
            {
                x=temp[i];
                temp[i]=temp[i-1];
                temp[i-1]=x;
            }
        }
        for(int i=0; i<n; i++)
        cout<<temp[i]<<" ";
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