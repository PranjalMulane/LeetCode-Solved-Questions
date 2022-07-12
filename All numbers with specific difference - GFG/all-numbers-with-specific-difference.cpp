// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
  long  long sum(long long mid){
      long long  c=0;
      while(mid>0){
         c+=mid%10;
          mid/=10;
      }
      return c;
  }
    long long getCount(long long N , long long D) {
        // code here
        long long  l=1,h=N;
        while(l<=h){
            long long mid=(l+h)/2;
            if(mid-sum(mid)<D){
                l=mid+1;
            }else{
                h=mid-1;
            }
        }
        return (N-h);
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N,D;

        cin>>N>>D;

        Solution ob;
        cout << ob.getCount(N,D) << endl;
    }
    return 0;
}  // } Driver Code Ends