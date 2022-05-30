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
    int t,n,sum;
    cin>>t;
    while (t--)
    {
        sum=0;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        if(sum%n==0)
        {int key= sum/n;

        sort(a,a+n);
        bool f= binary_search(a,a+n,key);
        if(f==true)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;}
        else
        cout<<"NO"<<endl;
    }
    
    return 0;
}