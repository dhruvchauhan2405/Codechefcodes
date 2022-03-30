#include <bits/stdc++.h>
using namespace std;
int main() {
   int t;
   cin>>t;
   while(t--)
   {
       int n,x;
       cin>>n>>x;
       int a=n/3;
       int b =n%3;
       int sum= a*2*x + b*x;
       cout<<sum<<endl;
   }
   return 0;
}