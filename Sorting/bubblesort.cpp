#include<iostream>
using namespace std;
void printarr(int a[],int n){
    for (int i = 0; i < n; i++)  cout<<a[i]<<" ";
}
void bubblesort(int a[],int n){
    cout<<"BubbleSort : ";
    for(int i=0;i<n-1;i++)
    for(int j=0;j<n-i-1;j++) if(a[j+1]<a[j]) {
        int temp=a[j];
        a[j]=a[j+1];  a[j+1]=temp;
    } 
    printarr(a,n);
    cout<<endl;
}

void insertionsort(int a[],int n){
    cout<<"Insertion Sort : ";
 
    for(int i=1;i<n;i++){
       int key=a[i];
       int j=i-1;  while(j>=0&&key<a[j]){ 
           a[j+1]=a[j];
           j--;
       }
       a[j+1]=key;
    }
    printarr(a,n);
    cout<<endl;
}

void selectionsort(int a[],int n){
    cout<<"Selection Sort : ";
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++) if(a[min]>a[j]) min=j;
        int temp=a[min];
        a[min]=a[i];  a[i]=temp;
    }
    printarr(a,n);
    cout<<endl;
}


int main(){
    int arr[]={34,12,89,43,219,-134,90};
    int size=sizeof(arr)/sizeof(int);
    bubblesort(arr,size);

    int arr2[]={34,12,89,34,219,-134,90};
    insertionsort(arr2,size);

    int arr3[]={34,12,89,53,219,-134,90};
    selectionsort(arr3,size);

    return 0;
}