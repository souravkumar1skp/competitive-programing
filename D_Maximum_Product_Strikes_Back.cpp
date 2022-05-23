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
        int s=0,e=0,nn=1;
        cin>>n;
        signed int a[n];
        for(int i=0;i<n; i++)
        cin>>a[i];
        
        int c= (n-1)/2;
        for(int i=c; i>=0; i--)
        if(a[i]==0)
        {s=i+1;i=-1;}
        for(int j=c+1; j<n; j++)
        if(a[j]==0)
        {e=n-j;j=n;}

        if((n)-(s+e)<=0)
        cout<<s<<" "<<e<<endl;
        else
        {
            for(int i=s; i<(n-e); i++)
            nn*=a[i];
            if(nn>0)
            cout<<s<<" "<<e<<endl;
            else
            {
                for(int i=s,j=n-e-1; i<=n-e-1, j>=0; i++,j--)
                {
                    if(a[i]<0 && a[j]>0)
                    {
                        s=i+1;
                        break;
                    }
                    else if(a[i]>0 && a[j]<0)
                    {
                        e=n-j;
                        break;
                    }
                    else if(a[i]<0 && a[j]<0)
                    {
                        if(a[i]==-1)
                        {
                            s=i+1;
                            break;
                        }
                        else if(a[j]==-1)
                        {
                            e=n-j;
                            break;
                        }
                        else
                        {
                            s=i+1;
                            break;
                        }
                    }                        
                }
                cout<<s<<" "<<e<<endl;
            }
            
        }
    }
    
    return 0;
}