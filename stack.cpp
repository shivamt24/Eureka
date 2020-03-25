#include <iostream>
using namespace std;
struct Node{
    int data;
    Node *link;
};
Node *Head = NULL;
void pop(){
    Head = Head->link;
}
void push(int number){
    Node *temp = new Node();
    temp->data = number;
    temp->link = Head;
    Head = temp;
}
void display(){
    Node *temp1;
    temp1 = Head;
    while(temp1 != NULL)
    {
        
        cout << temp1->data << " ";
        temp1 = temp1->link;
    }
    cout << "\n";
}
int main(){
    
    /*Node *temp = new Node();
    temp->data = 26;
    temp->link = NULL;
    Head = temp;
    Node *temp1 = Head;
    while(temp1 != NULL){
        cout << temp1->data;
        temp1=temp1->link;
    }*/
    push(10);
    push(20);
    pop();
    display();
    push(26);
    display();
    return 0;
}