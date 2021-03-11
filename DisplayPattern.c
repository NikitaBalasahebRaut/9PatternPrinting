/*
 Problem statement :
 Write a program which accept number of rows and coluns from user and display below pattern:
 
Input :   (Row = 4 Columns = 4)
Output :
 
*   #    #   #
#   *    #   #
#   #    *   #
#   #   #    *
 
*/


 #include<stdio.h>
 
 void DisplayPattern(int iValue1,int iValue2)
 {
   int i = 0;
   int j = 0;
   
   if(iValue1 < 0)
   {
      iValue1 = -iValue1;
   }
   if(iValue2 < 0)
   {
      iValue2 = -iValue2;
   }
    if(iValue1 != iValue2)
   {
     printf("Invalid Arguments\n");
	 return ;
   }
   
   for(i = 1; i <= iValue1;i++)
   {
    for(j = 1; j <= iValue2; j++)
	{
	  if(i == j)
	  {
	    printf("$\t");
	  }
	  else
	  {
	    printf("* \t");
	  }
	}
	
	printf("\n");       //new line after first row complete
   }
 }
 
 int main()
 {
   int iRow = 0;
   int iCol = 0;
   
   printf("Enter The No of rows \n");
   scanf("%d",&iRow);
   printf("Enter The No of colums \n");
   scanf("%d",&iCol);
   
   DisplayPattern(iRow,iCol);
 
 return 0;
 }
 
 /*
 output
 
 Enter The No of rows
5
Enter The No of colums
5
$       *       *       *       *
*       $       *       *       *
*       *       $       *       *
*       *       *       $       *
*       *       *       *       $

D:\ProgramTopicWise\LB\PatternPrinting\Pattern9>myexe
Enter The No of rows
4
Enter The No of colums
4
$       *       *       *
*       $       *       *
*       *       $       *
*       *       *       $

D:\ProgramTopicWise\LB\PatternPrinting\Pattern9>myexe
Enter The No of rows
4
Enter The No of colums
2
Invalid Arguments

*/