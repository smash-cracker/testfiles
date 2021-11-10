#include<stdio.h>
int searchh(int *arr, int n, int size) {
    for(int i=0;i<size;i++) {
                    if(arr[i]==n) {
                        return i;
                    }
                }
                return -1;
}
void main() {
    int arr[50],c,size,num,p;
    char ch;
    while(1) {
    printf("\n1. create array\n2. Insert into position\n3. Delete from array\n4. Search in array\n5. Print array\n6. Quit\n");
    scanf("%d",&c);
    switch(c) {
        case 1: printf("Enter number of elements: ");
                scanf("%d",&size);
                printf("Enter elements: ");
                for(int i=0;i<size;i++)
                    scanf("%d",arr+i);
                printf("Inserted successfully!");
                break;
        case 2: printf("Enter number to be inserted: ");
                scanf("%d",&num);
                printf("Enter position to be inserted: ");
                scanf("%d",&p);
                for(int i=c;i>=p;i--)
                    arr[i]=arr[i-1];        
                arr[p-1]=num;
                break;
        case 3: printf("Enter elemet to be deleted: ");
                scanf("%d",&num);
                int a = searchh(arr,num,size);
                if(a!=-1) {
                    for(int i=a;i<size;i++)
                        arr[i]=arr[i+1];
                }     
                break;
        case 4: printf("Enter element to be searched: ");
                scanf("%d",&num);
                a = searchh(arr,num,size);
                if(a==-1) {
                    printf("Element not found");
                } else {
                    printf("Element found at %d",a+1);
                }
                break;
        case 5: for(int i=0;i<size;i++)
                    printf("%d ",arr[i]);
                break;
        case 6: return;
        }
    }
}
