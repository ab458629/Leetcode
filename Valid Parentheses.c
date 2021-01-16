bool isValid(char* s){
    char* stack = calloc(strlen(s), sizeof(char));
    int flag = -1;
    
    while (*s){
        if (*s == ')'){
            if (flag >= 0 && stack[flag--] == '('){
            }
            else{return false;}
        }
            
        else if (*s == ']'){
            if (flag >= 0 && stack[flag--] == '['){
            }
            else{return false;}
        }
            
        else if (*s == '}'){
            if (flag >= 0 && stack[flag--] == '{'){
             }        
             else{return false;}    
        }
           
        else {
            stack[++flag] = *s;
            // printf("%d, %c", flag, stack[flag]);
        }
        s++;
    }
    
    return flag == -1;
}
