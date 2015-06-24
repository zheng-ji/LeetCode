bool containsNearbyDuplicate(int* nums, int numsSize, int k) {
    int i,j;
    bool flag = false;
    for (i = 0; i < numsSize; i++) {
        for (j = i+1; j < numsSize; j++) {
            if (*(nums+i) == *(nums+j) && j - i <= k) {
                flag = true;
                return flag;
            }
        }
    }
    return flag;
}
