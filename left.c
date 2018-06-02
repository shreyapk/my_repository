#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,d,i,j,k,l,p;
    int temp;
    printf("enter the value of n");
    scanf("%d",&n);
    printf("enter the value of d");
    scanf("%d",&d);
    int *array=(int*)malloc(n*sizeof(int));
    printf("enter the elements");
    for(k=0;k<n;k++){
    	//printf("enter the elements");
        scanf("%d\n",&array[k]);
    }
    /*int swap(int *x,int *y){
        temp=*x;
        *x=*y;
        *y=temp;
    }*/
    //array[0]=array[n-1];
    for(i=n;i>=0;i--){
        for(j=1;j<=d;j++){
            if(i==0){
                array[i]=array[n-i-1];
            }
            else {
                array[i]=array[i-1];
            }
        }
    }
    for(i=0;i<n;i++){
        printf("array is %d\n",array[i]);
    }
}
