#include<stdio.h>
int binarySearch(int arr[],int size,int search){
    int low=0;
    int high=size-1;
    for(int i=0;i<size;i++){
        int mid =(high+low)/2;
        if(search==arr[mid]){
            return mid;
        }
        else{
            if(search<arr[mid]){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
    }
    return -1;
}
int main(){
    int arr[100]={1,2,3,4,5,6,70,90,100};
    printf("what element do you want to search");
    int search;
    scanf("%d",&search);
    int result = binarySearch(arr,9,search);
    if (result==-1){
        printf("the element not found");
    }
    else{
        printf("%d",result);
        }
    return 0;
}