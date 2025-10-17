#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *left,*right;
}tree;

tree* createNode(int data){
    tree * t = (tree*)malloc(sizeof(tree));
    t->data = data;
    t->left = t->right = NULL;
    return t;
}
tree * insert(tree* root,int data){
    tree * t = createNode(data);
    if(root == NULL){
        root = t;
    }
    else if(data < root->data) root->left = insert(root->left,data);
    else root->right = insert(root->right,data);
    return root;
}

void preOrder(tree *root){
    if(root == NULL){
        return;
    }else{
        printf("%d ",root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}
void inOrder(tree *root){
    if(root == NULL){
        return;
    }else{
        inOrder(root->left);
        printf("%d ",root->data);
        inOrder(root->right);
    }
}
void postOrder(tree *root){
    if(root == NULL){
        return;
    }else{
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ",root->data);
    }
}

void main(){
    tree *root = NULL;
    root = insert(root, 10);
    root = insert(root, 20);
    root = insert(root, 30);
    root = insert(root, 40);
    root = insert(root, 50);
    root = insert(root, 60);
    root = insert(root, 70);
    root = insert(root, 80);
    root = insert(root, 90);
   printf("PreOrder Traversal: ");
   preOrder(root);
   printf("\nInOrder Traversal: ");
   inOrder(root);
   printf("\nPostOrder Traversal: ");
   postOrder(root);
}