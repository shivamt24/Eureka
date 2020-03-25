#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *link;
};
Node *head = NULL;

void insert(int number){
    Node *temp = new Node();
    temp->data = number;
    temp->link = NULL;
    if (head == NULL){
        head = temp;
    }
    else{
        Node *traverse = head;
        //cout << temp->data;
        while(traverse->link != NULL){
            //cout << traverse->link;
            traverse = traverse->link;
        }
        //cout << "test";
        traverse->link = temp;
    }

}

void remove(){
    Node *temp = head;
    Node *temp1,*temp2;
    while(temp->link != NULL){
        temp = temp->link;
        if(temp->link->link == NULL){
            temp->link = NULL;
            return;
        }
    }

    cout << temp->data;
    //temp->data = 20;

}
void display(){
    cout << "\n";
    Node *traverse = head;
    while(traverse != NULL){
        cout << traverse->data << " ";
        traverse = traverse->link;
    }    
}
int main(){
   /*
    Node *temp = new Node();
    temp->data = 12;
    temp->link = NULL;
    head = temp;
    Node *temp1 = new Node();
    temp1->data = 14;
    temp1->link = NULL;
    Node *temp2 = head;
    while (temp2->link = NULL){
        temp2 = temp2->link;
    }
    temp2->link = temp1;
*/




    insert(10);
    insert(20);
    insert(30);
    insert(40);
    //display();
    remove();
    display();
    insert(40);
    display();
    return 0;
}