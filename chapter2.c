// Opretors

#include <stdio.h>

int main()
{
    //Arithmatic Opretors
    int a=12,b=6;
    printf("%d\n",a+b);
    printf("%d\n",a-b);
    printf("%d\n",a*b);
    printf("%d\n",a/b);
    printf("%d\n",a%b);

    //Type Casting
    int c=5,d=7;
    printf("%f\n",(float)c/d);
    printf("%d\n",c/d);

    // Associavity(BODMAS Rule)
    printf("%d\n",5+2/2*3);

    // Reletional Opretors(Conditional Opretor)
    int x=4,m=7;
    printf("%d\n",x<m);
    printf("%d\n",x<=m);
    printf("%d\n",x>m);
    printf("%d\n",x>=m);
    printf("%d\n",x!=m);
    printf("%d\n",x==m);

    // Logical Opretors(Conditionl Opretors)
    int q=6,r=7;
    printf("%d\n",(q+7==7)&&(r+6!=6));
    printf("%d\n",(q+7==q+r)||(r+6==8));
    printf("%d\n",!(q+7==7)&&(r+6==6));
    return 0;
}