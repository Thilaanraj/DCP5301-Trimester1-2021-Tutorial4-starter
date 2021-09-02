#include <iostream>
using namespace std;

struct BinTreeNode{
	char data;
	BinTreeNode *left;
	BinTreeNode *right;
};
BinTreeNode *initBinTreeNode(char data);
void growTree(void);
void preorder(BinTreeNode *node);
void postorder(BinTreeNode *node);
void inorder(BinTreeNode *node);
void calNodes(BinTreeNode *node);
BinTreeNode *root, *parent1, *parent2, *parent3;

int main(){
	//Call function growTree to grow the tree above
	
	cout<<"\nPreorder traversal:\t";  preorder(root);
	cout<<"\nPostorder traversal:\t"; postorder(root);
	cout<<"\nInorder traversal:\t";
	//Call function inorder to traverse and print the data of the tree’s nodes

	//Call function calNodes to calculate the total no. of tree’s nodes
	//Print the total no. of tree’s nodes
	
	return 0;
}

BinTreeNode *initBinTreeNode(char data){
	BinTreeNode *temp;
	temp = new BinTreeNode;
	temp->data  = data;
	temp->left  = NULL;
	temp->right = NULL;
	return temp;
}
void preorder(BinTreeNode *node){
	if(node){	
		cout<<node->data<<' ';
		preorder(node->left);
		preorder(node->right);
	}
}
void postorder(struct BinTreeNode *node){
	if(node){
		postorder(node->left);
		postorder(node->right);
		cout<<node->data<<' ';
	}
}
