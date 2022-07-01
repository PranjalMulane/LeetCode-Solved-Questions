// { Driver Code Starts
//Initial Template for C

#include <stdio.h>


 // } Driver Code Ends
//User function Template for C

void sort012(int a[], int n)
{
     // code here 
       int low = 0;
       int mid = 0;
       int high = n-1;
       int temp;
       
       // traversing linearly over the array and swapping in three cases
       while(mid<=high){
           switch(a[mid]){
              case 0: {
                  temp = a[mid];
                  a[mid] = a[low];
                  a[low] = temp;
                  mid++;
                  low++;
                  break;
              }
              case 1: {
                  mid++;
                  break;
              }
              case 2: {
                  temp = a[mid];
                  a[mid] = a[high];
                  a[high] = temp;
                  high--;
                  break;
              }
           }
       }
   }
    


// { Driver Code Starts.

int main() {

    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d", &arr[i]);
        }

        sort012(arr, n);

        for (int i = 0; i < n; i++)
            printf("%d ", arr[i]);
        printf("\n");
    }
    return 0;
}
  // } Driver Code Ends