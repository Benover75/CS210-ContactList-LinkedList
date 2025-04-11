#ifndef CONTACTNODE_H
#define CONTACTNODE_H

#include <string>
using namespace std;

class ContactNode {
public:
    // Constructor that initializes the contact name and phone number.
    ContactNode(string name, string phone);

    // Accessors.
    string GetName();
    string GetPhoneNumber();
    ContactNode* GetNext();

    // Inserts newNode immediately after the current node.
    void InsertAfter(ContactNode* newNode);

    // Prints the contact's details.
    void PrintContactNode();

private:
    string contactName;            // Contact's name.
    string contactPhoneNumber;     // Contact's phone number.
    ContactNode* nextNodePtr;      // Pointer to the next contact node.
};

#endif // CONTACTNODE_H
