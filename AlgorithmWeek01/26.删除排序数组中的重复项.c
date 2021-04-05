int removeDuplicates(int *nums, int numsSize)
{
    if (numsSize == 0)
        return numsSize;
    int i = 0;
    for (int j = 1; j < numsSize; j++)
    {
        if (nums[i] != nums[j])
        {
            nums[++i] = nums[j];
        }
    }
    return i + 1;
}
//AddressSanitizer: heap-buffer-overflow
//原因：边界情况未考虑全导致报错
//细节：输入数组为空时返回的数组大小却不是0，导致在输出数组时出现访问越界的情况，对于报错开始没有头绪，因为只局限于自己所写代码之中，leetcode提供了输入输出部分导致没有发现代码可能是在提供好的输出时出现访问越界
//教训：调试代码要跟踪代码的全过程 特别是在这种只实现算法部分的OJ