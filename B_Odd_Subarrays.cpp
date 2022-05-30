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
        int ans=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n; i++)
        cin>>arr[i];

        for(int i=1; i<n;i++)
        {
            if(arr[i]<arr[i-1])
            {ans++;
            i++;}
        }
        cout<<ans<<endl;
    }
    
    return 0;
}