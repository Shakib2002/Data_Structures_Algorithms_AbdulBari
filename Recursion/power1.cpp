#include<bits/stdc++.h>
using namespace std;

int power(int n){
    // base case
    if(n==0)
     return 1;
    // recursive case

// return 2*power(n-1);

    int smallProblem= power(n-1);
    int biggerProblem= 2*smallProblem;
    return biggerProblem;
}
 int main()
 {
    int n;
    cin>>n;
    int ans=power(n);
    cout<<ans<<endl; 
  return 0;
 }