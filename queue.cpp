#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *link;
};
Node *head = NULL;
void insert(int number){
    Node *temp = new Node();
    temp->data = number;
    temp->link = head;
    head = temp;
}
void remove(){
    Node *temp = head;
    while(temp->link != NULL){
        temp = temp->link;
        if(temp->link->link == NULL){
            temp->link = NULL;
            break;
        }
    }
}
void display(){
    cout << "\n";
    Node *temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->link;
    }
}

int main(){
    insert(10);
    insert(20);
    insert(30);
    display();
    remove();
    display();

    return 0;
}