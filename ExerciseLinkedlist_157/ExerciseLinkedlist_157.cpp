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
    bool search(int rollno, Node** previous, Node** current);
    bool listEmpty();
    bool delNode();
    void traverse();
};
void CircularLinkedList::addNode() { //write your answer here
    int nim;
    string nm;
    cout << "\n Enter the rollnumber of the student: ";
    cin >> nim;
    cout << "\nEnter the name of the student: ";
    cin >> nm;
    Node* newNode = new Node();
    newNode->rollNumber = nim;
    newNode->name = nm;

}
bool CircularLinkedList::search(int rollno, Node** previous, Node** current) {
    *previous = LAST->next;
    *current = LAST->next;
    while (*current != LAST) {
        if (rollno == (*current)->rollNumber) {
            return true;
        }
        *previous = *current;
        *current = (*current)->next;
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
bool CircularLinkedList::delNode() { //write your answer here }




    void CircularLinkedList::traverse() {
        if (listEmpty()) {
            cout << "\nList is empty\n";
        }
        else {
            cout << "\nRecords in the list are:\n";
            Node* currentNode = LAST->next;
            while (currentNode != LAST) {
                cout << currentNode->rollNumber << "
                    currentNode = currentNode->next;
            }
            " << currentNode->name << endl;
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
                }
                case '2': {
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