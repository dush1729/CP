#include<bits/stdc++.h>
using namespace std;
bool qf=false;      //fast io enabled/disabled

#define input       freopen("in.txt","r",stdin);
#define output      freopen("out.txt","w",stdout);
#define fast        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);qf=true;

#define sc          scanf
#define pr          printf
#define whi         while
#define ll          long long
#define ull         unsigned long long
#define lld         I64d
#define ff          first
#define ss          second
#define vc          vector
#define pb          push_back
#define ite         iterator
#define str         string
#define bl          bool
#define tr          true
#define fl          false
#define ct          continue;
#define endl        '\n'
#define ret         return
#define rsort       greater<int>()
#define nl          if(qf==tr) pr("\n");else cout<<"\n";
#define gcd(a,b)    __gcd(a,b)
#define mod         1000000007
#define tc          int t;if(qf==fl) scanf("%d",&t); else cin>>t;whi(t--)
#define mnlim(a)    std::numeric_limits<a>::min()
#define mxlim(a)    std::numeric_limits<a>::max()

#define all(c)      c.begin(),c.end()
#define sz(c)       c.size()
#define clr(c)      c.clear()
#define fd(c,a)     c.find(a)
#define bg(c)       c.begin()
#define ed(c)       c.end()
#define ins(c,a)    c.insert(a)
#define rem(c,a)    c.erase(a)



int n,k,i,a[100000],lo,hi,mid,ans,last;
int main()
{
    ll count;
    tc
    {
        sc("%d%d",&n,&k);
        for(i=0;i<n;i++) sc("%d",&a[i]);
        sort(a,a+n);
        lo=1;
        hi=1000000000;
        whi(lo<=hi)
        {
            mid=(lo+hi)/2;
            count=0;
            last=a[0];
            for(i=1;i<n;i++)
            {
                if(a[i]-last>=mid)
                {
                    last=a[i];
                    count++;
                    if(count==k-1) break;
                }
            }
            if(count==k-1)
            {
                ans=mid;
                lo=mid+1;
            }
            else hi=mid-1;
        }
        pr("%d\n",ans);
    }
    ret 0;
}
