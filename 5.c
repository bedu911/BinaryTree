// Implementaion of Binary Tree By Usin Linked List
#include<stdio.h>
#include<stdlib.h>
// Creating The Structure Of node
struct node{
    int data;
    struct node *left,*right;
};
// Inorder Traversal <LeftSubTree-Root-RightSubTree>
void inorders(struct node *root){
    if(root!=NULL){
        inorders(root->left);  //Recursive Function For Left SubTree
        printf("%d ",root->data);
        inorders(root->right);//Recursive Function For Right SubTree
    }
}
// Preorder Traversal <Root-LeftSubTree-RightSubTree>
void preorders(struct node *root){
    if(root!=NULL){
        printf("%d ",root->data);
        preorders(root->left);  //Recursive Function For Left SubTree
        preorders(root->right);//Recursive Function For Right SubTree
    }
}
// Postorder Traversal <LeftSubTree-RightSubTree-Root>
void postorders(struct node *root){
    if(root!=NULL){
        postorders(root->left);  //Recursive Function For Left SubTree
        postorders(root->right);//Recursive Function For Right SubTree
        printf("%d ",root->data);
    }
}
//Function To Create node As Per Requirement
struct node *newnode(int data){
    struct node *temp=(struct node *)malloc(sizeof(struct node));
    temp->data=data;
    temp->left=temp->right=NULL;
    return temp;
}
// Function To Find The Location Of Root In In-order
int findindex(int inorder[],int instart ,int inend,int key){
    for(int i=instart;i<=inend;i++){
        if(inorder[i]==key){
            return i;
        }
    }
    return -1;
}
//Function to Construct Tree From Given Pre and In order Traversal
struct node *construct(int inorder[],int preorder[],int instart,int inend,int *preindex){
    if(instart > inend ){ //Base Condition
        return NULL;
    }
    struct node *root=newnode(preorder[(*preindex)++]);
    if(instart==inend){
        return root;
    }
    int index=findindex(inorder,instart,inend,root->data);
    root->left=construct(inorder,preorder,instart,index-1,preindex);
    root->right=construct(inorder,preorder,index+1,inend,preindex);
    return root;
}
int main()
{
   int inorder[]={4,2,1,3};
   int preorder[]={1,2,4,3};
   int preindex=0;
   int size=sizeof(inorder)/sizeof(inorder[0]);
   struct node *root=construct(inorder,preorder,0,size-1,&preindex);
   printf("In-Order Traversal: ");
   inorders(root);
   printf("(Matched)");
   printf("\n");
   printf("Pre-order Traversal: ");
   preorders(root);
   printf("(Matched)");
   return 0;
}