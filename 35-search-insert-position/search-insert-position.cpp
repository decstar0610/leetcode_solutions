class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int found=false,ind;
        if(target>nums.back())return n;
        for(int i=0;i<n;i++){
           if(nums[i]==target)return i;
           if(nums[i]>target &&found==false) {
            ind=i;
            found=true;
           }
        }
        return ind;
    }
};