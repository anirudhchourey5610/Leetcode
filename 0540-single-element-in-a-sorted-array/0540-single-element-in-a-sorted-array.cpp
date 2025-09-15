class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        int s=0;
        int e=n-1;
        int mid=s+(e-s)/2;
        int ans;
        while(s<e){
            if(mid%2!=0){
                mid=mid-1;
            }
            if(nums[mid]==nums[mid+1]){
            s=mid+2;
            }
            else{
                e= mid;
            }
         mid=s+(e-s)/2;
        }
        return nums[s];
    }
};