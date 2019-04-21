#include <iostream>
using namespace std;
void countSort(int arr[],int n);
int main() {
    int arr[] = {23,233, 123412, 213, 231, 5, 3, 24, 5, 324345, 32432, 1234, -2134, 324, 53245};
    countSort(arr,15);
    return 0;
}
void countSort(int arr[],int n){
    int max,min;
    min=arr[0];
    max=min;
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    int tmp[1000000];
    for(int i=0;i<max-min;i++){
        tmp[i]=0;
    }
    for(int i=0;i<n;i++){
        tmp[arr[i]-min]++;
    }
    for(int i=0;i<max-min;i++){
        for(int j=0;j<tmp[i];j++){
            cout<<(min+i)<<' ';
        }
    }
    cout<<endl;
}
