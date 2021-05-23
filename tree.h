#include <iostream>

struct tnode
{
  int field;           
  struct tnode *left;  
  struct tnode *right;
};

void treeprint(tnode *tree)
{
  if (tree!=NULL)
  { 
	std :: cout << tree->field << "\n";
	treeprint(tree->left); 
	treeprint(tree->right); 
  }
}

struct tnode * addnode(int x, tnode *tree)
{
  if (tree == NULL)
  { 
	tree = new tnode; 
	tree->field = x;   
	tree->left =  NULL;
	tree->right = NULL; 
  }else  if (x < tree->field)   
	tree->left = addnode(x,tree->left);
  else   
	tree->right = addnode(x,tree->right);
  return (tree);
}

