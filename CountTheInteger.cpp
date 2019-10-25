#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define rep(i,a,n) for(int i=a;i<n;i++)
#define rep1(i,a,n) for(int i=a;i<=n;i++)
#define pi pair<int,int>
#define pb push_back
#define mp make_pair
#define test int t; cin>>t; while(t--)
#define fast_io ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
ll phi[1000001];
ll countDiv(ll n)
{
    ll cnt=0;
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            if(n/i==i)
            cnt++;
            else
            cnt+=2;
        }
    }
    return cnt;
}
void Totient(int n) 
{ 
    
    for (int i=1; i<=n; i++) 
        phi[i] = i; 
  
   
    for (int p=2; p<=n; p++) 
    { 
        
        if (phi[p] == p) 
        { 
           
            phi[p] = p-1; 
  
          
            for (int i = 2*p; i<=n; i += p) 
            { 
               
               phi[i] = (phi[i]/p) * (p-1); 
            } 
        } 
    }
} 
int main()
{
    fast_io
    ll n,q;   
    cin>>q;
    Totient(1000001);
    while(q--)
    {
        cin>>n;
        ll f=countDiv(n);
        cout<<n-f-phi[n]+1<<"\n";
}
return 0;
} 
