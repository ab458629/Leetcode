bool isPalindrome(int x){
    if (x < 0)
        return false;
    if (x == 0)
        return true;
    
    char* arr = malloc(sizeof(char) * 10);
    int count = 0;
    while (x != 0){
        int temp = x % 10;
        arr[count] = temp;
        x /= 10;
        count++;
    }
    for (int i = 0; i < count/2; i++){
        if (arr[i] != arr[count-1-i])
            return false;
    }
    return true;
}
