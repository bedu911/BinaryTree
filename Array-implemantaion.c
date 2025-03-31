// Implementaion of Binary Tree By Usin Array
#include<stdio.h>
// Function To Display Left Child of Each Node
void leftchild(int tree[],int size){
    for(int i=0;i<size;i++){
        if(((i*2)+1) >= size){
            printf("%d Has No Left Child\n",tree[i]);
        }else{
            printf("Left Child of %d is %d \n",tree[i],tree[((i*2)+1)]);
        }
    }
}
// Function To Display Left Child of Each Node
void rightchild(int tree[],int size){
    for(int i=0;i<size;i++){
        if(((i*2)+2) >= size){
            printf("%d Has No Right Child\n",tree[i]);
        }else{
            printf("Right Child of %d is %d \n",tree[i],tree[((i*2)+2)]);
        }
    }
}
// Function To Display Parent of Each Node
void parent(int tree[],int size){
    printf("%d Is Root Node\n",tree[0]);
    for(int i=1;i<size;i++){
        printf("The Parent of %d is %d \n",tree[i],tree[((i-1)/2)]);
    }
}
int main()
{
    //Given Binary Tree
    //     1
    //    / \
    //   2   3
    //  /  \/  \
    // 4  5 6  7
  int tree[]={1,2,3,4,5,6,7};
  int size=sizeof(tree)/sizeof(tree[0]);
  printf("Displaying Left Child Of All The Nodes In The Given Tree\n");
  leftchild(tree,size);
  printf("Displaying Right Child Of All The Nodes In The Given Tree\n");
  rightchild(tree,size);
  printf("Displaying Parent Of All The Nodes In The Given Tree\n");
  parent(tree,size);
  return 0;
}