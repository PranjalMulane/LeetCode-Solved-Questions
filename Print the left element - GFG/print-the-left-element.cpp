// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution{
    public:
    int leftElement(int a[], int n) {
        // Your code goes here 
        sort(a,a+n);
        
        if(n%2==0){
            return a[(n/2)-1];
        }
        return a[n/2];
        
        
        // int max=0;
        // for(int i=0; i<n; i++){
        //     if(arr[i] > max){
        //         max = arr[i];
                
        //     }
        //     if(arr[i] < min){
        //         min = arr[i];
        //     }
        // }
        
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], i;
        for (i = 0; i < n; i++) cin >> a[i];
        Solution ob;
        cout << ob.leftElement(a, n) << endl;
    }
}
  // } Driver Code Ends