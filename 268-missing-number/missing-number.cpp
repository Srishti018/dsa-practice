class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int size=nums.size();
        int add=0;
        for(int i=0;i<size;i++){
            add+=nums[i];
        }
        int addnums=0;
        for(int i=0;i<=size;i++){
            addnums+=i;
        }
        return addnums-add;
    }
};