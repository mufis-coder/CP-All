#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

typedef struct bstnode_t {
    long long int key;
	unsigned long long int basis;
    struct bstnode_t 
        *left, *right;
} BSTNode;

typedef struct bst_t {
    BSTNode *_root;
    unsigned long long int _size;
} BST;



BSTNode* __bst__createNode(long long int value) {
    BSTNode *newNode = (BSTNode*) malloc(sizeof(BSTNode));
    newNode->key = value;
    newNode->left = newNode->right = NULL;
    newNode->basis = 1;
    return newNode;
}

BSTNode* __bst__insert(BSTNode *root, long long int value) {
    if (root == NULL)  {
    	return __bst__createNode(value);
	}
        
	
	else if (value > root->key) {
    	root->basis++;
    	root->right = __bst__insert(root->right, value);
	}
	
    else if (value < root->key) {
    	root->basis++;
    	root->left = __bst__insert(root->left, value);
    	
	}
                
    
    return root;
}

BSTNode* __bst__search(BSTNode *root, long long int value, long long int *out) {
	long long int bantu=0;
    while (root != NULL) {
        if (value < root->key) {
        	root = root->left;
        	
		}
            
        else if (value > root->key) {
        	if (root->right != NULL) {
        		bantu = bantu + root->basis - root->right->basis;
			}
        	
        	root = root->right;
		}
            
        else {
//        	printf("asdsadsa");
        	if (root->right != NULL) {
        		bantu = bantu + root->basis - root->right->basis;
			}
			else  {
				
        		bantu = bantu + root->basis;	
			}
			
        		
        	*out = bantu;		//Ingat ingat 
        	return root;
		}
            
    }
    return root;
}



void __bst__inorder(BSTNode *root) {
    if (root) {
        __bst__inorder(root->left);
        printf("%lld ", root->key);
        __bst__inorder(root->right);
    }
}


void bst_init(BST *bst) {
    bst->_root = NULL;
    bst->_size = 0u;
}

bool bst_isEmpty(BST *bst) {
    return bst->_root == NULL;
}

bool bst_find(BST *bst, long long int value, long long int *mrene) {
    BSTNode *temp = __bst__search(bst->_root, value, mrene);
    if (temp == NULL)
        return false;
    
    if (temp->key == value) {
//    	printf("asdsa");
    	return true;
	}
    	
	else
        return false;
}

void bst_insert(BST *bst, long long int value) {
        bst->_root = __bst__insert(bst->_root, value);
        bst->_size++;
}


void bst_inorder(BST *bst) {
    __bst__inorder(bst->_root);
}

int main()
{
    BST set;
    bst_init(&set);

	long long int masuk, perintah, temp;
	long long int angka;
	scanf("%lld", &masuk);
	while (masuk--) {
		scanf("%d %lld", &perintah, &angka);
		if(perintah==1 && !(bst_find(&set, angka, &temp))) {
			bst_insert(&set, angka);
		}
		else if(perintah==2) {
			if (!(bst_find(&set, angka, &temp))) 
				printf("Data tidak ada\n");
			else {
				printf("%lld\n", set._size - temp+1);
			}
		}
	}

    return 0;
}
