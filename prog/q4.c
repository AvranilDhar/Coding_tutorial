
// Wap to take input of string
// Then sort the character 
// By taking O(nlogn) worst case time complexity

// Time 20 min
#include <stdio.h>
void merge(char* arr, int beg,int mid,int end){
    int i = beg,j=mid+1,index=0,size=end-beg+1,k=beg;
    char temp[size];
    while(i<=mid && j<=end){
        if(arr[i] < arr[j]){
            temp[index] = arr[i];
            i++;
        } else {
            temp[index] = arr[j];
            j++;
        }
        index++;
    }
    if(i>mid){
        while(j<=end){
            temp[index] = arr[j];
            index++;
            j++;
        }
    } else {
        while(i<=mid){
            temp[index] = arr[i];
            index++;
            i++;
        }
    }
    for (i=0;i<size;i++) arr[beg+i] = temp[i];
}
void merge_sort(char* arr, int beg,int end){
    if(beg<end){
        int mid = (beg+end)/2;
        merge_sort(arr,beg,mid);
        merge_sort(arr,mid+1,end);
        merge (arr,beg,mid,end);
    }
}
int main() {
    int i,n;
    scanf("%d",&n);
    getchar();
    char arr[n];
    for(i=0;i<n;i++){
        scanf("%c",&arr[i]);
    }
    merge_sort(arr,0,n-1);
    for(i=0;i<n;i++){
        printf("%c",arr[i]);
    }
    return 0;
}