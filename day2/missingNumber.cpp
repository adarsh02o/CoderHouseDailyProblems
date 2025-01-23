#include<iostream>
using namespace std;

int main(){
    long long n;
    cin>>n;
    long long total = (n*(n+1))/2;
    long long arr[n]; 
     long long sum = 0;
     long long ans;
    for(int i =0; i<n-1;i++){
        cin>>arr[i];
         ans = total - arr[i];
    }
   

cout<<ans<<endl;

}