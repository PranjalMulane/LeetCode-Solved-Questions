// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    pair<long,long> indexes(vector<long long> v, long long x)
    {
        // code here
        long long int n=v.size();
        long long int l=0;
        long long int h = n-1;
        long long int mid;
        long long int firstIndex=-1, secIndex=-1;
        
        while(l<=h){
            mid= l+ (h-l)/2;
            
            if(x < v[mid]){
           
                h = mid-1;
            }
            else if(x > v[mid]){
                l = mid+1;
            }
            else{
                firstIndex = mid;
                h = mid-1;
            }
        }
        
        l=0;
        h=n-1;
        
        while(l<=h){
            mid= l+ (h-l)/2;
            
            if(x < v[mid]){
           
                h = mid-1;
            }
            else if(x > v[mid]){
                l = mid+1;
            }
            else{
                secIndex = mid;
                l = mid+1;
            }
        }
        
        return {firstIndex, secIndex};
    }
};

// { Driver Code Starts.

int main()
 {
    long long t;
    cin>>t;
    while(t--)
    {
        long long n, k;
        vector<long long>v;
        cin>>n;
        for(long long i=0;i<n;i++)
        {
            cin>>k;
            v.push_back(k);
        }
        long long x;
        cin>>x;
        Solution obj;
        pair<long,long> pair = obj.indexes(v, x);
        
        if(pair.first==pair.second and pair.first==-1)
        cout<< -1 <<endl;
        else
        cout<<pair.first<<" "<<pair.second<<endl;

    }
	return 0;
}
  // } Driver Code Ends