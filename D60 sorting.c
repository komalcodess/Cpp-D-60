#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements:");
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter element %d:",i+1);
        scanf("%d",&arr[i]);
    }

    int k;
    printf("Enter the element to search:");
    scanf("%d",&k);
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i; j++){
            if(arr[j] > arr[j+1]){
                int temp=arr[j];
                arr[j] = arr[j+1];
                arr[j+1]= temp;
    }}
    }

    int low=0, high=n-1, found=0;
    while(low<=high){
        int mid= (low+high)/2;
        if(arr[mid] ==k){
            printf("Element found at position %d\n",mid+1);
            found =1;
            break;
        } else if(arr[mid] < k){
            low =mid+1;
        } else{
            high= mid-1;
        }
    }

    if(found==0){
        printf("Element not found\n");
    }


}
