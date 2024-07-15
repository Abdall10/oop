#include <iostream>
using namespace std;

// Define a class Node representing an element of the linked list
class Node {
    public:              // Access specifier indicating members are accessible from outside the class
    int Value;           // Data stored in the node
    Node* Next;          // Pointer to the next node in the list                   
};

// Function to print all values in the linked list starting from node n
void printList(Node* n){
    while(n!=NULL){                  // Loop through the list until reaching the end (NULL)
        cout << n->Value <<endl;     // Print the value of the current node
        n = n->Next;                  // Move to the next node
    }
}

// Function to insert a node at the front of the list
void insertAtTheFront(Node**head, int newValue) {

    // 1- Prepare  a newNode
    Node* newNode = new Node(); // Allocate memory for the new node
    newNode->Value = newValue;  // Set the value of the new node

    // 2- Put it in front of current head
    newNode->Next = *head; 
    // 3- Mohe head of the list to point to the newNode
    *head = newNode;
}

void insertAtTheEnd(Node**head, int newValue){
    //1- Prepare a newNode
    Node* newNode = new Node(); // Allocate memory for the new node
    newNode->Value = newValue;  // Set the value of the new node
    newNode->Next = NULL;       // Set the next pointer to NULL (end of the list)

    //2- If Linked list is empty, newNode will be a head node
    if(*head == NULL){
        *head = newNode;
        return;
    }
    //3- Find the last node
    Node*last=*head;
    while (last->Next!=NULL)
    {
       last= last->Next;
    }
    
    //4- Insert newNode after last node (at the end)
    last->Next = newNode;

}

void insertAfter(Node*previous,int newValue){
    //1- Check if previous node is NULL
    if(previous == NULL){
        cout << "Previous can not be NULL"<<endl;
        return;
    }
    //2- Prepare a newNode after previous
    Node* newNode = new Node(); // Allocate memory for the new node
    newNode->Value = newValue;  // Set the value of the new node
    //3- Insert newNode after previous
    newNode->Next = previous->Next;
    previous->Next = newNode;
}
int main()
{
    // Create three new nodes
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    // Initialize the values and the links between the nodes
    head->Value = 1;              // Set the value of the first node
    head->Next = second;         // Link the first node to the second node
    second->Value = 2;           // Set the value of the second node
    second->Next = third;        // Link the second node to the third node
    third->Value = 3;            // Set the value of the third node
    third->Next = NULL;          // The third node is the last node, so its next pointer is NULL

    insertAfter(head, -1);
    insertAfter(second, -1);

    

    printList(head); // Print the entire list
    return 0;
}