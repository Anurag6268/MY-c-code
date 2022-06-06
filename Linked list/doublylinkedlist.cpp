#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;

 //Constructor
 Node(int d)
 {
     this->data=d;
     this->prev=NULL;
     this->next=NULL;
 }   
 //Destructor
 ~Node(){
     int val=this->data;
    if(next!=NULL){
        delete next;
        next=NULL;
    }

    cout<<"memory free  for node with data "<<val<<endl;
 }

};

//HOW TO TREVERSE A LINKED LIST
void print(Node* head){
    Node* temp=head;

    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int getLength(Node* head)
{
    int len=0;
    Node* temp=head;
     while(temp!=NULL)
     {
         len++;
         temp=temp->next;
     }
     return len;
}

void insertionATHead(Node* &head,int d)//d=data
{
    if(head==NULL){
    Node* temp=new Node(d);
    head=temp;
    }
    else{
    Node* temp=new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp; 
    }   
}


void insertionAtTail(Node* &tail,int d){
    if(tail==NULL){
    Node* temp=new Node(d);
    tail=temp;
    }
    else{
    Node* temp= new Node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
    }
}

void insertAtAnyPosition(Node* &head,Node* &tail, int position,int d){
    Node* temp=head;// creation of temp

 //counting the position
 int count=1;
 //we can't insertion at node on starting position because we start count from 1 and we are also doing position-1;
//so we have to handle it
if(position==1){
    //call insert at head to do your task
    insertionATHead(head,d);
    return;
}

 while(count < position-1)
 {
  temp=temp->next;
  count++;
 }

 // if we are inserting at last position we have to update tail
 if(temp->next==NULL)
 {
     insertionAtTail(tail,d);
     return; 
 }
//creating a node to insert at any ppostion
    Node* nodeToInsert =new Node(d);
    nodeToInsert->next= temp->next;
    temp->next->prev = nodeToInsert;
    nodeToInsert->prev=temp;
    temp->next=nodeToInsert;

}

void deleteNode(int position,Node* &head){
    //deleting first node
    if(position == 1 )
    {
        Node* temp=head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;
        delete temp;//we have to write destructor
    }

    else{
        //deleting middle node or last node
        Node* curr=head;
        Node* prev=NULL;
        int count=1;
        while(count<position)
    {
        prev=curr;
        curr=curr->next;
        count++;

    }
    curr->prev=NULL;
    prev->next=curr->next;
    curr->next=NULL;

    delete curr;    
    }

}


int main(){
    //Suppose if we not created any linked at starting means
    //head=null
    //tail=null
  Node* node1=new Node(10);
  cout<<endl;
  Node* head=node1;
  Node* tail=node1;
// creating node
  print (head);

  cout<<"insertion at head"<<endl;
insertionATHead(head,13);
  print(head);

  insertionATHead(head,14);
  print(head);

  insertionATHead(head,15);
  print(head);

  insertionATHead(head,18);
  print(head);
  //insertion at tail
  cout<<"insertion at tail start"<<endl;
insertionAtTail(tail,59);
 print(head);

 insertionAtTail(tail,55);
 print(head);

cout<<"insertion at any position start from here"<<endl;
 //insertion at any position
insertAtAnyPosition(head,tail,5,88);
print(head);


cout<<"DELETION START FROM HERE "<<endl;
deleteNode(2,head);
print(head);

deleteNode(4,head);
print(head);


  //WAY TO KNOW THE SZE OF LINKED LIST
 cout<<"size of linked linked "<< getLength(head)<<endl;



}