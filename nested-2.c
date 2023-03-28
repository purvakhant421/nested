#include<stdio.h>  
    int main(){
     
     int m,n,o;
      printf("value of M:");
      scanf("%f",&m);
      printf("value of N:");
      scanf("%f",&n);
      printf("value of O:");
      scanf("%f",&o);
      
     if (m<n && m<o)
    {
        printf("M is min",m);
    }
    else{
        if (n<m && n<o)
        {
        printf("N is min",n);
        }
        else{
        printf("O is min",o);
        }
    }
    return 0;
}
     
    