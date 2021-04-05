void moveZeroes(int* nums, int numsSize){
    for (int i = 0; i < numsSize; i++)
    {
        if (!nums[i])
        {
            for (int j = i + 1; j < numsSize; j++)
            {
                if (nums[j])
                {
                    int temp = nums[i];
                    nums[i] = nums[j];
                    nums[j] = temp;
                    //nums[j] = 0;
                    break;
                }   
            }   
        }      
    }  
}