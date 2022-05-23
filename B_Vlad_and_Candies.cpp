#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
#define pb push_back
#define pob pop_back()
#define mod 1000000007
#define max INT_MAX
#define min INT_MIN
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
        vector<int> arr(n+1,0);
        for(int i=1; i<=n; i++)
        cin>>arr[i];
        sort(arr.begin(),arr.end());
        int flag=1;
        if(arr[n]-arr[n-1]>1)
        flag=0;
        if(flag==1)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    
    return 0;
}