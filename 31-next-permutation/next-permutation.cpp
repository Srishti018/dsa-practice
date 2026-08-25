class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int left=0;
        int i;
        for(i=nums.size()-1;i>0;i--){
            if(nums[i-1]<nums[i]){
                int j=nums.size()-1;
                while(nums[j]<=nums[i-1]){
                    j--;
                }
                swap(nums[j],nums[i-1]);
                break;
            }
        }   
            left=i;
            int right=nums.size()-1;
            while(left<right){
                swap(nums[left],nums[right]);
                left++;
                right--;
            }
    }
};