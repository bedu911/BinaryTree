// Implementaion of Binary Tree By Usin Linked List
#include<stdio.h>
#include<stdlib.h>
// Creating The Structure Of node
struct node{
    int data;
    struct node *left,*right;
};
// Function To Create Each Node of Tree
struct node *create(int data){
    struct node *temp=(struct node *)malloc(sizeof(struct node));
    temp->data=data;
    temp->left=temp->right=NULL;
    return temp;
}
int main()
{
    //Given Binary Tree
    //     1
    //    / \
    //   2   3
    //  /  \/  \
    // 4  5 6  7
    // Create Each Node And Insert Data In it
    struct node *p1=create(1);
    struct node *p2=create(2);
    struct node *p3=create(3);
    struct node *p4=create(4);
    struct node *p5=create(5);
    struct node *p6=create(6);
    struct node *p7=create(7);
    // Link The Nodes
    p1->left=p2;
    p1->right=p3;
    p2->left=p4;
    p2->right=p5;
    p3->left=p6;
    p3->right=p7;
  return 0;
}