#include <iostream>

using namespace std;

int main() {
    
    int entero;
    long entero_long;
    char caracter;
    float punto_flotante;
    double real;
    
    scanf("%d %ld %c %f %lf", &entero, &entero_long, &caracter, &punto_flotante, &real);
    printf("%d\n%ld\n%c\n%f\n%lf\n",entero, entero_long, caracter, punto_flotante, real);
    return 0;
}