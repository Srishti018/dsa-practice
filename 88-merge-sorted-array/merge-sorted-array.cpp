class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int j=n-1;
        int i=m-1;
        for(int x=m+n-1;x>=0;x--){
            if(i==-1){
                nums1[x]=nums2[j];
                j--;
            }
            else if(j==-1){
                nums1[x]=nums1[i];
                i--;
            }
            else if(nums1[i]<nums2[j]){
                nums1[x]=nums2[j];
                j--;
            }else{                                                 
                nums1[x]=nums1[i];
                i--;
            }
            
        }
    }
};