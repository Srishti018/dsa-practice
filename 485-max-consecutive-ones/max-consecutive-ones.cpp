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
                pc=max(count,pc);
                count=0;
            }
        }
        pc=max(count,pc);
        return pc;
    }
};