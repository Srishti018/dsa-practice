class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int pc=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                count++;
            }
            if(nums[i]!=1){
                if(pc<count){
                    pc=count;
                }
                count=0;
            }
        }
        if(pc<count){
            pc=count;
        }
        return pc;
    }
};