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
    int k;
    //alternatively you can also use a for loop starting from 0
    //eg:for(i=0;i<m;i++)
    for(i=1;i<=m;i++)
    {
        //Initialize k for every row
        k=1;
        //a loop to iterate through number of columns
        for(j=1;j<=n;j++)
        {
            //print a number only when condition satisfies
            if((j>=m+1-i)&&(j<=m+i-1))
            {
                printf("%d",k);
                //a ternary operator to increment or decrement k
                //only increment the k when column position is less than or equal to number of rows,m-1
                k=(j<=m-1)?k+1:k-1;
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
Commands(Use in Terminal if using VSCode or CodeSpaces):

1. For compilation:   gcc NumberPattern1.c -o NumberPattern1
2. For Execution:  ./NumberPattern1

Output:

Enter the number of rows: 4
   1   
  121  
 12321 
1234321

*/