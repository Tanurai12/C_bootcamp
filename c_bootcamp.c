//printing star
#include<stdio.h>
int main()
 {

    int i,j,n=10;
    for(i=0;i<n;i++)
    {

        for(j=0;j<n;j++)
        {
            if(j==0||i==j||i==n-1)
            printf(" * ");
            else
            printf("   ");
        }
        printf("\n");
    }
 }

 //print star pattern as triangle
 #include<stdio.h>
int main()
 {

    int i,j;
    for(i=0;i<5;i++)
    {

        for(j=0;j<9;j++)
        {
            if(j==4-i||j==4+i||i==4)
            printf(" * ");
            else
            printf("   ");
        }
        printf("\n");
    }
 }
 // printing numbers 1-10 and reverse order using recursion
 #include<stdio.h>
 void printN(int);
 int main()

 {
    printN(10);
    return 0;
 }
 void printN(int a)
 {

    if(a>0)
    {
     printf("%d",a);
        printN(a-1);
       printf("%d",a);

    }
 }
 //print odd number using recursion 
 void oddnumber(int);
int main()
{

 int a=20;
oddnumber(a);
return 0;
}
void oddnumber(int x)
{
   if(x>0)
   oddnumber(x-1);
   if(x%2!=0)
   printf("%d",x);

}