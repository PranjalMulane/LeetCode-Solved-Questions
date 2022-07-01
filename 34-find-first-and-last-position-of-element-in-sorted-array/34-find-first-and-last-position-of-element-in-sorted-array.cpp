// #include<bits/stdc++.h>
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int start = 0;
        int end = n-1;
        int first = -1;
        int last = -1;
        
        
        
        while(start<= end){
            int mid = start + ((end-start)/2);
            if( target < nums[mid]){
                end = mid -1;
            }
            else if ( target > nums[mid]){
                start = mid+1;
            }
            else {
                first = mid;
                end = mid-1;
            }
        }
        start = 0, end = n-1;
        while(start<= end){
            int mid = start + ((end-start)/2);
            if( target < nums[mid]){
                end = mid -1;
            }
            else if ( target > nums[mid]){
                start = mid+1;
            }
            else {
                last = mid;   //we found that element 
                start = mid+1;    //but we are not sure that this is the last occurence
            }
         }
        
        
        
    return {first,last};
    }
};