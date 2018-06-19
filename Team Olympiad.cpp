#include<bits/stdc++.h>
#define lli long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    lli num,i,x,m=0,n=0,o=0,d,mi;
    cin>>num;
    vector<lli>v,a,b,c;
    for(i=0; i<num; i++)
    {
        cin>>x;
        if(x==1)
        {
            a.push_back(i+1);
            m++;
        }
        else if(x==2)
        {
            b.push_back(i+1);
            n++;
        }
        else if(x==3)
        {
            c.push_back(i+1);
            o++;
        }
    }
    ///cout<<a<<" "<<b<<" "<<c;
  /// for(i=0;i<o;i++)
   ///    cout<<c[i]<<" ";
    d=min(m,n);
    mi=min(d,o);
   cout<<mi<<endl;
    for(i=0; i<mi; i++)
    {
         cout<<a[i]<<" "<<b[i]<<" "<<c[i]<<endl;
    }

}
