class Solution {
public:
    int computeSum(vector<int>& nums,int divisor){
        int sum=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            sum=sum+(nums[i]+divisor-1)/divisor;
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int s=1;
        int e=*max_element(nums.begin(),nums.end());
        int ans=e;
        int mid=s+(e-s)/2;
        while(s<=e){
            int totalSum=computeSum(nums,mid);
            if(totalSum<=threshold){
               ans=mid;
               e=mid-1;
            }
            else{
                s=mid+1;
            }
            mid=s+(e-s)/2;
        }
        return ans;
    }
};