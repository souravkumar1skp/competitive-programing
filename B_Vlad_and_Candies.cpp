#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
#define mp make_pair
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
        sort(arr.begin(), arr.end());
        // for(int i=1; i<=n; i++)
        // cout<<arr[i]<<endl;
        int flag=1;
        if(n%2)
        {
            if(n==1)
            if(arr[1]>1) flag=0;

            else
            if((arr[1]-arr[0])>1 && (arr[2]-arr[1])>1)
            flag=0;

            for(int i=2; i<n; i+=2)
            if(((arr[i+1]-arr[i])>1))
            {
                flag=0;
                break;
            }
        }
        else
        {
            for(int i=1; i<n; i+=2)
            if(((arr[i+1]-arr[i])>1))
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    
    return 0;
}