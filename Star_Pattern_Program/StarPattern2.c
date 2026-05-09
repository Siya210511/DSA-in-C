//import standard input and output library
#include<stdio.h>

void main()
{
    //declaring variables
    //One for  number of rows and other ffor number of columns
    int m,n;
    //variables to iterate through the for loop
    int i,j;

    //User Input:
    printf("\nThe number of rows: ");
    scanf("%d",&m);
    printf("\nThe number of columns: ");
    scanf("%d",&n);

    //Alternatively, you can use:
    //for(i=0;i<m;i++)
    //Iterate through rows
    for(i=1;i<=m;i++)

    //Another method: for(i=m;i>=1;i--)(Use the commented if statement with this)
    {
        //iterate through columns
        for(j=1;j<=n;j++)
        {
            //Print a "*" when condition satisfies
            
            if(j>=m+1-i)
            //if(j>=i)
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
1. For Compilation: gcc StarPattern2.c -o StarPattern
2. For  Execution: ./StarPattern

Output: 

The number of rows: 5

The number of columns: 5
    *
   **
  ***
 ****
*****
*/