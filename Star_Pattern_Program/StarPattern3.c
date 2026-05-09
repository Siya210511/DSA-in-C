//Import standard input and output library
#include<stdio.h>

void main()
{
   //Declare variables

   //One for rows, other for columns.
   int m,n;

   //variables to iterate through rows and columns
    int i,j;
    //User Input:
    printf("\nEnter the number of rows: ");
    scanf("%d",&m);

    printf("\nEnter number of columns: ");
    scanf("%d",&n);

    //Alternatively you can use : for(i=0;i<m;i++)
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j>=i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        //For next line
        printf("\n");
    }
}

/*
COMMANDS:
1. For compilation: gcc StarPattern3.c -o StarPattern3
2. For Execution: ./StarPattern3

OUTPUT:

Enter the number of rows: 5

Enter number of columns: 5
*****
 ****
  ***
   **
    *

*/