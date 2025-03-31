// Implementaion of Binary Tree By Usin Linked List
#include<stdio.h>
#include<stdlib.h>
// Creating The Structure Of node
struct node{
    int data;
    struct node *left,*right;
};
struct node *create(){
    struct node *root=(struct node *)malloc(sizeof(struct node));
    int x;
    printf("Enter The Data(-1 For Empty Node):");
    scanf("%d",&x);
    root->data=x;
    if(x==-1){
        return 0;
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
    return 0;
}