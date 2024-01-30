#ifndef TREE_TREE_H
#define TREE_TREE_H

#include <malloc.h>
#include <stddef.h>
#include <stdio.h>

typedef struct treeNode{
    int key;
    int number;
    struct treeNode *leftChild;
    struct treeNode *rightChild;
}treeNode;

typedef treeNode *treeNodePtr;

void node_insert(treeNodePtr *, int );
void delete_node(treeNodePtr *, int);
void amount_of_one_sided(treeNodePtr, int *);

void my_order(treeNodePtr, int, int*);
void print_tree(treeNodePtr, int );


#endif //TREE_TREE_H


