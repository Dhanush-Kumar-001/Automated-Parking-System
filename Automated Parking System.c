#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[3][3]={},i,j,r,c,s,n,m,x,flag=0,no_of_cars_parked=0,no_of_cars_taken=0;
    r=3;
    c=3;
    x=r*c;
    for(i=0;;i++)
    {
        printf("Parking(1) or Taking(2) = ");
        scanf("%d",&n);
        if(n==1)
        {
            for (i=0;i<r;i++)
            {
                flag=0;
                for(j=0;j<c;j++)
                {
                    m=i * c + j + 1;
                    if(a[i][j]==0)
                    {
                        a[i][j]=m;
                        printf("Yours Parking slot number : %d\n",m);
                        no_of_cars_parked++;
                        flag=1;
                        break;
                    }
                    else if(m==x)
                    {
                        printf("Parking slot is full !!\n");
                    }
                    else
                    {
                        continue;
                    }
                }
                if(flag==1)
                {
                    break;
                }
                else
                {
                    continue;
                }
            }
        }
        else if (n==2)
        {
            printf("Enter your parking number = ");
            scanf("%d",&n);
            for (i=0;i<r;i++)
            {
                flag=0;
                for(j=0;j<c;j++)
                {
                    m=i * c + j + 1;
                    if(a[i][j]==n)
                    {
                        a[i][j]=0;
                        no_of_cars_taken++;
                        printf("Thank You For choosing our parking service!!\n");
                        flag=1;
                        break;
                    }
                    else if(m==x)
                    {
                        printf("Number Invaild Try Again\n");
                        flag=1;
                        break;
                    }
                    else
                    {
                        continue;
                    }
                }
                if(flag==1)
                {
                    break;
                }
                else
                {
                    continue;
                }
            }

        }
        else if (n==7)
        {
            printf("No of parking services used = %d\n",no_of_cars_parked);
            printf("No of cars occupied = %d\n",no_of_cars_parked-no_of_cars_taken);
            printf("No of empty slot = %d\n",(r*c)-(no_of_cars_parked-no_of_cars_taken));
        }
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                s=a[i][j];
                printf("%d ",s);
            }
            printf("\n");
        }
    }
}