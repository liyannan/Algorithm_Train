void rotateArr(int* nums, int size){
    int temp;
    for (int i = 0, j = size - 1; i < j; i++, j--)
    {
        temp =  nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }
}

void rotate(int* nums, int numsSize, int k){
    if (k %= numsSize)
    {
        rotateArr(nums, numsSize - k);
        rotateArr(nums + numsSize - k, k);
        rotateArr(nums, numsSize);
    }
}