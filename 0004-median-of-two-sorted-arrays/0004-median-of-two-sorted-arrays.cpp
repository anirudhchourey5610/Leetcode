class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> merge;
        for(int i=0;i<nums1.size();i++){
            merge.push_back(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++){
            merge.push_back(nums2[i]);
        }
        int n=merge.size();
        double ans=-1;
        sort(merge.begin(),merge.end());
        if(merge.size()%2!=0){
            ans=merge[n/2];
        }
        else{
            ans=(merge[n/2]+(merge[n/2-1]))/2.0;
        }
        return ans;
    }
};