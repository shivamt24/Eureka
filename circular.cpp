#include "iostream"
using namespace std;

struct Node{
    int data;
    Node *link;
};

Node *Head = NULL;

void insert(int data){
    Node *temp = new Node();
    temp->data = data;
    temp->link = NULL;
    if(Head == NULL){
        Head = temp;
        temp->link = Head;
    }
    else{
        Node *traverse = Head;
        //cout << traverse->data;
        while(traverse->link->link != Head){
            traverse = traverse->link;
        }
        //cout << "test";
        traverse->link->link = temp;
        temp->link = Head;
        //cout << Head->data;
        //cout << "temp->link " << temp->link;
    }
}

void display(){
    int num = 0;
    Node *temp = Head;
    cout << "\n";
    while(temp!=NULL){
        num += 1;
        cout << temp->data << " ";
        temp=temp->link;
        if(num == 10){
            return;
        } 
    }
}

int main(){
    insert(10);
    insert(20);
    insert(30);
    display();
    return 0;
}








