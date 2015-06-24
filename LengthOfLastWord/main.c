int lengthOfLastWord(char* s) {
    char * p = s;
    int cur = 0;
    while (*p != '\0') {
        if (*p == ' ') {
            p++;
        } else {
            cur = 0;
            while (*p != '\0' && *p != ' ') {
                cur ++;
                p++;
            }
        }
    }
    return cur;
}
