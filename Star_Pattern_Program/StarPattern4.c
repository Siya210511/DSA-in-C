//import input and output library
#include<stdio.h>

void main()
{
    //Decalre variables
    //One for number of rows, another for number of columns
    int m,n;

    //variables to iternate through rows and columns
    int i,j;

    //User Input:
    printf("\nEnter the number of rows: ");
    scanf("%d",&m);
    printf("\nEnter the number of  columns: ");
    scanf("%d",&n);

    //Alternatively: for(i=0;i<m;i++)
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            //print a star only when the condition is satisfied
            if(j<=m+1-i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        //Jump to next line
        printf("\n");
    }
}
/*
COMMANDS:
1. For Compilation: gcc StarPattern4.c -o StarPattern4
2. For Execution: ./StarPattern4

Output:

Enter the number of rows: 5

Enter the number of  columns: 5
*****
**** 
***  
**   
*

*/