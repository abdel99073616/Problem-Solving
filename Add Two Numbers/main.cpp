#include <iostream>

using namespace std;
class Node
{
public:
    int data;
    Node* next;
};

class Node* NewNode(int data){
    Node* new_node = new Node();
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

void push(Node** head , int data){
    Node* node = NewNode(data);
    node->next = *head;
    *head = node;
}


void printList(Node* node)
{
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}


Node* addTwoLists(Node* first, Node* second)
{

    // res is head node of the resultant list
    Node* res = NULL;
    Node *temp, *prev = NULL;
    int carry = 0, sum;

    // while both lists exist
    while (first != NULL
           || second != NULL) {
        // Calculate value of next
        // digit in resultant list.
        // The next digit is sum of
        // following things
        // (i) Carry
        // (ii) Next digit of first
        // list (if there is a next digit)
        // (ii) Next digit of second
        // list (if there is a next digit)
        sum = carry + (first ? first->data : 0)
              + (second ? second->data : 0);

        // update carry for next calulation
        carry = (sum >= 10) ? 1 : 0;

        // update sum if it is greater than 10
        sum = sum % 10;

        // Create a new node with sum as data
        temp = newNode(sum);

        // if this is the first node then
        // set it as head of the resultant list
        if (res == NULL)
            res = temp;

        // If this is not the first
        // node then connect it to the rest.
        else
            prev->next = temp;

        // Set prev for next insertion
        prev = temp;

        // Move first and second
        // pointers to next nodes
        if (first)
            first = first->next;
        if (second)
            second = second->next;
    }

    if (carry > 0)
        temp->next = newNode(carry);

    // return head of the resultant list
    return res;
}
int main()
{
    Node* frist = NULL;
    Node* second = NULL ;

    push(&frist , 5);
    push(&frist , 9);
    push(&frist , 2);
    push(&frist , 7);
    push(&frist , 3);

    cout<<"Frist List is";
    printList(frist);


    return 0;
}
