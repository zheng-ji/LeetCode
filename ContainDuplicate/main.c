bool containsDuplicate(int* nums, int numsSize) {
    bool flag = false;
    int i,j;
    for (i = 0; i < numsSize; i++) {
        for (j = i+1; j < numsSize; j++) {
            if (*(nums+i) == *(nums+j)) {
                flag = true;
                return flag;
            }
        }
    }
    return flag;
}
