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
    //Number of columns
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
            if((j>=m+1-i)&&(j<=m+i-1))
            {
                //For an even row
                if(i%2==0)
                {
                    //For the even index or column
                    if(j%2==0)
                    {
                        printf("*");
                    }
                    //For the odd index or column
                    else
                    {
                        printf(" ");
                    }
                }
                //For the odd row
                else
                {
                    //For the even coolumn position
                    if(j%2==0)
                    {
                        printf(" ");
                    }
                    //For the odd column position
                    else
                    {
                        printf("*");
                    }
                }
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

1. For compilation:  gcc StarPattern6.c -o StarPattern6
2. For Execution:  ./StarPattern6

Output:

Enter the number of rows: 5 
    *    
   * *   
  * * *  
 * * * * 
* * * * *

*/