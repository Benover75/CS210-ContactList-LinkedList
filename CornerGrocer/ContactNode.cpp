#include "ContactNode.h"
#include <iostream>
using namespace std;

// Constructor: Initializes contact details and sets next pointer to nullptr.
ContactNode::ContactNode(string name, string phone) {
    contactName = name;
    contactPhoneNumber = phone;
    nextNodePtr = nullptr;
}

// Returns the contact's name.
string ContactNode::GetName() {
    return contactName;
}

// Returns the contact's phone number.
string ContactNode::GetPhoneNumber() {
    return contactPhoneNumber;
}

// Returns the pointer to the next node.
ContactNode* ContactNode::GetNext() {
    return nextNodePtr;
}

// Inserts a new node immediately after the current node.
void ContactNode::InsertAfter(ContactNode* newNode) {
    ContactNode* temp = nextNodePtr;  // Save current next node.
    nextNodePtr = newNode;            // Link new node after current.
    newNode->nextNodePtr = temp;      // Link new node to the saved node.
}

// Prints the contact's information.
void ContactNode::PrintContactNode() {
    cout << "Name: " << contactName << endl;
    cout << "Phone number: " << contactPhoneNumber << endl;
}
