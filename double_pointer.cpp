#include<stdio.h>
#include<stdlib.h>

int main(){
    int n = 20, *p, **pp; 
    /*
    n->20  &  address = 000000000061FE1C
    
    int *p is a pointer address.
    p is point to "n's address" -> 000000000061FE1C
    
    int **p is a double pointer address.
    pp is point to "p" (and then point to "n")
    It's called double pointer.
    */
    p = &n;
    pp = &p;
    
    // Address check
    printf("Address of n: %p\n", &n);
    printf("Address of p: %p\n", p);
    printf("Address of pp: %p\n", *pp);

    // Value check
    printf("Value of n: %d\n", n);
    printf("Value of p: %d\n", *p);
    printf("Value of pp: %d\n", **pp);

    printf("Print the \"n\"\n");
    printf("n=%d\n", n);
    printf("&n=%p\n", &n);

    printf("Print the \"p\"\n");
    printf("*p=%d\n", *p);
    printf("p=%p\n", p);
    printf("&p=%p\n", &p);

    printf("Print the \"pp\"\n");
    printf("**pp=%d\n", **pp);
    printf("*pp=%p\n", *pp);
    printf("pp=%p\n", pp);
    printf("&pp=%p\n", &pp);

    system("pause");
}