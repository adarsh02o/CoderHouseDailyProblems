#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n]; 
     int sum = 0;
     int ans;
    for(int i =0; i<n;i++){
        cin>>arr[i];
         sum = sum + arr[i];
    }
   
ans = (n*(n+1))/2 - sum;
cout<<ans<<endl;

}
