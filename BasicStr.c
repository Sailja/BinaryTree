#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*left;
	struct node*right;
};
struct node * newnode(int data)
{
	struct node* newnode=(node *)malloc(sizeof(node));
	newnode->data=data;
	newnode->right=NULL;
	newnode->left=NULL;
	return newnode;
}
int main()
{
	struct node*root=newnode(1);
	root->left=newnode(2);
	root->right=newnode(3);
	root->left->left=newnode(4);
	return 0;
}

