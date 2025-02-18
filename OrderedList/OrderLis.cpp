// First order list test

#include <iostream>
using namespace std;
// We use an empty class list in order to take in a node list
class Node {
    private:
        int data;
        Node *next;
    
    public: 
        Node(int initdata) {
        data = initdata;// The Nodes data.
        next = NULL; // Note from chapter nect will become a pointer to another Node Object.
    }

    int getData() {
        return data; //this returns the data to the node
    }

    Node *getNext() {
        return next; //returns the next node in linked list

    }

    void setData(int newData) {
        data = newData; //changes the data of the node

    }

    void setNext(Node *newnext) {
        next = newnext; // this assigns the next item in the linked list

    }
};

class OrderedList {
    public:
            Node *head; //this represents the first Node of the linked list

        OrderedList() {
            head = NULL;
        }

        bool search(int item) {
            Node *current = head;
            bool found = false;
            bool stop = false;
            while (current != NULL && !found && !stop){
                //iterates through the entire list till the item is found 
                if (current-> getData() == item) {
                    found = true;
                } else {
                    if (current->getData() > item) {
                        stop = true;
                    } else {
                        current = current->getNext();
                    }
                }
            }

            return found;
        }

        void add(int item) {
            if (head == NULL) {
                Node *newNode = new Node(item);
                head = newNode;
            } else {
                Node *current = head;
                Node *previous = NULL;
                bool stop = false;
                While (current != NULL && !stop) {
                    if (current->getData() > item) {
                        stop = true;
                    } else {
                        previous = current;
                        current = current->getNext();
                    }
                }
                Node *temp = new Node(item)
                if (previous == NULL) {
                    //sets the current head as temps next item,
                    //sets temp as the new head.
                    temp->setNext(head);
                    head = temp;  
                } else {
                    //sets the current Node as temps nect Node
                    //sets them to the previous next Node 
                    temp->setNext(current)
                    previous->setNext(temp)
                }
            }
        }

        bool isEmpty() {
            //Returns true if the head is NULL.
            return head == NULL;
        }

        int size(){
            //returns the length of the linked list.
            Node *current = head;
            int count = 0;
            while (current != NULL) {

            }

            return count;
        }
        
        friend ostream& operator<<(ostream& os, const OrderedList& ol);

};

ostream& operator<<(ostream& os, const OrderedList& ol) {
    // operator for printing the data of every Node in the List
    Node *current = ol.head;
    While (current != NULL) {
        os<<current->getData()<<endl;
        current = current->getNext();
    }
    return os;
}



int main() {
        OrderedList mylist;
    mylist.add(31);
    mylist.add(77);
    mylist.add(17);
    mylist.add(93);
    mylist.add(26);
    myList.add(54);

    cout<<"SIZE: "<mylist.size()<<endl;
    cout<<"Contains 93?\t"<<mylist.search(93)<<endl;
    cout<<"Contains 100\t"<<mylist,search(100)<<endl;
    cour<<"Mylist"<<endl<<mylist;
    return 0;
}