#include <iostream>
using namespace std;
struct Node {
    int info;
    struct Node* Lchild;
    struct Node* Rchild;
};
struct Node* BST(struct Node* tree, int value) {
    if (tree == NULL) {
        struct Node* p = (struct Node*)malloc(sizeof(struct Node));
        if (p == NULL) {
            cout << "Memory allocation failed!" << endl;
            return NULL;
        }
        p->info = value;
        p->Lchild = p->Rchild = NULL; 
        return p;
    }
    if (value < tree->info) {
        tree->Lchild = BST(tree->Lchild, value);  
    }
    else if (value > tree->info) {
        tree->Rchild = BST(tree->Rchild, value); 
    }

    return tree;
}
void print(struct Node* tree){
    if(tree==NULL){
        return ;
    }
    else{
        cout<<tree->info<<"\t";
        print(tree->Lchild);
        print(tree->Rchild);
    }
}
int main() {
    struct Node* tree = NULL;
    tree = BST(tree, 10);
    tree = BST(tree, 5);
    tree = BST(tree, 30);
    tree = BST(tree, 15);
    tree = BST(tree, 20);
    tree = BST(tree, 70);
    tree = BST(tree, 85);
    tree = BST(tree, 43);
    tree = BST(tree, 44);
    tree = BST(tree, 100);
    cout << "Inorder Traversal: ";
    print(tree);
    cout << endl;
    return 0;
}
