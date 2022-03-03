// Program to return total and percentace of three marks and call this function from main() and print this result in main().
#include <stdio.h>
//function to find sum
int sum(int m1, int m2, int m3){
    return m1+m2+m3; // return sum of 3 number
}// end of sum function

// function to find average
float avg(int k){
    return (k*100)/300; // returning average
}// end of evg function
int main()
{
    int m1,m2,m3;
    printf("Enter Marks of 3 Subjects:");
    scanf("%d %d %d",&m1,&m2,&m3); //take marks of 3 subject from user

    printf("\nTotal: %d",sum(m1,m2,m3)); //print sum of 3 
    printf("\nPercentage: %f",avg(sum(m1,m2,m3))); //print percentage of 3 marks

    return 0;
}
