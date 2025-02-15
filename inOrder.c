#include<stdio.h>
#include<malloc.h>

struct node{
	int data;
	struct node*left;
	struct node*right;
};

struct node*createNode(int data){
	struct node*n; //creating a node pointer
	n = (struct node*)malloc(sizeof(struct node)); //Allocating a memory in heap
	n->data=data; //setting data
	n->left=NULL;  //setting left and right children to null
	n->right=NULL;  //setting left and right children to null
	return n;
}

void preOrder(struct node*root){
	if(root!=NULL){
		printf("%d",root->data);
		preOrder(root->left);
		preOrder(root->right);
	}
}

void postOrder(struct node*root){
	if(root!=NULL){
		postOrder(root->left);
		postOrder(root->right);
		printf("%d",root->data);

	}
}

void inOrder(struct node*root){
	if(root!=NULL){
		inOrder(root->left);
		printf("%d",root->data);
		inOrder(root->right);
	}
}


int main(){
	//constructing the root node - using function
	struct node*p = createNode(1);
	struct node*p1 = createNode(2);
	struct node*p2 = createNode(3);
	
	// Finally tree will look like this
	//          1
	//        /   \
	//       2     3
	
	//Linking the root node with left and right children
	p->left = p1;
	p->right = p2;
	
	//preOrder(p);
	//printf("\n");
	//postOrder(p);
	//printf("\n");
	inOrder(p);
	return 0;		
	
}









