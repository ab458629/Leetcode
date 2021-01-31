int strStr(char * haystack, char * needle){
    int hay_len = strlen(haystack);
    int nee_len = strlen(needle);
    if ((hay_len == 0 && nee_len == 0) || nee_len == 0 || haystack == needle)
        return 0;
    
    for (int i = 0; i <= hay_len-nee_len; i++){
        if (haystack[i] == needle[0])
            if (strncmp(haystack+i, needle, nee_len) == 0)
                return i;
    }
    
    return -1;
}
