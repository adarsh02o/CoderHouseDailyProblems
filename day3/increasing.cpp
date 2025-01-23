#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll minimum_moves(int n , vector<int>& arr){
ll minMoves = 0;
for(int i = 1; i<n; i++){
    if(arr[i] < arr[i-1]){
        minMoves += arr[i-1]-arr[i];
        arr[i] = arr[i-1]; 
    }

}

return minMoves;



/* long long moves = 0; // To count the total moves
    for (int i = 1; i < n; ++i) {
        while (arr[i] < arr[i - 1]) { // Increment until arr[i] >= arr[i - 1]
            arr[i]++;
            moves++;
        }
    }
    return moves;
}*/
}

int main() {
    int n;
    cin >> n; // Read the size of the array
    vector<int> arr(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> arr[i]; // Read array elements
    }

    
    cout << minimum_moves(n, arr) << endl;
    return 0;
}