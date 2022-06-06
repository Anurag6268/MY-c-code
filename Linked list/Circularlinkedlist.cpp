#include<iostream>
using namespace std;
class Node{
public:
int data;
Node* next;

//constructor
Node(int d){
    this->data=d;
    this->next=NULL;
}
//DESTUCTOR
~Node(){
   int value=this->data;
   if(this->next!=NULL){
   delete next;
   next=NULL;
   }j
 cout<<"MEMORY IS FREE FOR NODE WITH DATA"<<value<<endl;
}

};

void insertNode(Node *tail,int element,int d){
//ASSUMING THAT THE ELEMENT ARE PRESENT IN THE LIST
if(tail==NULL){
//IF LIST IS EMPTY THEN WE HAVE A CREATE A NODE FIRST
Node *newNode = new Node(d);
tail=newNode;
newNode->next=newNode;
}
else{
//IF NODE IS NOT EMPTY
Node* curr=tail;
while(curr->data != element){
    curr=curr->next;
}
//agar loop se bhar aa gaya means elemnt found

Node *temp=new Node(d);
temp->next=curr->next;
curr->next=temp;
}

void print (Node*tail){

     Node* temp=tail;
    do{
    cout<<tail->data<<" "<<endl;
    }
     while(tail->next!= temp);
}




int main() {

Node* temp=NULL;
insertNode(tail,5,3);
print(tail);
 return 0;
}
}