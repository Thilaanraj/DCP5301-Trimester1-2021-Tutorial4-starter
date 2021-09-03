//Thilaanraj Ganes Raj (1191202463)
//Preoder : A, B, D, E, H, I, C, F, J, K, L, G
//Inorder : D, B, H, E, I, A, J, F, L, K, C, G
//Postoder: D, H, E, I, B, J, L, K, F, G, C, A


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
	
	growTree();
	cout<<"\nPreorder traversal:\t";  preorder(root);
	cout<<"\nPostorder traversal:\t"; postorder(root);
	cout<<"\nInorder traversal:\t"; inorder(root);
	
	

	//Call function calNodes to calculate the total no. of tree’s nodes
	//Print the total no. of tree’s nodes
	
	return 0;
}

void growTree(void){
	
	root = initBinTreeNode('A');
	root -> left = initBinTreeNode('B');
	root -> right = initBinTreeNode('C');
	parent1 = root -> left;
	parent1 -> left = initBinTreeNode('D');
	parent1 -> right = initBinTreeNode('E');
	parent2 = parent1 -> right;
	parent2 -> left = initBinTreeNode('H');
	parent2 -> right = initBinTreeNode('I');
	
	parent1 = root ->right;
	parent1 -> left = initBinTreeNode('F');
	parent1 -> right = initBinTreeNode('G');
	parent2 = parent1 -> left
	parent2 -> left = initBinTreeNode('J');
	parent2 -> right = initBinTreeNode('K');
	parent3 = parent2 -> right;
	parent3 -> right = initBinTreeNode('L');
		
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
void inorder(BinTreeNode*node){
	if(node)
	{
		inorder(node -> left);
		cout<<node->data<<'';
		inorder(node -> right);
	}
}
