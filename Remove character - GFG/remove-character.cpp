// { Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for c++
class Solution {
  public:
    string removeChars(string string1, string string2) {
        // code here
        string ans;
        for(int i=0; i< string1.size(); i++){
            int flag=0;
             for(int j=0; j<string2.size(); j++){
                 if(string1[i] == string2[j]){
                     flag = 1;
                 }
             }
             
             if( flag != 1){
                 ans.push_back(string1[i]);       
             }
            
        }
        cout<< ans;
        
    }
};


// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string string1,string2;
        cin >> string1; 
        cin >> string2;
        Solution ob;
        cout << ob.removeChars(string1,string2) << endl;
    }
    return 0;
}
  // } Driver Code Ends