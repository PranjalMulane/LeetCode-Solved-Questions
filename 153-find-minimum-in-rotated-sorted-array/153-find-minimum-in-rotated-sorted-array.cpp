class Solution {
public:
    int findMin(vector<int>& arr) {
        int n= arr.size();
        int l=0;
        int h=n-1;
        int mid;
        sort(arr.begin(), arr.end());
        while( l<=h ){
            mid = l + (h-l)/2;
            
            if(mid==0 || arr[mid-1] > arr[mid]){
                return arr[mid];
            }
            if(arr[l] > arr[mid]){
                h=mid-1;
            }
            else if(arr[mid] > arr[h]){
                l=mid+1;
            }
            else{
                return arr[l];
            }
        }
        return -1;
    }
};