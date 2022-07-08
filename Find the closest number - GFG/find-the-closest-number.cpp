// { Driver Code Starts
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution{
    public:
    int findClosest(int arr[], int n, int target) 
    { 
        // Complete the function
        int m=0;
        int mi = 0;
        
        for(int i=0; i<n; i++){
            if(arr[0] >= target){
                return arr[0];
            }
            if(arr[n-1] <= target){
                return arr[n-1];
            }
            
            if(arr[i]<target && arr[i+1] >= target){
                m = target- arr[i];
                mi = arr[i+1]-target;
                
                if(m > mi){
                    return arr[i+1];
                }
                else if(m < mi){
                    return arr[i];
                }else{
                    return arr[i+1];
                }
            }
        }
    } 
};

// { Driver Code Starts.
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,target;
        cin>>n>>target;
        int arr[n];
        for (int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.findClosest(arr,n,target)<<endl;
    }
}
  // } Driver Code Ends