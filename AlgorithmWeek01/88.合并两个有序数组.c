void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
    if (nums1Size == 0)
    {
        for (int i = 0; i < n; i++)
        {
            nums1[i] = nums2[i];
        }
        //nums1 = nums2;
        return;
    }
    else if (nums2Size == 0)
    {
        return;
    }
    int tempN = n;
    for (int i = 0, j = 0; i < m; i++)
    {
        if (nums1[i] > nums2[j])
        {
            for (int k = m; k > i; k--)
            {
                nums1[k] = nums1[k - 1];
            }
            nums1[i] = nums2[j++];
            m++;
            n--;
        }
    }
    if (n)
    {
        for (int i = 0; i < n; i++)
        {
            nums1[m++] = nums2[tempN - n + i];
        } 
    }
}