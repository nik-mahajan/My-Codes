#include<iostream>
using namespace std;

class vertex {
     public:   
     int data;
     vertex* lchild;
     vertex* rchild;
     void preorder(vertex* v){
         cout<<(v->data)<<" ";
         if(v->lchild!=nullptr) preorder(v->lchild);
         if(v->rchild!=nullptr) preorder(v->rchild);
     } 

     void inorder(){
         if(this->lchild!=nullptr) this->lchild->inorder();
          cout<<(this->data)<<" ";
         if(this->rchild!=nullptr) this->rchild->inorder();
     } 

     void postorder(){
         if(this->lchild!=nullptr) this->lchild->postorder();
         if(this->rchild!=nullptr) this->rchild->postorder();
          cout<<(this->data)<<" ";
     }  
};


int main(){
    vertex * v=new vertex[5];
    v[0].data=1;   v[1].data=2;  
     v[2].data=3;  v[3].data=4;  v[4].data=5;
     v[2].lchild=nullptr;   v[2].rchild=nullptr; 
     v[3].lchild=nullptr;   v[3].rchild=nullptr;
     v[4].lchild=nullptr;   v[4].rchild=nullptr;

    v[0].lchild=&v[1];  v[0].rchild=&v[2];
    v[1].lchild=&v[3]; v[1].rchild=&v[4];
    cout<<"Preorder : ";
    v[0].preorder(&v[0]);
    cout<<endl<<"Inorder : ";
    v[0].inorder();

    cout<<endl<<"Postorder : ";
    v[0].postorder();
    return 0;
}