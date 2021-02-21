/**
 * Definition for a Node.
 * struct Node {
 *     int val;
 *     struct Node *left;
 *     struct Node *right;
 *     struct Node *next;
 * };
 */

void connectRecursive(struct Node* root){
    if (root == NULL)
        return;
    if (root->left)
        root->left->next = root->right;
    if (root->right)
        root->right->next = root->next ? root->next->left : NULL;
                
    connectRecursive(root->left);
    connectRecursive(root->right);  
}

struct Node* connect(struct Node* root) {
	if (root == NULL)
        return NULL;
    root->next = NULL;
    connectRecursive(root);
    return root;
}

