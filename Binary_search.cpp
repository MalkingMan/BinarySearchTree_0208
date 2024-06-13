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
            ROOT = newNode; // Mark the new node as ROOT
            return; //Exit
        }

        if (element < parent->info) // If the value in the data field of the new node is less than that of the
        {
            parent->leftchild = newNode; // Make the left child of the parent poiint to the new node
        }

        else if (element > parent->info) // if th value in the data field of the new node is greater than that
		{
            parent->rightchild = newNode; // Make the right child of the parent point to the new node
        }

    }

    void search (string element, Node*& parent, Node*& currentNode)
    {
        //this function searches the currentNode of the specified Node as well as the curent Node of its parent
        currentNode = ROOT;
        parent = NULL;
        while ((currentNode != nullptr) && (currentNode->info != element))
        {
            parent = currentNode;
            if (element < currentNode-> info)
                currentNode = currentNode->leftchild;
            else
            	currentNode = currentNode->rightchild;

        }
    }

    void inorder(Node* ptr)
    {
        if (ROOT == nullptr)
        {
            cout << "Tree is empty" << endl;
            return;
        }
        if (ptr != NULL)
        {
            inorder(ptr->leftchild);
			cout << ptr->info << " ";
			inorder(ptr->rightchild);
        }
    
    }

    void preorder(Node* ptr)
    {
        if (ROOT == nullptr)
        {
            cout << "Tree is empty" << endl;
            return;
        }
        if (ptr != NULL)
        {
			cout << ptr->info << " ";
            inorder(ptr->leftchild);
			inorder(ptr->rightchild);
        }
    
    }

    void postorder(Node* ptr)
    {
        if (ROOT == nullptr)
        {
            cout << "Tree is empty" << endl;
            return;
        }
        if (ptr != NULL)
        {
            inorder(ptr->leftchild);
			inorder(ptr->rightchild);
			cout << ptr->info << " ";
        }
    
    }
   
    

};

int main()  
{
    Binarytree x;
    while (true)
    {
        cout << "\nMenu" << endl;
        cout << "1. Implement insert operation" << endl; 
        cout << "2. Perform inorder traversal" << endl; 
        cout << "3. Perform preorder tracersal" << endl; 
        cout << "4. Implement postorder operation" << endl; 
        cout << "5. Exit" << endl; 
        cout << "\nEnter yout choice (1-5): " ;

        char ch;
        cin >> ch;
        cout << endl;

        switch (ch)
        {
        case '1':
            {
                cout << "Enter a word";
            }
        case '2':
            {
                x.inorder(x.ROOT);
			    break;
		    }
        case '3':
            {
                x.preorder(x.ROOT);
                break;
            }
        case '4':
            {
                x.postorder(x.ROOT);
                break;
            }
        case '5':
        
        
        
            
            
        
        
        
    }
    
};