//Find whether the given element exists in an array or not. If the element exists in an array, display YES else NO. print array.
#include<stdio.h>
void main(){
    int a[10]={1,5,4,8,9,2,0,6,11,7}; //predefined array
    int flag=0; //flag to check number is present in array or not
    int num;
    printf("Enter Number to search: ");
    scanf("%d",&num);
    for(int i=0;i<10;i++){
        if(a[i]==num)
            flag=1;
    }
    // check value of flag if flag is 0 number is not present in array, if flag is 1 number is present in array
    if(flag==1)
        printf("\nYES\n");
    else
        printf("\nNO\n");
   // for loop to print vlues of array
    for(int i=0;i<10;i++){
        printf("%d",a[i]);
    }
}
