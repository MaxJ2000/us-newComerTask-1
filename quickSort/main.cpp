#include <iostream>
void qsort(int arr[],int head,int tail);
int main() {
    int arr[8]={233,666,777,001,999,996,985,555};
    qsort(arr,0,8);
    getchar();
}
void swap(int *x,int *y){
    int tmp;
    tmp=*x;
    *x=*y;
    *y=tmp;
}
void qsort(int arr[],int head,int tail){
    if(head>=tail){
        return;
    }
    int i=head,j=tail,mark;
    mark=arr[head];
    while(i<j){
        while(i<j and arr[j]>=mark)j--;
        arr[i]=arr[j];
        while(i<j and arr[i]<=mark)i++;
        arr[j]=arr[i];
//        swap(&arr[i],&arr[j]);
    }
//    swap(&arr[head],&arr[])
    arr[i]=mark;
    qsort(arr,head,i-1);
    qsort(arr,j+1,tail);
}