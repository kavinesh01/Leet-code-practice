/*
Example 1:

Input: nums = [1,1,2]
Output: 2, nums = [1,2,_]*/
  int removeDuplicates(int* nums, int numsSize) {
    if(numsSize == 0) return 0;
    int res = 1;
    for(int i = 1; i < numsSize; i++){
        if(nums[i] != nums[i - 1]){
            nums[res] = nums[i];
            res++;
        }
    }
    return res;
}
