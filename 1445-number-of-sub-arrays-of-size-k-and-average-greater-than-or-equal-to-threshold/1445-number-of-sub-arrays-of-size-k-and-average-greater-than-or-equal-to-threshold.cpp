class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n=arr.size();
        int sum=0;
        int c=0;
        for(int i=0;i<k;i++){
            sum=sum+arr[i];
        }
        if(sum>=k*threshold){
            c++;
        }
        for(int i=k;i<n;i++){
            sum=sum-arr[i-k]+arr[i];
        if(sum>=k*threshold){
            c++;
        }
        }
        
        return c;
    }
};