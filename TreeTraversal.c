#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*left;
	struct node * right;
};
struct node* newNode(int data)
{
	struct node *node=(struct node*)malloc(sizeof(node));
	node->data=data;
	node->left=NULL;
	node->right=NULL;
	return node;
}
void printPreorder(struct node * root)
{
	if(root==NULL)
		return;
	printf(" %d ",root->data);
	printPreorder(root->left);
	printPreorder(root->right);
}
void printInorder(struct node*root)
{
	if(root==NULL)
		return;
	printInorder(root->left);
	printf(" %d ",root->data);	
	printInorder(root->right);
}
void printPostOrder(struct node* root)
{
	if(root==NULL)
		return;
	printPostOrder(root->left);		
	printPostOrder(root->right);
	printf(" %d ",root->data);
}

/* Driver program to test above functions*/
int main()
{
     struct node *root  = newNode(1);
     root->left             = newNode(2);
     root->right           = newNode(3);
     root->left->left     = newNode(4);
     root->left->right   = newNode(5); 
 
     printf("\n Preorder traversal of binary tree is \n");
     printPreorder(root);
 
     printf("\n Inorder traversal of binary tree is \n");
     printInorder(root);  
 
     printf("\n Postorder traversal of binary tree is \n");
     printPostOrder(root);
 
     getchar();
     return 0;
}
