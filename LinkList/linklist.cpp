#include<iostream>
using namespace std;

struct node{
  int data; 
  struct node* next;
};

void traversal(struct node *head){
  struct node* p=head; 
  while(p!=nullptr) {
      cout<<p->data<<" ";
      p=p->next;
  }
}


int main(){
    struct node l1,l2,l3,l4,l5;
    struct node* start=&l1; 
    l1.data=101;  l1.next=&l2; 
    l2.data=120;  l2.next=&l3;
    l3.data=139;  l3.next=&l4;
    l4.data=134;  l4.next=&l5;
    l5.data=115;  l5.next=nullptr;
    traversal(start);
    return 0;
}