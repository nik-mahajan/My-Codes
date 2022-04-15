#include<iostream>
using namespace std;

class stack{
    public:
    int *arr,size,top;
    void push(int ele){
        top++;
        arr[top]=ele;
    }
  
    int pop(){
        int x= topA();
        top--;
        return x;
    }
   
    int topA(){
        return arr[top];
    }

    bool isEmpty(){
        if(top==-1) return true;
        return false;
    }
   
};


int main(){
   stack s1;  s1.size=100; s1.arr=new int[s1.size*sizeof(int)];  s1.top=-1;
    s1.push(7);  s1.push(89); 
    cout<<s1.pop()<<" ";   s1.push(12);  s1.push(14);   cout<<s1.pop()<<" ";  
    cout<<s1.pop()<<" "; 
    return 0;
}