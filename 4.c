// Implementaion of Binary Tree By Usin Linked List
#include<stdio.h>
#include<stdlib.h>
// Creating The Structure Of node
struct node{
    int data;
    struct node *left,*right;
};
// Inorder Traversal <LeftSubTree-Root-RightSubTree>
void inorder(struct node *root){
    if(root!=NULL){
        inorder(root->left);  //Recursive Function For Left SubTree
        printf("%d ",root->data);
        inorder(root->right);//Recursive Function For Right SubTree
    }
}
// Preorder Traversal <Root-LeftSubTree-RightSubTree>
void preorder(struct node *root){
    if(root!=NULL){
        printf("%d ",root->data);
        preorder(root->left);  //Recursive Function For Left SubTree
        preorder(root->right);//Recursive Function For Right SubTree
    }
}
// Postorder Traversal <LeftSubTree-RightSubTree-Root>
void postorder(struct node *root){
    if(root!=NULL){
        postorder(root->left);  //Recursive Function For Left SubTree
        postorder(root->right);//Recursive Function For Right SubTree
        printf("%d ",root->data);
    }
}
struct node *create(){
    struct node *root=(struct node *)malloc(sizeof(struct node));
    int x;
    printf("Enter The Data(-1 For Empty Node):");
    scanf("%d",&x);
    root->data=x;
    if(x==-1){
        return NULL;
    }
    printf("Enter the Left Child of %d \n",x);
    root->left=create(); //Recursive Function Call
    printf("Enter the Right Child of %d \n",x);
    root->right=create(); //Recursive Function Call
    return root;
}
int main()
{
    struct node *root=NULL;
    root=create();
    printf("In-order Traversal:");
    inorder(root);
    printf("\n");
     printf("Pre-order Traversal:");
    preorder(root);
    printf("\n");
    printf("Post-order Traversal:");
    postorder(root);
    printf("\n");
    return 0;
}