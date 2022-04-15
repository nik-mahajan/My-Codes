#include<iostream>
using namespace std;
void printarr(int a[],int n){
    for (int i = 0; i < n; i++)  cout<<a[i]<<" ";
}
int partition(int a[],int low,int high){
    int i=low+1 , j=high , pivot=a[low];
 do{   while(pivot>=a[i]&&i<high) i++;
       while(pivot<a[j]&&j>low)  j--;
    if(i<j) {
       int temp=a[i]; a[i]=a[j]; a[j]=temp;
    }
}while(i<j);

int temp=a[j]; a[j]=a[low];  a[low]=temp;
return j;
}
void quicksort(int a[],int low,int high){
   if(low<high){
       int partitionIndex=partition(a,low,high);
       quicksort(a,low,partitionIndex-1);
       quicksort(a,partitionIndex+1,high);
   }
}

int main(){
    int arr[]={34,12,89,43,219,-134,90};
    int size=sizeof(arr)/sizeof(int);
     quicksort(arr,0,size-1);
     cout<<"QuickSort : "; printarr(arr,size);
    return 0;
}