int lengthOfLongestSubstring(char * s){
    int* ascii = malloc(sizeof(int) * 128); // ASCII code is 7 bits
    for (int i = 0; i < 128; i++){
        ascii[i] = -1;  // initialize
    }
    
    int subStringStart = 0, max = 0;
    for (int i = 0; i < strlen(s); i++){
        if (ascii[s[i]] >= subStringStart) { // 若重複，表示子字串的頭要改變
            subStringStart = ascii[s[i]] + 1;
            ascii[s[i]] = i;
        } 
        else {  // 不在此字串裡
            ascii[s[i]] = i;
            if ((i - subStringStart + 1) > max)
                max = i - subStringStart + 1;
        }
    }
    return max;
}
