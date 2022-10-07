/*#include<stdio.h>
int prime(int);
int main()
{
    int a,s;
    printf("enter a number");
    scanf("%d",&a);
    s=prime(a);
 printf("next prime number is %d",s);
    
    return 0;
 }
 int prime(int l)
 {
   int flag;
  for(int i=2;i<=l/2;i++)
  {

    if(l%i!=0)
    flag=i;
    printf("%d",i);
  }
return flag;

 }*/
/* int main()
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
 }*/

/*
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
 }*/
 /*#include<stdio.h>
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
 }*/
 
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
/*void natural(int);
int main()
{
   int a=5;
   natural(a);
   return 0;
}
void natural(int x)

{
   if(x>0)
   {
      printf("%d",x);
   natural(x-1);
   
   }
}*/
//recursion to convert decimal to binnary********************************
//********************************************
/*#include<stdio.h>
void dtob(int);
int main()
{
   int a=25;
   dtob(a);
   printf("modulas of 1 %% 2 is %d",1%2);
return 0;
}
void dtob(int x)
{
   if(x>0)
   {

      dtob(x/2);
      printf("%d",x%2);
   }
}*/
//program to find next prime nber of a given number***************************************************
/*#include<stdio.h>
int prime (int);
int main()
{
  int a,flag=0;
  printf("enter a number");
  scanf("%d",&a);
  flag=prime(a);
  printf(" next prime number is  :%d",flag); 
   return 0;
}
int prime(int n)
{
  int i,j;
  for(int i=n+1;i>0 ;i++)
  {

    for(j=2;j<=i;j++)
    {
      if(i%j==0)
      break;
  }
  if(j==i)
      {
     return i;
        }
}
}*/
/*#include<stdio.h>
void printN(int);
int main()
{
   int a;
   printf("enter a number");
   scanf("%d",&a);
   printN(a);
   return 0;

}
void printN(int n)
{ 
   int  i,j;

   for(int i=2;i<=n;i++)
   {
   
      for(int j=2;j<=i;j++)
      {
          if(i%j==0)
       break;
      }
   
      printf("tanu");
      if(j==i)
      {
      printf("%d",i);
   
      }
   }
}*/
// calculate prime nummber bettween two nummbers using function*********************************************
/*#include<stdio.h>
void primeN(int, int);
int main()
{
   int a,b;
   printf("enter  2 values ");
   scanf("%d%d ",&a,&b);
   primeN(a,b);
   return 0;
}
void primeN(int x, int y)
{

for(int i=x;i<y;i++)
   {

    int flag=0;
         for(int j=2;j<i;j++)
         {
         if(i%j==0)
         {

            flag=1;
            break;
         }
         }
         
          if(flag==0)
          printf(" %d",i);
         
   }
}*/
// calculate prime number betweeen two value************************************************************
/* #include<stdio.h>
int main()
{
   int a,b;
   printf("enter  starting and ending value ");
   scanf("%d %d",&a,&b);
for(int i=a;i<b;i++)
   {

    int flag=0;
         for(int j=2;j<i;j++)
         {
         if(i%j==0)
         {

            flag=1;
            break;
         }
         }
         
          if(flag==0)
          printf(" %d",i);
         
   }
return 0;
}: #include<stdio.h>
int main()
{
   int a,b;
   printf("enter  starting and ending value ");
   scanf("%d %d",&a,&b);
for(int i=a;i<b;i++)
   {

    int flag=0;
         for(int j=2;j<i;j++)
         {
         if(i%j==0)
         {

            flag=1;
            break;
         }
         }
         
          if(flag==0)
          printf(" %d",i);
         
   }
return 0;
}

*/
/* Fibbonacci series  *******************************************using ffunction*************************
#include<stdio.h>
void fibbo(int);
int main()
{
   int a;
   printf("enter a number");
   scanf("%d",&a);
   fibbo(a);
   return 0;
}
void fibbo(int  x)
{
int prev=0,curr=1, next=0;
printf("1");
for(int i=1;i<=x;i++)
{
next=prev+curr;
printf("%d",next);
prev=curr;
curr=next;
}

}*/

// wap to find aquare of any nummbber using function***************************
/*#include<stdio.h>
int square(int);
int main()
{
  int a, sq;
   printf("enter a nummber");
   scanf("%d",&a);
   sq=square(a);
printf("square of %d is %d ",a,sq);
   return 0;
}
int square(int x)
{
  int s;
   s=x*x;
   return s;
}*/
//: wap to  find sum of the series 1!/1+2!/2+3!//3+4!/4+5!/5 using the function.*************************************************************
/*#include<stdio.h>
int fact(int);
int main()
{

   int a=5,s=0;
   for(int i=1;i<=a;i++)
   { 
      s=fact(i)/i+s;

   }
   printf("%d",s);
   return 0;
}
    int fact(int x)
    {
    int fact=1;

   for(int i=x;i>0;i--)
   {

      fact=fact*i;
   }
  return fact;
  }*/
//recursive fun to find odd numm in reverse order***********************************
/*#include<stdio.h>
void oddN(int);
int main()
{
   int a;
   printf("enter a number");
   scanf("%d",&a);
   oddN(a);
   return 0;
}
void oddN(int x)
{
   if(x==0)
   return ;
  if(x%2!=0)
  printf("%d",x);
  oddN(x-1);

}*/
/*
#include<stdio.h>
void printNatural(int);
int main()
{
   int n=10;
   printNatural(n);
   return 0;
}
void printNatural(int x)
{
   if(x==0)
   return ;
   //printNatural(x-1);
   printf("%d",x);
    printNatural(x-1);
}*/
//recursive fun to find even nummber 
/*#include<stdio.h>
void even(int);
int main()
{
   int a;
   printf("enter a number");
   scanf("%d",&a);
   even(a);
   return 0;
}
void even(int x)
{
   if(x==0)
   return ;

  if(x%2==0)
  printf("%d",x);
     even(x-1);
}*/
// recursion for square *************************************
/*#include<stdio.h>
void square(int);
int main()
   {

      int a;
      printf("enter a  number");
      scanf("%d",&a)
      square(a);
     return 0;
   }
   void square(int x)
   {
      if(x==0)
      return;

      square(x-1);
      printf("%d",x*x);
   }*/
   // recursion for decimal to binary***********************************************************8
   /*#include<stdio.h>
   void dtob(int);
   int  main()
   {
      int a =45;
      dtob(a);
      return 0;

   }
   void dtob (int x)
   {

      if(x==0)
      return;
      dtob(x/2);
      printf("%d",x%2);
   }*/
//recursion for decimal to octal***********************************************************8
   /*#include<stdio.h>
   void dtoO(int);
   int  main()
   {
     int a;

      printf("enter a number");
      scanf("%d",&a);
            dtoO(a);
      return 0;

   }
   void dtoO (int x)
   {

      if(x==0)
      return;
      dtoO(x/8);
      printf("%d",x%8);
   }*/

   // recursive function to print number inn reverse order**********************************************************
  /* #include<stdio.h>
   void rev(int);
   int  main()
   {
     int a;

      printf("enter a number");
      scanf("%d",&a);
      rev(a);
      return 0;

   }
   void rev (int x)
   {

      if(x==0)
      return;
      printf("%d",x%10);
      rev(x/10);
   }*/
   //recursive function to calculate sum of n number**************************************
  
  
  /* #include<stdio.h>
   int sumN(int);
   int  main()
   {
     int a,s=0;

      printf("enter a number");
      scanf("%d",&a);
      s=sumN(a);
      printf("%d",s);
       return 0;

   }
  int sumN (int x)
   {
      int sum=0;
      if(x==0)
      return 0;
      return x+ sumN(x-1);
   
   }*/
   // recursive fun to calculate square of n numbers************************************
   /*#include<stdio.h>
   int square(int );
   int  main()
   {
     int a,s=0;

      printf("enter a number");
      scanf("%d",&a);
      s=square(a);
      printf("%d",s);
       return 0;

   }
  int square(int x)
  {

   if(x==1)
   return 1;
   return x*x+square(x-1);
  }*/
  // recursive fun to calculate sum of given digit**************************************************
  /*#include<stdio.h>
   int sumdigit(int );
   int  main()
   {
     int a,s=0;

      printf("enter a number");
      scanf("%d",&a);
      s=sumdigit(a);
      printf("%d",s);
       return 0;

   }
  int sumdigit(int x)
  {
   int s=0;
   if(x==0)
   return 0;
   s=x%10;
   return  s+sumdigit(x/10);
    }*/
    /*#include<stdio.h>
   int fact(int );
   int  main()
   {
     int a,s=0;

      printf("enter a number");
      scanf("%d",&a);
      s=fact(a);
      printf("%d",s);
       return 0;

   }
  int fact(int x)
  {
   int s=0;
   if(x==1)
   return 1;
 return x*fact(x-1);
    }*/
    //program to calculate HCf of two numbers using recursion*********************************************************
   /* #include<stdio.h>
    int hcf(int,int);
    int main()
    {
      int a,b,min=0,s;
      printf("enter two numbers");
      scanf("%d%d",&a,&b);
    
      s=hcf(a,b);
      printf("HCFof two numbers is %d",s);
      return 0;
    }
    int hcf(int x, int y)
    {
      int min=0;
      min=x<y?x:y;
      if(min==0)
      return 0;
      

    }*/
    //recursion of fibonacci*************************************
   /* #include<stdio.h>
    int  fibbo(int);
    int main()
    {
      int a,s;
      printf("enter a numbers");
      scanf("%d",&a);
      for(int i=1;i<a;i++)
      {
      s=fibbo(i);
      printf(" %d",s);
    }
      return 0;
   }
   int fibbo(int x)
{

   if(x==0||x==1)
   return x;
   return fibbo(x-2)+fibbo(x-1);
}*/
/* sum of array size 10************************************************
#include<stdio.h>
int main()
{
   int a[10],i,sum=0;
   printf("enter 10 numbers in an array");
   for(i=0;i<10;i++)
   scanf("%d",&a[i]);
   for(i=0;i<10;i++)
   sum+=a[i];
   printf("%d",sum);
  return 0;
}*/
/*#include<stdio.h>
int main()
{
  int a[10],i,sum=0, average=0;
   printf("enter 10 numbers in an array");
   for(i=0;i<10;i++)
   scanf("%d",&a[i]);
   for(i=0;i<10;i++)
   sum+=a[i];
  average=sum/10;
   printf(" average =%d",average);
  return 0; 
} */
/* sum of even and odd numbers*********************************
#include<stdio.h>
int main()
{
  int a[10],i,sum_e=0, sum_o=0;
   printf("enter 10 numbers in an array");
   for(i=0;i<10;i++)
   scanf("%d",&a[i]);
   for(i=0;i<10;i++)
  {
   if(a[i]%2==0)
   sum_e=sum_e+a[i];
  else
  sum_o=sum_o+a[i];

  }

  printf("sum of all even numbers : %d", sum_e);
  printf("sum of all odd number is: %d", sum_o);
  return 0; 
}*********************************************************/
/*#include<stdio.h>
int main()
{
  int a[10],i, max=100;// max=-1 greatest
   printf("enter 10 numbers in an array");
   for(i=0;i<10;i++)
   scanf("%d",&a[i]);
   for(i=0;i<10;i++)
   {

      if(max>a[i]) //max<a[i]; if greatest
   
         max=a[i];
         
      

   }
  printf(" smallest value is %d", max);
   return 0;
   
}*/
/******************hcf by long division method *************************** by   recursion ******
#include<stdio.h>
int hcf(int , int );
int main()
{

int a=492, b=248, result;
if(a>b)
result=hcf(b,a%b);
else
result=hcf(a,b%a);
printf("%d", result);
return 0;
} 
int hcf(int a, int b)
{

   if(b==0)
   return a;
   hcf(b,a%b);
}*/
//armstrong*****************nummber*********************
/*#include<stdio.h>
#include<math.h>
int main()
{
   int n=1000,a,b,count=0,rem;
   int sum=0;
   a=n;
   while(a)
   {
     b=a;
     while(b)
     {

      b=b/10;
      count++;
     }
     b=a;
     while(b)
     {

      rem=b%10;
      sum=sum+pow(rem,count);
      b=b/10;
     }
     if(sum==a)
     printf("%d", sum);
     sum=0;
     rem=0;
     count=0;
     a--;
   }
return 0;
}
*/
//sorting the element******************************************
/**/
/*#include<stdio.h>
int main()
{
  int a[10],i, max=-1;
   printf("enter 10 numbers in an array");
   for(i=0;i<10;i++)
   scanf("%d",&a[i]);
   for(i=0;i<10;i++)
   {

      if(max<a[i])
   
         max=a[i]-1;    

   }
  printf(" smallest value is %d", max);
   return 0;
}*/
// find second greatest numer**********************************************************
/*#include<stdio.h>
int main()
{
  int a[10],i, j,temp=0;
   printf("enter 10 numbers in an array");
   for(i=0;i<10;i++)
   scanf("%d",&a[i]);
   for(i=0;i<9;i++)
   {

     for(j=1;j<10;j++)
     {

      if(a[i]<a[j])
      {

         temp=a[i];
         a[i]=a[j];
         a[j]=temp;
      }

     }
   }
  printf(" second greatest value is %d",a[0+8]);
   return 0;
}*/
/************************************find second smallest****************************************
#include<stdio.h>
int main()
{
  int a[10],i, j,temp=0;
   printf("enter 10 numbers in an array");
   for(i=0;i<10;i++)
   scanf("%d",&a[i]);
   for(i=0;i<9;i++)
   {

     for(j=1;j<10;j++)
     {

      if(a[i]<a[j])
      {

         temp=a[i];
         a[i]=a[j];
         a[j]=temp;
      }

     }
   }
  printf(" second greatest value is %d",a[0+1]);
   return 0;
}
*/
/*reverse the array************************************
#include<stdio.h>
int main()
{
  int a[10],i, j,temp=0;
   printf("enter 10 numbers in an array");
   for(i=0;i<10;i++)
   scanf("%d",&a[i]);
   for(i=9;i>=0;i--)
   {
        printf("%d",a[i]);
    
   }
 
   return 0;
}*/
/*************************program to find greatest numer in array by passing array************************
#include<stdio.h>
int greatestN(int[],int);
int main()
{
  int a[10],s;
  s=greatestN(a,10);
 printf("greatest number is : %d",s);
return 0;
}
int greatestN(int b[],int  n)
{
   int i,j,temp=0;
   printf("enter %d numbers ",n);
   for(int i=0;i<n;i++)
   scanf("%d",&b[i]);
   for(i=0;i<n-1;i++)

   {
         for(j=i+1;j<n;j++)
          {
             if(b[i]>b[j])
             {  
               temp=b[i];
               b[i]=b[j];
               b[j]=temp;
             }
             
          }
   }
   return b[n-1];

}*/
/**********************sorting the elemennt of array*****************************************
#include<stdio.h>
int main()
{
  int a[10],i,j, max=0;
   printf("enter 10 numbers in an array");
   for(i=0;i<10;i++)
   scanf("%d",&a[i]);
   for(i=0;i<9;i++)
   {
      for(j=i+1;j<10;j++)
      {

         if(a[i]>a[j])
         { 
            max=a[i];
            a[i]=a[j];
            a[j]=max;

         }
      }
   }
for(i=0;i<10;i++)
printf("%d",a[i]);
return 0;
}*/
// sorting by passing array*******************************************
/*#include<stdio.h>
void sort(int[],int);
int main()
{
  int a[10];
  sort(a,10);
  return 0;
}
void sort(int b[],int  n)
{
   int i,j,temp=0;
   printf("enter %d numbers ",n);
   for(int i=0;i<n;i++)
   scanf("%d",&b[i]);
   for(i=0;i<n-1;i++)
   {
         for(j=i+1;j<n;j++)
          {
             if(b[i]>b[j])
             {  
               temp=b[i];
               b[i]=b[j];
               b[j]=temp;  
             }   
          }     
   }
   for(i=0;i<n;i++)
   printf("%d", b[i]);  
}*/
/******************************
#include<stdio.h>
int main()
{
   int a[100],d,i,j,temp=0,n,b[100];
   printf("enter the size of array");
   scanf("%d",&n);

   printf("enter the element in array");
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   printf("enter the direction of rotation");
   scanf("%d",&d);
  
for(j=0;j<d;j++)
{
     temp=a[0];

   for(i=0;i<n-1;i++)
   {
     a[i]=a[i+1];
     
   }
   a[n-1]=temp;
}
for(i=0;i<n;i++)
printf("%d", a[i]);
return 0;
}
#include<stdio.h>
int main()
{
  int a[10],i, j,temp=0;
   printf("enter 10 numbers in an array");
   for(i=0;i<10;i++)
   scanf("%d",&a[i]);
   for(i=0;i<9;i++)
   {

     for(j=1;j<10;j++)
     {

      if(a[i]<a[j])
      {

         temp=a[i];
         a[i]=a[j];
         a[j]=temp;
      }

     }
   }
  printf(" second greatest value is %d",a[0+1]);
   return 0;
}
*/
/*reverse the array************************************
#include<stdio.h>
int main()
{
  int a[10],i, j,temp=0;
   printf("enter 10 numbers in an array");
   for(i=0;i<10;i++)
   scanf("%d",&a[i]);
   for(i=9;i>=0;i--)
   {
        printf("%d",a[i]);
    
   }
 
   return 0;
}*/
/*************************program to find adjacent duplicate ************************
#include<stdio.h>
int dupadj(int[],int);
int main()
{
  int a[10],s;
  
  s=duoadj(a,10);
  if(s==0)
  printf("no duplicate adjacent here!");
  else
 printf("duplicate adaject number is : %d",s);
return 0;
}
int duoadj(int b[],int  n)
{
   int i,j,temp=0;
   printf("enter %d numbers ",n);
   for(int i=0;i<n;i++)
   scanf("%d",&b[i]);
   for(i=0;i<n-1;i++)

   {
         for(j=i+1;j<n;j++)
          {
             if(b[i]==b[j])
             { 
               return b[i]; 

             }
             else{
               b[i+1];
               b[j+1];
             }
             
          }
   }
   return 0;
}*/

/***************************reverse an array by using function and display it*********************************
 * #include<stdio.h>
void rev (int[], int);
int main()
{
   int a[100],n, i;
   printf("enter size of array");
   scanf("%d", &n);
  rev(a,  n);
  return 0;
}
void rev(int b[], int n)
{
   int i;
   printf("enter %d numbers", n);
   for(i=0;i<n;i++)
      scanf("%d",& b[i]);
    for(i=n-1;i>=0;i--)
    printf("%d",b[i]);  
   
}*/
/*******************count total number of dupllicate element*************************************
 *  #include<stdio.h>
int main()
{
   int a[10],temp=0, i,j;
   printf("enter no in array");
   for(i=0;i<10;i++)
   scanf("%d", &a[i]);
   for(i=0;i<9;i++)
   {
      for(j=i+1;j<10;j++)
      {

         if(a[i]==a[j])
         temp++;
      
      }
      if (temp!=0)
            break;
   }
   if(temp==0)
   printf("there is no duplicate element");
   else
  printf("total duplicate number is %d", temp);
  return 0;
}*/
 /*#include<stdio.h>
int main()
{
   int a[5],k=0, b[5],c[10],i,j;
   printf("enter no in first array");
   for(i=0;i<5;i++)
   scanf("%d", &a[i]);
    printf("enter no in second array");
   for(j=0;j<5;j++)
   scanf("%d", &b[j]);
   for(k=0;k<10;k++)
   {
 
        if(a[i]<b[j])
        {
         c[k]=a[i];
         i++;
        }
        else{

         c[k]=b[j];
         j++;
        }

   }         
  for(k=0;k<10;k++)
 printf("%d", c[k]);
  return 0;
}*/
/****#include<stdio.h>
int main()
{

    int a[3][3], b[3][3], c[3][3],i,j;
    printf("enter the elements in first array :");
    for(i=0;i<3;i++)
    {

      for(j=0;j<3;j++)
      {

         scanf("%d",&a[i][j]);
         
         
      }
     
     
    }
    printf("enter the elements in second array :");
    for(i=0;i<3;i++)
    {

      for(j=0;j<3;j++)
      {

         scanf("%d",&b[i][j]);
            
      }
     
    }
    printf("sum of both array :");
    for(i=0;i<3;i++)
    {

      for(j=0;j<3;j++)
      {

     c[i][j]=a[i][j]+b[i][j];
     printf("%d",c[i][j]);  
      }
      printf("\n");
    }
    
return 0;
    }*/

    /****************************** count frequency of each element in c****************************************
    #include<stdio.h>
    int main() 
    {

      int a[1000],b[1000],i,j,count=0,temp=-1,n;
      printf("enetr size of  array");
      scanf("%d",&n);
      printf("enter element in array");
      for(i=0;i<n;i++)
      scanf("%d", &a[i]);
      

      for(i=0;i<n;i++)
      
      { count =1;
      if(a[i]!=-1)
      {
        for(j=i+1;j<n;j++)
        {
         if(a[i]==a[j])
         {
         count ++;
         a[j]=-1;
         }
        }
         
       //b[i]=count;
      }
       b[i]=count;
      }


   printf("-----------------------------\n");
   printf("frequency is:\n");
   printf("-------------------------------\n")  ;
     for(i=0;i<n;i++)
    {
      if(a[i]!=temp)
      printf("  %d|| %d\n", a[i],b[i]);
    }
    return 0;
    }*/
/************#include<stdio.h>
    int main() 
    {

      int a[1000],b[1000],i,j,n ,temp;
      printf("enetr size of  array");
      scanf("%d",&n);
      printf("enter element in array");
      for(i=0;i<n;i++)
      scanf("%d", &a[i]);
      

      for(i=0;i<n;i++)
      
      { 
     
        for(j=i+1;j<n;j++)
        {
         if(a[i]==a[j])
        temp=1;
        else
        {
        temp=0;
        b[i]=a[i];
      
        }
        }
         
       
      }
     
if(temp==0)
{
for(i=0;i<10;i++)
printf("%d",b[i]);
 
}  
    return 0;

    }
***************/
/*************
#include<stdio.h>
int main()
{

    int a[3][3], b[3][3], c[3][3],i,j;
    printf("enter the elements in first array :");
    for(i=0;i<3;i++)
    {

      for(j=0;j<3;j++)
      {

         scanf("%d",&a[i][j]);
         
         
      }
     
     
    }
    printf("enter the elements in second array :");
    for(i=0;i<3;i++)
    {

      for(j=0;j<3;j++)
      {

         scanf("%d",&b[i][j]);
            
      }
     
    }
    printf("--------------------------------------");
    printf("sum of both array :\n");
    for(i=0;i<3;i++)
    {

      for(j=0;j<3;j++)
      {

     c[i][j]=a[i][j]+b[i][j];
     printf("|%d\t",c[i][j]);  
    
      }
      printf("\n");
    }
    printf("--------------------------------------"); 
    
return 0;
    }***************/


/********************  Find the product of a given number**************************************
#include<stdio.h>
int main()
{

    int a[3][3], b[3][3], c[3][3],i,j, sum=0;
    printf("enter the elements in first array :");
    for(i=0;i<3;i++)
    {

      for(j=0;j<3;j++)
      {

         scanf("%d",&a[i][j]);
         
         
      }
     
     
    }
    printf("enter the elements in second array :");
    for(i=0;i<3;i++)
    {

      for(j=0;j<3;j++)
      {

         scanf("%d",&b[i][j]);
            
      }
     
    }
    printf("----------------------");
    printf("product  of both array :\n");
    for(i=0;i<3;i++)
    {

      for(j=0;j<3;j++)
      {
         for(int k=0;k<3;k++)
         {  
            sum= sum+a[i][k]*b[k][j];
          
    
         }
         c[i][j]=sum;
         sum=0;
    
      }
      printf("\n");
    }
    printf("-------------\n");
     for(i=0;i<3;i++)
    {

      for(j=0;j<3;j++)
      {
         printf("|%d", c[i][j]);;
         printf("| " );
      }

     printf("\n");
    }   
printf("--------------");
return 0;
}*************************************/
/************************************find the transpose of a given matrix*****************************
 #include<stdio.h>
int main()
{

    int a[3][3], b[3][3], c[3][3],i,j, sum=0;
    printf("enter the elements in first array :");
    for(i=0;i<3;i++)
    {

      for(j=0;j<3;j++)
      {

         scanf("%d",&a[i][j]);
         
         
      }
     
     
    }
    
    printf("----------------------");
    printf("trannspose oof mmatrix is :\n");
    for(i=0;i<3;i++)
    {

      for(j=0;j<3;j++)
      {
      
          c[i][j]=a[j][i];

      }
      printf("\n");
    }
    printf("-----------\n");
     for(i=0;i<3;i++)
    {

      for(j=0;j<3;j++)
      {
         printf("|%d", c[i][j]);;
         printf("| " );
      }

     printf("\n");
    }   
printf("------------");
return 0;
}******************************/
/*************************************** sum of left diagonal**********************
#include<stdio.h>
int main()
{

    int a[3][3],i,j, sum=0;
    printf("enter the elements in  array :");
    for(i=0;i<3;i++)
    {

      for(j=0;j<3;j++)
      {

         scanf("%d",&a[i][j]);  
      }    
     
    }
    
    
    printf("sum of diagonal mmatrix is :\n");
    for(i=0;i==0;i++)
    {

      for(j=2;j>=0;j--)
      {
      
        sum=sum+a[i][j];
       i++;

      }
      
      printf("\n");
    }
    printf("sum is  %d", sum);
    
return 0;
}***************************************************************/

/****************************************sum of rows and columns
#include<stdio.h>
int main()
{

    int a[3][3],i,j, sum=0;
    printf("enter the elements in  array :");
    for(i=0;i<3;i++)
    {

      for(j=0;j<3;j++)
      {

         scanf("%d",&a[i][j]);  
      }    
     
    }
    
    
    printf("sum of row*********************** :\n");
    for(i=0;i<3;i++)
    {

      for(j=0;j<3;j++)
      {
      
        sum=sum+a[i][j];
       
    
      }
     printf(" sum of rows is: %d",sum);
      sum=0;
      
      printf("\n");
    }
   
    printf("sum of  column*********************** :\n");
    for(i=0;i<3;i++)
    {
   for(j=0;j<3;j++)

     {
      
        sum=sum+a[j][i];
      
      }
     printf(" sum of colums %d",sum);
      sum=0;
       printf("\n");
    }   
return 0;
}****************************************************/
/*********************************lower triangular matrix**************************
#include<stdio.h>
int main()
{

    int a[3][3],i,j, sum=0;
    printf("enter the elements in  array :");
    for(i=0;i<3;i++)
    {

      for(j=0;j<3;j++)
      {

         scanf("%d",&a[i][j]);  
      }    
     
    }
    
    
    printf("lower triangular matrix is*********************** :\n");
    for(i=0;i<3;i++)
    {

      for(j=0;j<3;j++)
      {
      
        if(i<j)
        printf("0");
       else
       printf("%d",a[i][j]);
    
      }
    
      
      printf("\n");
    }
return 0;
}**********************************************************************************/
/*#include<stdio.h>
int main()
{

    int a[3][3],i,j, sum=0;
    printf("enter the elements in  array :");
    for(i=0;i<3;i++)
    {

      for(j=0;j<3;j++)
      {

         scanf("%d",&a[i][j]);  
      }    
     
    }
    
    
    printf("upper triangular matrix is*********************** :\n");
    for(i=0;i<3;i++)
    {

      for(j=0;j<3;j++)
      {
      
        if(i>j)
        printf("0");
       else
       printf("%d",a[i][j]);
    
      }
    
      
      printf("\n");
    }
return 0;
}*/
 /*/printing numbers in string****************
 #include<stdio.h>
int main()
{
   char str[10]={'b','h','o','p','a','l'};
 //  for(int i=0;str[i];i++)
   //printf("%c",str[i]);
   //printf("%s", str);

   return 0;
}**************/
/*count lengthh of the  strinng ********************
 #include<stdio.h>
int main()
{
   char str[10]={'b','h','o','p','a','l'};
   for(int i=0;str[i];i++)
   printf("%d",i);
   return 0;
}******************************************************/
/**#include<stdio.h>
int main()
{
   char str[10]={'b','h','o','p','a','l'};
 char a[2];
   for(int i=0;str[i];i++)
   scanf("%c", &)
   printf("%d",i);
   return 0;
}*/
/*#include<stdio.h>
int main()
{
   char str[10]={'b','h','o','p','a','l'};
 char a[2];
 int count=0;
 printf("enter a character");
 fgets(a,2,stdin);
   for(int i=0;str[i];i++)
   {

      if(a[0]==str[i]);
      count ++;
   }
   printf("%d",count);
   return 0;
}*/