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
    //Introducing a new variable K
    int k;
    //a for loop to iterate through number of rows

    //alternatively you can also use a for loop starting from 0
    //eg:for(i=0;i<m;i++)
    for(i=1;i<=m;i++)
    {
        //Initialize k as 1 for every row
        k=1;
        //a loop to iterate through number of columns
        for(j=1;j<=n;j++)
        {
            //print a * only when condition satisfies
            if((j>=m+1-i)&&(j<=m+i-1)&&k)
            {
                printf("*");
                //Set k=0 after every * print
                k=0;
            }
            else
            {
                //Set k=1 for every space print
                printf(" ");
                k=1;
            }
        }
        printf("\n");
    }
}

/*
Commands(Use in Terminal  if using VSCode or CodeSpaces):

1. For compilation:  gcc StarPattern6b.c -o StarPattern6b
2. For Execution:  ./StarPattern6b

Output:

Enter the number of rows: 5 
    *    
   * *   
  * * *  
 * * * * 
* * * * *

*/