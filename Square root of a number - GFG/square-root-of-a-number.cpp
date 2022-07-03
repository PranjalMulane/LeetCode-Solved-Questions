// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

  

 // } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
        // Your code goes here   
         long long int l=1, h= x/2, ans;
   
   if(x == 1 ) return 1;
   while(l<=h){
       long long int mid = l + ((h-l)/2);
       long long int sqr = mid*mid;
        
        if(sqr < x){
            ans = mid;
            l = mid + 1;
        }
        else if(sqr > x){
            h = mid-1; 
        }
        else{
            return mid;
        }
       
       
   }
   return ans;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		Solution obj;
		cout << obj.floorSqrt(n) << endl;
	}
    return 0;   
}
  // } Driver Code Ends