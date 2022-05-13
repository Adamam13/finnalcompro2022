#include <stdio.h>

int main(){
    double a, b, c;
    scanf("%lf\n", &a);
    scanf("%lf\n", &b);
    scanf("%lf", &c);
    printf("%.2lf", 0.5*a*(b+c));
    return 0;
}