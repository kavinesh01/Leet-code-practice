int maxSubArray(int* nums, int numsSize) {
    
    int maxsum=nums[0];
    int currsum=0;
   for(int i=0;i<numsSize;i++){
    currsum+=nums[i];

    if(currsum>maxsum)
    maxsum=currsum;
       
       if(currsum<0){
        currsum=0;
       }
   }

return maxsum;
}
