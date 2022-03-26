#include <bits/stdc++.h>
using namespace std;
int main() {
   int t;
   cin>>t;
   while(t--)
   {
       int x;
       cin>>x;
       if(x%5==0)
       {
           int notes10 = x/10;
           int notes5 = (x%10)/5;
           cout<<notes10+notes5<<endl;
       }
       else
       cout<<-1<<endl;
   }
   return 0;
}