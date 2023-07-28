#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int partition(int arr[],int low,int high){

    int size=sizeof(arr)/sizeof(int);
    printf("[");
for(int i=0;i<size;i++){
    printf(" %d ",arr[i]);
}
printf("]\n");

    int temp;
int pivot=low;
while(low<high){
    while(arr[low]<=arr[pivot]){
        low++;
        }
    while(arr[high]>arr[pivot]){
        high--;
   }
    //NOW SWAP ELEMENTS WITH EACH OTHER
    temp=arr[low];
    arr[low]=arr[high];
    arr[high]=temp;


}
//SWAP HIGH INDEX WITH PIVOT
temp=arr[high];
arr[high]=arr[pivot];
arr[pivot]=temp;
printf("index of partition %d",high);
return high;
}

void quickSort(int arr[],int low, int high){
    int partitionIndex;
    if(low<high){
    partitionIndex = partition(arr,low,high);
    printf("%\nd partition",partitionIndex);
    quickSort(arr,low,partitionIndex-1);
    quickSort(arr,partitionIndex+1,high);

int size=sizeof(arr)/sizeof(int);

printf("ELEMENTS OF SORTED ARRAY ARE: [");
for(int i=0;i<size;i++){
    printf(" %d",arr[i]);
}
printf("]\n");
}}
int main(void){
int arr[]={21,13,45,65,87,54,67,24,98,68,70,45,55,80};


printf("ELEMENTS OF ARRAY ARE: [");
int size=sizeof(arr)/sizeof(int);
for(int i=0;i<size;i++){
    printf(" %d ",arr[i]);
}
printf("]\n");
int low=0,high=size-1;

quickSort(arr,low,high);


}
