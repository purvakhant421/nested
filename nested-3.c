#include<stdio.h>  
    int main(){
     
     int m,n,o,p;
      printf("value of M:");
      scanf("%f",&m);
      printf("value of N:");
      scanf("%f",&n);
      printf("value of O:");
      scanf("%f",&o);
      printf("value of P:");
      scanf("%f",&p);
      
    if (m>n && m>o && m>p)
    {
        printf("M is max",m);
    }
    else{
        if (n>m && n>o && n>p)
        {
        printf("N is max",n);
        }
        else{
            if (o>m && o>n && o>p)
            {
                printf("O is max",o);
            }
            else{
                printf("P is max",p);
            }
        }
    }
    return 0;
}