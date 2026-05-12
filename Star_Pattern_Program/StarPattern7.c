//import standard input and output library
#include <stdio.h>

void main()
{
    //declare your variables

    //one variable is for number of rows and the other is for number of columns
    int m,n;
    //declare variables for iteration
    int i,j;
    //User  Input:
    printf("\nEnter the number of rows: ");
    scanf("%d",&m);
    n=2*m-1;
    //a for loop to iterate through number of rows

    //alternatively you can also use a for loop starting from 0
    //eg:for(i=0;i<m;i++)
    for(i=1;i<=m;i++)
    {
        //a loop to iterate through number of columns
        for(j=1;j<=n;j++)
        {
            //print a * only when condition satisfies
            if((j<=m+1-i)||(j>=m+i-1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

/*
Commands(Use in Terminal  if using VSCode or CodeSpaces):

1. For compilation:  gcc StarPattern7.c -o StarPattern7
2. For Execution:  ./StarPattern7

Output:

Enter the number of rows: 5

*********
**** ****
***   ***
**     **
*       *

*/