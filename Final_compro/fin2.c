#include <stdio.h>

void swap(float *a, float *b){
    float c;
    c = *a;
    *a = *b;
    *b = c;
}

int main(){
    int num;
    scanf("%d", &num);
    float h[num];
    for (int i =0; i <num; i++){
        scanf("%f", &h[i]);
    }
    for (int i = 0; i < num; i ++){
        for (int j = i+1; j < num; j++){
            if(h[i] <= h[j]){
                swap(&h[i], &h[j]);
            }
        }
    }
    for (int i=0; i < num; i++){
        printf("%.2f\n", h[i]);
    }
    return 0;
}