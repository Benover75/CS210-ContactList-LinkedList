#include <iostream>
#include <string>
#include "ContactNode.h"
using namespace std;

int main() {
    // Pointers for the linked list nodes.
    ContactNode* head = nullptr;
    ContactNode* second = nullptr;
    ContactNode* third = nullptr;
    string name, phone;
    
    // Read and create the first contact node.
    getline(cin, name);
    getline(cin, phone);
    head = new ContactNode(name, phone);
    
    // Read and create the second contact node.
    getline(cin, name);
    getline(cin, phone);
    second = new ContactNode(name, phone);
    
    // Read and create the third contact node.
    getline(cin, name);
    getline(cin, phone);
    third = new ContactNode(name, phone);
    
    // Build the linked list: head -> second -> third.
    head->InsertAfter(second);
    second->InsertAfter(third);
    
    // Output individual contacts.
    cout << "Person 1: " << head->GetName() << ", " << head->GetPhoneNumber() << endl;
    cout << "Person 2: " << second->GetName() << ", " << second->GetPhoneNumber() << endl;
    cout << "Person 3: " << third->GetName() << ", " << third->GetPhoneNumber() << endl;
    
    // Output the complete contact list using a loop.
    cout << "\nCONTACT LIST" << endl;
    ContactNode* current = head;
    while (current != nullptr) {
        current->PrintContactNode();
        cout << endl;
        current = current->GetNext();
    }
    
    // Free dynamically allocated memory.
    delete head;
    delete second;
    delete third;
    
    return 0;
}
