#include <stdio.h>
#include <stdlib.h>

struct node{
    int key;
    struct node *left;
    struct node *right;
    int height;
    
};

int getH(struct node* n){
    if (n==NULL){
        return 0;
    }
    return n->height;
}

struct node* createNode(int key){
    struct node* node =( struct node*) malloc(sizeof(struct node));
    node->key = key;
    node->left = NULL;
    node->right= NULL;
    node->height = 1;
    return node;

}

int getBalanceFactor(struct node* n){
    if(n==NULL){
        return 0;
    }
    return getH(n->left) - getH(n->right);
}

struct node* rightRotate(struct node* y){
    struct node* x = y->left;
    struct node* terminal2 = x->right;
    x->right = y;
    y->left = terminal2;
    y->height = max(getH(y->right),getH(y->left))+1;
    x->height = max(getH(x->right),getH(x->left))+1;
    return x;


}
struct node* leftRotate(struct node* y){
    struct node* y= x->right;
    struct node* terminal2 = y->left;
    y->left = x;
    x->right = terminal2;
    y->height = max(getH(y->right),getH(y->left))+1;
    x->height = max(getH(x->right),getH(x->left))+1;
    return y;


}

struct node*insert(struct node* node, int key){
    if (node =NULL){
        return createNode(key);
    }
    if (key<node->key){
        node->left = insert(node->left,key);
    }
    else if (key>node->key){
        node->right = insert(node->right,key);
    }
    else{
        return node;
    }
    
}