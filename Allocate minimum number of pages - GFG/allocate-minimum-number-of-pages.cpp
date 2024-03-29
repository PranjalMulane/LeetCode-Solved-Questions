// { Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
     bool isAllocationPossible(int A[], int N, int M, int maxPages){
         int NoOfStudent = 1;
         int currentNoOfPagesToStudent = 0;
         
         for(int i=0;i<N;i++){
             if(A[i] > maxPages){
                 return false;
             }
             
             if(currentNoOfPagesToStudent + A[i] > maxPages){
                 NoOfStudent++;
                 if(NoOfStudent >  M)  return false;
                 currentNoOfPagesToStudent = A[i];
             }
             else{
                 currentNoOfPagesToStudent += A[i];
             }
         }
         return true;
     }
    
    //Function to find minimum number of pages.
    int findPages(int A[], int N, int M) 
    {
        //code here
        int res= INT_MAX;
        
        int sum=0;
        for(int i=0; i<N;i++){
            sum+= A[i];
        }
        
        int l = A[N-1];
        int h = sum;
        int mid;
        
        while(l<=h){
          mid = l + (h-l)/2;   //possible value of maximum number of pages
          
          if(isAllocationPossible(A,N,M,mid)){
              res = mid;
              h = mid-1;
          }
          else{
               l = mid+1;
          }
          
        }
        return res;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}
  // } Driver Code Ends