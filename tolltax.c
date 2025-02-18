#include<stdio.h>
int main()
{
    int i,n,total_tax;
    char vehicle;
    printf("enter the number of vehicles:");
    scanf("%d",&n);
    
    for(i=0;i<n;i+1)
    {
        printf("enter the vehicle type(car=c/bus=b/truck=t/bike=k):");
        scanf(" %c",&vehicle);
        
        switch(vehicle)
        {
            case 'c':
            {
                total_tax+=50;
                break;
            }
            case 'b':
            {
                total_tax+=80;
                break;
            }
            case 't':
            {
                total_tax+=100;
                break;
            }
            case 'k':
            {
                total_tax+=20;
                break;
            }
            default:
            {
                 printf("invalid input");
                 break;
            }
        }
    }
    printf("total tax=%d",total_tax);
         return 0;
        
}
