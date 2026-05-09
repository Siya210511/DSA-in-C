//import standard input and output library
#include<stdio.h>

void main()
{
    //Variable Decalaration

    //variable for number of rows
    int m;
    printf("\nEnter the number of rows: ");
    scanf("%d",&m);

    //variable for number of columns
    int n;
    n=2*m-1;

    //Variables to iterate
    int i,j;

    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            //Enter the loop only  when the condition is satisfied
            if((j>=m+1-i)&&(j<=m+i-1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
         //To the next Line
        printf("\n");
    }
}
/*
COMMANDS:
1. For Compilation: gcc StarPattern5.c -o StarPattern5
2. For Execution:  ./StarPattern5

OUTPUT:

Enter the number of rows: 5
    *    
   ***   
  *****  
 ******* 
*********

*/