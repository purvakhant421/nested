#include<stdio.h>
int main(){
    int m,n,o,p,q;
    printf("value of M:");
    scanf("%d",&m);
    printf("value of N:");
    scanf("%d",&n);
    printf("value of O:");
    scanf("%d",&o);
    printf("value of P:");
    scanf("%d",&p);
    printf("value of Q:");
    scanf("%d",&q);
    if (m<n && m<o && m<p && m<q)
    {
    printf("M is min",m);
    }
    else{
        if (n<m && n<o && n<p && n<q)
        {
        printf("N is min",n);
        }
        else{
            if (o<m && o<n && o<p && o<q)
            {
            printf("O is min",o);
            }
            else{
                if (p<m && p<n && p<o && p<q)
                {
                printf("P is min",p);
                }
                else
                {
                printf("Q is min",q);
                }
            }
        }
    }
    return 0;
}