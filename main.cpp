//
//  main.cpp
//  Link Based Stack
//
//  Created by Ryan Yu

#include <iostream>
using namespace std;

class List{
private:
    struct Node{
        int data;
        Node *link;
    };
    
    Node *top = NULL;
    int count=0;
    
public:
    bool isEmpty(){
        if (top == NULL){
            return true; //true, stack is empty
        }
        else{
            return false; //false, stack is NOT empty
        }
    }
    
    void Push(int insertData){
        Node *n = new Node;
        n->data = insertData;
        n->link=top;
        top = n;
        count++;
        }
    
    void Pop(){
        if (isEmpty()){
            cout<<"Error, stack is empty"<<endl;
        }
        else{
            count--;
            cout<< "The top of the stack has value " << top->data<<endl;
            top = top->link;
        }
    }

};


int main(){
    List newList;
    newList.Pop();
    newList.Push(2);
    newList.Pop();
    newList.Push(69);
    newList.Pop();
    newList.Push(420);
    newList.Pop();
    newList.Push(1);
    newList.Push(2);
    newList.Push(3);
    newList.Pop();
    newList.Pop();
    
}
//FINAL EDIT .1

