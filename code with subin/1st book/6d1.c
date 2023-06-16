#include<stdio.h>

int main(){
    int arr[6];

    arr[5]=-1;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    int index, value;
    scanf("%d %d", &index, &value);
    int a, b;
    a=arr[index];
    for (int i = index; i < 6; i++)
    {
        if(i==index) {
            arr[i]=value;
        }
        else{
            b=a;
            a=arr[i];
            arr[i]=b;
        }
    }
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
    
}