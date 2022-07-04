// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    vector<int> firstAndLast(vector<int> &arr, int n, int x) {
        // Code here
    
        vector<int> ans;
        int l=0;
        int h = n-1;
        int firstOcc=-1;
        int secOcc = -1;
        //first occurance
        while(l<=h){
            int mid = l+ ((h-l)/2);
            if( x < arr[mid]){
                h = mid -1;
                
            }
            else if( x > arr[mid]){
                l = mid+1;
            }
            else{
                firstOcc=mid;
                h=mid-1;
            }
            
        }
        
        
        l=0;
        h=n-1;
        
        while(l<=h){
            int mid = l+ ((h-l)/2);
            if( x < arr[mid]){
                h = mid -1;
                
            }
            else if( x > arr[mid]){
                l = mid+1;
            }
            else{
                secOcc=mid;
                l=mid+1;
            }
            
        }
        if( firstOcc == -1 && secOcc == -1){
            return {-1};
        }
        else{
        
        return {firstOcc, secOcc};
        }
        
        
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        Solution obj;
        vector<int> ans= obj.firstAndLast(arr, n, x) ;
        for(int i:ans){
            cout<<i<<" ";
        }
        cout<< endl;
    }
    return 0;
}
  // } Driver Code Ends