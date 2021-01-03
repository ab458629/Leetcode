/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

typedef struct Node {
    int index;
    int value;
} Node;

int compare (Node* a, Node* b){
    return (a->value > b->value ? 1 : -1);
}

int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int* result = malloc(sizeof(int) * 2);
    Node* nodes = malloc(sizeof(Node) * numsSize);
    for (int i = 0; i < numsSize; i++){
        nodes[i].index = i;
        nodes[i].value = nums[i];
    }
    qsort (nodes, numsSize, sizeof(Node), compare);
    int begin = 0;
    int end = numsSize - 1;
    while (begin < end){
        if ((nodes[begin].value + nodes[end].value) == target){
            result[0] = nodes[begin].index;
            result[1] = nodes[end].index;
            free(nodes);
            return result;
        }
        else if ((nodes[begin].value + nodes[end].value) > target)
            end--;
        else
            begin++; 
    }
    free(nodes);
    return result;
}
