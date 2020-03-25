#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *link;
};
Node *head = NULL;
void insert(int location, int number){
    Node *temp = new Node();
    temp->data = number;
    temp->link = NULL;

    if (location == 1){
        if (head == NULL){
            head = temp;
            //cout << temp->data;
        }
        else{
            temp->link = head;
            head = temp;
        }
    }
    else{
        Node *traverse = head;
        for (int i = 1; i< location - 1 ;i++){
            traverse = traverse->link; 
            if(traverse == NULL){
                cout << "\nfalse input";
                
            }
        }
        //cout << traverse->data;
        temp->link = traverse->link;
        traverse->link = temp;
        
    }
    //cout << " true ";
}

void remove(int location){
    Node *traverse = head;
    if (location == 1) {
        if ( head == NULL ){
            cout << "invalid location";
            return;
        }
        head = head->link;
    }
    for ( int i = 1 ; i < location - 1 ; i++ ){
        traverse = traverse->link;
        if ( traverse->link == NULL ){
            cout << "invalid location";
            return;
        }
    }
    traverse->link = traverse->link->link;

}

void display(){
    cout << "\n" ;
    Node *temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->link;
    }
}

int main(){
    insert(1,10);
    //display();
    insert(2,20);
    insert(3,30);
    //display();
    insert(2,15);
    //display();
    insert(5,50);
    display();
    remove(2);
    remove(4);
    display();
    return 0;
}