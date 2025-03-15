#include <iostream>

void update(int *a,int *b);

int main() {
    int a ,b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

void update(int *a,int *b) {
    int aux1 = *a, aux2 = *b;

    *a = aux1 + aux2;

    if (aux1 - aux2 >= 0) *b = aux1 - aux2;
    else *b = -(aux1 - aux2);   
}