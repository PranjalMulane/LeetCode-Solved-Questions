// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
vector<int> find(int arr[], int n , int x )
{
    // code here
    int start=0;
    int end = n-1;
    int first = -1;
    int last=-1;
    
   //first pccurance 
    while(start<= end){
        int mid = start + ((end-start)/2);
        if( x < arr[mid]){
            end = mid -1;
        }
        else if ( x> arr[mid]){
            start = mid+1;
        }
        else {
            first = mid;
            end = mid-1;
        }
    }
    
    start =0; end = n-1;
    //last occurance
    while(start<= end){
        int mid = start + ((end-start)/2);
        if( x < arr[mid]){
            end = mid -1;
        }
        else if ( x> arr[mid]){
            start = mid+1;
        }
        else {
            last = mid;   //we found that element 
            start = mid+1;    //but we are not sure that this is the last occurence
        }
    }
    return {first,last};
}

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}


  // } Driver Code Ends