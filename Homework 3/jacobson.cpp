//
// Created by Kyle Jacobson on 2/14/2019.
//

#include <iostream>
#include <queue>
#include "bst.h"
using namespace std;

BinarySearchTree::BinarySearchTree(){
    root = nullptr;
};

// Insert an element into BST.
void BinarySearchTree::insert(const int &element, BinarySearchTree::BinaryNode *& node) {
    if (node == nullptr){
        node = new BinaryNode;
        node->data = element;
        node->right = nullptr;
        node->left = nullptr;
    }

    else if(element < node->data)
        insert(element, node->left);

    else if(element > node->data)
        insert(element, node->right);
}

// Prints the nodes in level-order.
void BinarySearchTree::levelorder(BinarySearchTree::BinaryNode *)
{
    if(root == nullptr){
        return;
    }

    queue<BinaryNode*> Q;
    Q.push(root);
    while(!Q.empty())
    {
        BinaryNode* current = Q.front();
        cout << current->data << " ";
        if(current->left != nullptr)
            Q.push(current->left);
        if(current->right != nullptr)
            Q.push(current->right);
        Q.pop();
    }
}

// Delete the entire BST.
void BinarySearchTree::makeEmpty(BinarySearchTree::BinaryNode *& node) {
    if(node != nullptr)
    {
        makeEmpty(node->left);
        makeEmpty(node->right);
        delete node;
    }
    node = nullptr;

    if (root == nullptr)
    {
        printf("\nThe Tree is Empty!");
    }
}
