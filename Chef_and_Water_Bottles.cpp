#include <bits/stdc++.h>
using namespace std;
int main() {
   int t;
   cin>>t;
   while(t--)
   {
       int n,x,k;
       cin>>n>>x>>k;
       int a = k/x;
       if(n>=a)
       cout<<a<<endl;
       else
       cout<<n<<endl;

   }
   return 0;
}