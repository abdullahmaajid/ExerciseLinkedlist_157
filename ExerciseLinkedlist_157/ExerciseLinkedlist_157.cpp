#include <iostream>
#include <string>
using namespace std;
class Node {
public:
    int rollNumber;
    string name;
    Node* next;
};
class CircularLinkedList {
private:
    Node* LAST;
public:
    CircularLinkedList() {
        LAST = NULL;
    }
    void addNode();
    bool search(int rollno, Node* Maajid, Node** Abdullah);
    void traverse();
    bool listEmpty();
    bool delNode();
};
void CircularLinkedList::addNode() {

    int rollno;
    string na;
    cout << "\nEnter the rollnumber of the student: ";
    cin >> rollno;
    cout << "\nEnter the name of the student: ";
    cin >> na;
    Node* newNode = new Node();  
    newNode->rollNumber = rollno;
    newNode->name = na;
}
if (LAST == NULL || rollno <= LAST->rollNumber) {
    if (LAST != NULL && rollno == LAST->rollNumber) {
        cout << "\n NIM ALREADY EXIST" << endl;
        return;
    }
    newNode->next = LAST;
    if (LAST != NULL)
        LAST->next = newNode;
    newNode->next = NULL;
    LAST = newNode;
    return;
}

Node* Abdullah = LAST;
Node* Maajid = NULL;
while (Abdullah->next != NULL && Abdullah->next->rollNumber < rollno)
{
    Maajid = Abdullah;
    Abdullah = Abdullah->next;
}

if (Abdullah->next != NULL && rollno == Abdullah->next->rollNumber) {
    cout << "\nDuplicate roll numbers not allowed" << endl;
    return;
}
newNode->next = Abdullah->next;
if (Abdullah->next != NULL && rollno == Abdullah->next->rollNumber) {
    Abdullah->next = newNode;
}


bool CircularLinkedList::search(int rollno, Node** previous, Node** current) {
    Node** Maajid, Node** Abdullah) {
        Node**Maajid = LAST->next;
        Node**Abdullah = LAST->next;
        while (*Abdullah != LAST) {
            if (rollno == (*Abdullah)->rollNumber) {
                return true;
            } 
            **Maajid = *Abdullah;
            **Abdullah = (*Abdullah)->next;
        }
        if (rollno == LAST->rollNumber) {
            return true;
        }
        else {
            return false;
        }
    }
bool CircularLinkedList::listEmpty() {
    return LAST == NULL;
}
bool CircularLinkedList::delNode(int rollNo) { 
    Node*Maajid, *Abdullah;
    Maajid = Abdulah = NULL;
    if (search(rollNo, &Maajid, &Abdullah == false)
        return false;
    if (Abdullah->next != NULL)
        Abdullah->next-> = Maajid;
    else
        LAST = Abdullah->next;
    delete Abdullah;
    return true;

};

    void CircularLinkedList::traverse() {
        if (listEmpty()) {
            cout << "\nList is empty\n";
        }
        else {
            cout << "\nRecords in the list are:\n";
            Node* currentNode = LAST->next;
            while (currentNode != LAST) {
                cout << currentNode->rollNumber << " " << currentNode->name << endl;
                currentNode = currentNode->next;
            }
                cout << LAST->rollNumber << " " << LAST->name << endl;
        }
    }

    int main() {
        CircularLinkedList obj;
        while (true) {
            try {
                cout << "\nMenu" << endl;
                cout << "1. Add a record to the list" << endl;
                cout << "2. Delete a record from the list" << endl; cout << "3. View all the records in the list" << endl; cout << "4. Exit" << endl;
                cout << "\nEnter your choice (1-5): ";
                char ch;
                cin >> ch;
                switch (ch) {
                case '1': {
                    obj.addNode();
                }
                case '2': {
                    obj.delNode();
                }
                case '3': {
                    obj.traverse();
                    break; }
                case '4': {
                    return 0;
                }
                default: {
                    cout << "Invalid option" << endl;
                    break; }
                }
            }
            catch (exception& e) {
                cout << e.what() << endl;
            }
        }
        return 0;
    }