#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,n1; 
           double m, nc,w,g,g1;
    printf("\t\t\t\tComplex Calculation\n\n");
    
    printf("So,lets start the calculation\n\n");
    printf("Press number to seclation:\n");
    printf("1.Physic\n2.Camistry\n");
    printf("Enter your option number:");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
    printf("\t\t\t Physic\n\n");
    printf("1.H.S.C\n2.S.S.C\n");
    scanf("%d",&n1);
    switch (n1)
    {
    case 1:
    printf("\t\t\t This is only H.S.C\n");
    printf("1.First Part\n2.Second Part\n");
    int f;
    scanf("%d",&f);
    switch (f)
    {
    case 1:
        printf("1.Chapter1\n");
        int c;
        scanf("%d",&c);
        switch (c)
        {
        case 1:
        printf("1.g percentage error\n");
        int r;
        scanf("%d",&r);
        switch (r)
        {
        case 1:
    
             printf("g percentage error\n");
             
             printf("Etnet your Weight w:");
             scanf("%lf",&w);
             printf("Enter the mass m:");
             scanf("%lf",&m);
             printf("Measurable value:");
             scanf("%lf",&nc);
             
             g=w/m;

             printf("\nThe g is:%.2lf",g);
               g1=g-nc;
               g1=(g1/g)*100;
            
            printf("\n\n\t\tAns:g percentage error/g1=%0.3lf%%\n",g1);
     
            break;
        
        default:
            break;
        }

        
            break;
        
        default:
            break;
        }
        break;
    case 2:
    break;

    default:
        break;
    }
    case 2:
    break;

    default:
    printf("Thank you");
        break;
    }
        break;
    case 2:
    printf("\t\t\tCamistry\n\n");
    break;
    default:
           printf("\t\t Thank you to visiting our project\n");
        break;
    }

    return 0;
}
