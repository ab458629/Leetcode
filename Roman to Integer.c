int toNumber(char ch){
    switch (ch){
        case 'I':
            return 1;
        case 'V':
            return 5;
        case 'X':
            return 10;
        case 'L':
            return 50;
        case 'C':
            return 100;
        case 'D':
            return 500;
        case 'M':
            return 1000;
    }
    return 0;
}

int romanToInt(char * s){
    int result = 0;
    int i = 0;
    while (s[i] != '\0'){
        int left = toNumber(s[i]); 
        int right = toNumber(s[i+1]);
        if (left >= right){
            result += left;
            i++;
        }
        else{
            result = result + right - left;
            i = i+2;
        }
    }
    return result;
}
