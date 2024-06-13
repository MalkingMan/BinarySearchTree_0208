#include <iostream>
#include <string>
using namespace std;

class Node
{
    public:
    string info;
	Node* leftchild;
	Node* rightchild;

    // Constructor for the node class
    Node(string i, Node* l, Node* r)
    {
        info = i;
        leftchild = l;
        rightchild = r;
    }
};

class Binarytree 
{
public:
    Node * ROOT;

    Binarytree()
    {
        ROOT = nullptr; // Initializing ROOT to null
    }

    void insert(string element) // Insert a node in the binary search tree
    {
        Node* newNode = new Node(element, nullptr, nullptr); // Allocate memory fpr the new Node
        newNode->info = element; // Assign value to the  data field of the new node
        newNode->leftchild = nullptr; // Make the left child of the new node point to NULL
        newNode->rightchild = nullptr; // Make the right child of the new node point to NULL

        Node* parent = nullptr;
        Node* currentNode = nullptr;
        search(element, parent, currentNode); // Locate the node which will be the parent of the node to be insert

        if (parent == nullptr) // If the parent is Null (Tree is empty)
        {
            
        }



    }
};