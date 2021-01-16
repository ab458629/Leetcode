char * longestCommonPrefix(char ** strs, int strsSize){
    if (strs == NULL || strsSize==0){
        char* result = calloc(1, sizeof(char));
        return result;
    }
    
    int index = 0, i = 0;
    char check = strs[0][index];
    
    while (check){
        for (i = 0; i < strsSize; i++){
            if (strs[i][index] != check)
                break;
        }
        if(i < strsSize)
            break;
        check = strs[0][++index];
    }
    
    char* result = strs[0];
    result[index] = '\0';
    
    return result;
}  
