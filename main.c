#include <stdio.h>
#include<conio.h>
#include <stdlib.h>


int main()
{
    int p,m,TU1[5],x[5],TU2[5],MU1[5],q[5],MU2[5],y[5],price_1,price_2,amount,k=0,count,p_1,p_2,r,s,w,j,z;
    int u[5]={1,2,3,4,5,};

//getting user inputs
   printf("Enter the total utility values of first item - (TU1)...\n\n");
   for(w=0;w<5;w++)
    {
       printf("Enter the total utility value of first item-unit %d :",w+1);
       scanf("%d",&TU1[w]);
    }

   printf("\nEnter the total utility values of second item - (TU2)... \n\n");
   for(w=0;w<5;w++)
    {  printf("Enter the total utility value of second item-unit %d :",w+1);
       scanf("%d",&TU2[w]);
    }

    printf("\nEnter price for first item :");
    scanf("%d",&price_1);
    printf("\nEnter price for second item :");
    scanf("%d",&price_2);

    printf("\nEnter your budget amount :");
    scanf("%d",&amount);
    printf("\n");


//calculating marginal utility

    {  for(w=1;w<5;w++)
       MU1[w]= TU1[w]- TU1[w-1];
    }


    {  for(w=1;w<5;w++)
       MU2[w]= TU2[w]- TU2[w-1];
    }

//calculating marginal utility divided by price
       for(w=0;w<5;w++)
    {  if(w==0)
    {   x[w]= TU1[w]/price_1;

    }else
    {  for(z=1;z<5;z++)
       x[w]= (TU1[w]- TU1[w-1])/price_1;

    }}

      for(w=0;w<5;w++)
    {if(w==0)
    {   y[w]=TU2[w] /price_2 ;

    }else
    {  for(z=1;z<5;z++)
       y[w]= (TU2[w]- TU2[w-1])/price_2 ;

    }}
  //display as a table
        printf("Units\tTU1\tTU2\tMU1\tMU2\tMU1/P1\tMU2/P2\n");

     for(z=0;z<5;z++)
     {
         if(z==0)
         {
          printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\n",u[z],TU1[z],TU2[z],TU1[z],TU2[z],x[z],y[z]);
         }else
         {
             printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\n",u[z],TU1[z],TU2[z],MU1[z],MU2[z],x[z],y[z]);
         }
     }


//comparing marginal utility divided by price of two items

  for(w=0; w<5; w++)
    {for(z=0; z<5; z++)
     {if(x[w]==y[z])
     {count = 0;
      for(p=0; p<k; p++)
      {if(x[w]==q[p])
        count++;}
        if(count==0)
        {q[k] = x[w];
        k++;}
      }
     }
    }
//printing same common margin values
    printf("\nCommon value of marginal utility divided by price of two items:");
    for(w=0; w<k; w++)
       {{
        printf("%d \n", q[w]);
       }
        for(z=1;z<6;z++)

         {
            if(q[w]==x[z])
           {printf("\nConsumed units of First Item:%d\n",z+1);
           r = z+1;
           p_1 = r*price_1 ;
           }}

     for(m=1;m<6;m++)
      {
           if(q[w]==y[m])
           {printf("\nConsumed units of Second Item:%d\n",m+1);
           s = m+1;
           p_2 = s*price_2 ;
      }
    }

           int t = p_1 + p_2 ;

//Printing the consumption bundle
    for(z=0;z<k; z++)
    {
        if(t == amount)
       {
          int ConFirst = r;
          int ConSecond = s;

       }

        }printf("\n\nThe Actual Consumption Bundle...\n\nFirst Item :%d\nSecond Item :%d\n\n",r,s);


       printf("Thank you!");

    return 0;
}}




