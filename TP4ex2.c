#include <stdio.h>
void copy(int a, int b, int* a_copie, int* b_copie);
void swap(int* x, int* y);

int main(void)
{
    int a = 10, b = 20, a_copie, b_copie;
    printf("a = %d, b = %d, a_copie = %d, b_copie = %d \n",a,b,a_copie,b_copie);
    
    copy(a, b, &a_copie, &b_copie);
    printf("a = %d, b = %d, a_copie = %d, b_copie = %d \n",a,b,a_copie,b_copie);
    
    swap(&a, &b);
    printf("a = %d, b = %d, a_copie = %d, b_copie = %d \n",a,b,a_copie,b_copie);

    return 0;
}

void copy(int a, int b, int* a_copie, int* b_copie)
{
    *a_copie = a;
    *b_copie = b;
    
    return;
}

void swap(int* x, int* y)
{
    int tmp = *x;
    *x = *y;
    *y = tmp;
    
    return;
}