class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count=nums.size();
        for(int i=0;i<count;i++){
            if(nums[i]==0){
                for(int j=i+1;j<count;j++){
                    nums[j-1]=nums[j];
                }
                nums[count-1]=0;
                count--;
                i--;
            }
        }
    }
};