#include "iostream"
using namespace std;

struct Node{
    int data;
    Node *next;
    Node *prev;
};
Node *Head;

void insert(int number){
    Node *temp = new Node();
    temp->data = number;
    temp->next = NULL;
    temp->prev = NULL;

    if (Head == NULL){
        Head = temp;
    } 
    else{
        Node *traverse = Head;
        while(traverse->next != NULL){
            traverse = traverse->next;
        }
        temp->prev = traverse;
        traverse->next = temp;
    }
}

void display(int direction){
    cout << "\n";
    Node *traverse = Head;
    while(traverse != NULL){
        cout << traverse->data << " ";
        traverse = traverse->next;
        if(traverse->next == NULL){
            cout << traverse->data << " ";
            traverse = traverse->prev;
            break;
        }
    }
    //cout << traverse;
    cout << "\n";
    //traverse = traverse->prev;
    while(traverse != NULL){
        cout << traverse->data << " ";
        traverse = traverse->prev;
    }

}

int main(){
    insert(10);
    insert(20);
    insert(30);
    display(1);
    return 0;
}