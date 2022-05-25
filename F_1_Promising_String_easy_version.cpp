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
        char c[n];
        int ans=0;
        int m,p;
        for (int i = 0; i < n; i++)
        cin>>c[i];
        for (int i = 0; i <n; i++)
        {
            m=0;p=0;
            for (int j = i; j < n; j++)
            {
                if(c[j]=='+')
                p++;
                else m++;
                if((m-p)%3==0 && m>=p)
                ans++;
            }            
        }        
        cout<<ans<<endl;
    }
    
    return 0;
}