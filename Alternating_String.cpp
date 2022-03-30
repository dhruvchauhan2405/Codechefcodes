#include <bits/stdc++.h>
using namespace std;
int main() {
   int t;
   cin>>t;
   while(t--)
   {
       int n;
       int count1 =0, count0 =0;
       cin>>n;
       string s;
       cin>>s;
       for(int i=0;i<n;i++)
       {
           if(s[i]=='1')
           count1++;
           else if(s[i]=='0')
           count0++;
       }
       if(count0>count1)
       cout<<2*count1+1<<endl;
       else if(count1>count0)
       cout<<2*count0+1<<endl;
       else
       cout<<count0*2<<endl;

   }
   return 0;
}