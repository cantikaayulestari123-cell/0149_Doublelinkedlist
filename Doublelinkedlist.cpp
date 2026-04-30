#include <iostream>
using namespace std;

class Node 
{
public:
    int noMhs;
    Node *next;
    Node *prev;
};

class DoubleLinkedList 
{
private:
    Node *START;


public:
    DoubleLinkedList()
    {
        START = NULL;
    }

    void addNode()
    {
        int nim;
        cout << "\nEnter the roll number of student: ";
        cin >> nim;
    
    //Step 1: Allocate the memory for new node
    Node* newnode = new Node();
    //Step 2: Assign the value to data fields
    newnode->noMhs = nim;

    //Step 3: Insert at beginning if list is empty or nim is smallest
    if (START == NULL || nim <= START->noMhs) 
    {
       if (START  != NULL && nim == START->noMhs)
       {
            cout << "\nDuplicate number not allowed" << endl;
            return;
       }  
}
    
