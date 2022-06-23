// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int sumOfRowCol(int N, int M, vector<vector<int>> A) {
        int rowSum=0, colSum=0; 
        int flag=0;
        for(int i=0; i<N; i++){

            for(int j=0; j<M;j++){
                rowSum += A[i][0];
                colSum += A[0][j];
            }
        }
        if( rowSum == colSum){
            flag = 1;
        }
        else{
            flag = 0;
        }
        return flag;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M;
        cin >> N >> M;
        vector<vector<int>> A(N, vector<int>(M));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++) cin >> A[i][j];
        Solution ob;
        cout << ob.sumOfRowCol(N, M, A) << "\n";
    }
}  // } Driver Code Ends