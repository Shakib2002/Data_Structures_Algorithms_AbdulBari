#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    // base case
    if(n==0)
        return 1;
// f(n)=n*(n-1)
        int smallProblem = factorial(n-1);
        int bigProblem = n* small;
        return big;

}
 int main()
 {
     int n;
     cin>>n;
     int ans=factorial(n);
     cout<<ans<<endl;
  return 0;
 }