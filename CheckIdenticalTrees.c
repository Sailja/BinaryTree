#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node * left;
	struct node * right;
};
struct node * newNode( int data)
{
	struct node * node=(struct node *)malloc(sizeof(node));
	node->data=data;
	node->left=NULL;
	node->right=NULL;
	return node;
}
bool identicalTrees(struct node* root1, struct node* root2)
{
	if(root1==NULL&&root2==NULL)
		return true;
	
	else
	{
		if(root1==NULL)
			return false;
		if(root2==NULL)
			return false;
		if(root1->data==root2->data)
		{
			if(identicalTrees(root1->left, root2->left)&&identicalTrees(root1->right,root2->right))
				return true;
			else
				return false;		
		}
		else
			return false;
	}
}
int main()
{
    struct node *root1 = newNode(1);
    struct node *root2 = newNode(1);
    root1->left = newNode(2);
    root1->right = newNode(3);
    //root1->left->left  = newNode(9);
    //root1->left->right = newNode(5); 
 
    root2->left = newNode(2);
    root2->right = newNode(3);
    root2->left->left = newNode(4);
    root2->left->right = newNode(5); 
 
    if(identicalTrees(root1, root2))
        printf("Both tree are identical.");
    else
        printf("Trees are not identical.");
 
    getchar();
  return 0;
}
