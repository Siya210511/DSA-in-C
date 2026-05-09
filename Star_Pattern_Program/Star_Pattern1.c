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
    printf("\nEnter the number of columns: ");
    scanf("%d",&n);
    
    //a for loop to iterate through number of rows

    //alternatively you can also use a for loop starting from 0
    //eg:for(i=0;i<m;i++)
    for(i=1;i<=m;i++)
    {
        //a loop to iterate through number of columns
        for(j=1;j<=n;j++)
        {
            //print a * only when condition satisfies
            if(j<=i)
            {
                printf("*");
            }
            else
            {
                printf("\t");
            }
        }
        printf("\n");
    }
}

/*
Commands(Use in Terminal  if using VSCode or CodeSpaces):

1. For compilation:  gcc Star_Pattern1.c -o Star_Pattern1
2. For Execution:  ./Star_Pattern1

Output:

Enter the number of rows: 5

Enter the number of columns: 5
*
**
***
****
*****

*/