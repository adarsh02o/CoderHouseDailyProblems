#include <bits/stdc++.h>
#include <vector>
using namespace std;
// weird alogo cses
int main() {
   long long n;
   cin>>n;
   long long ans;
   vector<long long>temp;
   temp.push_back(n);
   while(n!=1){
       if(n%2==0){
          n/=2; 
          temp.push_back(n);
       }
       else{
           n = n*3+1;
           temp.push_back(n);
       }
   }
    
    for (long long i : temp) {
        cout << i << " ";
    }

    return 0;
}