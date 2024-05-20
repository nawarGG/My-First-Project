#include<stdio.h>

int main(){
    int k;
    int n;
    scanf("%d",&n);

    int ara[n];
    for(int i =0;i<n;i++)
        scanf("%d",&ara[i]);

    //find an element - linear search


    //k-th max element
    int k;
    scanf("%d",&k);
    if(k>n){
        printf("invalid input\n");
        return 0;
    }

    for(int i =0;i<n;i++)
    {
        int flag = 0;
        for(int j = 0; j<n-1-i;j++){
            if(ara[j]>ara[j+1]){
                int temp = ara[j];
                ara[j] = ara[j+1];
                ara[j+1] = temp;
                flag++;
            }
        }
        if(flag==0){
            break;
        }
    }

    printf("%d-th max element is :%d\n",k,ara[n-k]);

}
