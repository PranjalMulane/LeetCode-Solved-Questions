// { Driver Code Starts
//Initial Template for C

#include <stdio.h> 


 // } Driver Code Ends
//User function Template for C

int searchInSorted(int arr[], int N, int K) 
{ 
    int start = 0;
    int end = N-1;
    
    
    while(start<=end){
        int mid = (start+end)/2;
         
    
        if(K < arr[mid]){
            end = mid-1;
       
            
        }
        else if(K> arr[mid]){
            start = mid+1;
          
        }
        else{
           
            return 1;
        }
       
    }
    return -1;
   
}

// { Driver Code Starts.


int main(void) 
{ 
    
    int t;
    scanf("%d", &t);
    while(t--){
        int n, k;
        scanf("%d%d", &n, &k);
        
        int arr[n];
        
        for(int i = 0;i<n;i++){
            scanf("%d", &arr[i]);
        }
        
        printf("%d\n", searchInSorted(arr, n, k));

    }

	return 0; 
} 
  // } Driver Code Ends