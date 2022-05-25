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
        char s[n][n];
        int a[n];
        memset(a,0,sizeof(a));
        for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
        {
            cin>>s[i][j];
            if((i-j)>=0 && s[i][j]-'0'==1)
            a[i-j]++;
            else if((i-j)<0 && s[i][j]-'0'==1)
            a[n+(i-j)]++;
        }
        int sum=0, m=mi;
        for(int i=0; i<n; i++)
        {
            sum+=a[i];
            m= max(m, a[i]);
        }
        cout<<(n-m)+(sum-m)<<endl;
    }
    
    return 0;
}