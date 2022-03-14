#include<stdio.h>
#include<string.h>
void ballbrickes()
{
    int i,j,k,n,bcount;
    int a,b;
    a=0,b=1;
    char ch='y';
    char matrix[10000][10000],d;
    char choose[20];
    char z=a+'0', T=b+'0';
    printf("enter the size of the N*N matrix:");
    scanf("%d",&n);
    //fill matrix to zero value
    for(i=0;i<=n;i++)
        for(j=0;j<=n;j++)
             matrix[i][j]='0';
    //wall creation
    //fill wall value to wvg
    i=0;
    for(j=0;j<=n;j++)
        matrix[i][j]='w';
        j=0;
        for(i=0;i<=n;i++)
          matrix[i][j]='w';
          j=6;
           for(i=0;i<=n;i++)
            if(i==n/2)
               matrix[i][j]='0';
             else
               matrix[i][j]='g';
    //Enter value and position
     while(ch=='y')
      {
          printf("enter the bricks position & the bricks type:");
          scanf("%d%d%s",&i,&j,&d);
          printf("Do you want to continue(Y or N)?");
          scanf("%c",&ch);
      }
      printf("enter the ball count:");
       scanf("%d", & bcount);
     // display
      //play
        while(1);
      {
          printf("enter the direction in which the ball need to transvers:");
          scanf("%s",choose);
          if(strcmp(choose,"ST")==0)
                {
                    ST();
                }
          else if(strcmp(choose,"RD")==0)
               {
                   RD();
               }
          else 
             {
              (strcmp(choose,"LD")==0);
              
                  LD();
              }
                void(ST())
               {
                   i=n-1; j=n/2;
                  if (bcount > 0)
                     {
                     while(i!=0)
                     {
                      if(strcmp (matrix[i][j],"0")==0)
                      {
                         i--;
                       }
                     
                     else if (strcmp(matrix[i][j], "w")==0)
                      {
                        bcount--;
                        ST();
                      }
                         
             else if (strcmp (matrix[i][j], DC)==0);
                      {

                         for (k=0; k<n; k++)
                         matrix[i][j]=a+'0';
             else if (strcmp(matrix[i][j],DC)==0)
                       {
                           for(k=0;k<n;k++)
                         matrix[i-7][j]=a+'0';
                         matrix[i+7][j]=a+'0'; 
                         matrix[i][j]=a+'0';
                       }
                      
                else if (strcmp (matrix[i][j], B)==0);
                      {

                       matrix[i][j] = matrix[i][j] - T;
                       bcount++;
                      }

                 else

                 {
                     matrix[i][j] = matrix[i][j]-T; 
                     ST();
                 }

                       printf ("You Win HURRY");
                 }

                 else
                 {
                  printf ("Your lost");
                }
                }

