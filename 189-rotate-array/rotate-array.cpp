class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int size=nums.size();
        k = k % size;
        vector<int> num = nums;
        for(int i=0;i<size-k;i++){
            nums[i+k]=num[i];
        }
        for(int i=size-1;i>=size-k;i--){
            nums[i-(size-k)]=num[i];
        }
    }
};