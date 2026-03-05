void moveZeroes(int* nums, int numsSize) {
    int* result=(int*)malloc(numsSize*sizeof(int));
    int j=numsSize-1;
    for (int i=0;i<numsSize;i++){
        if(nums[i]==0)
            result[j--]=nums[i];
    }
    for (int i=numsSize-1;i>=0;i--){
        if(nums[i]!=0)
            result[j--]=nums[i];
    }
    for(int i=0;i<numsSize;i++){
        nums[i]=result[i];
    }
}