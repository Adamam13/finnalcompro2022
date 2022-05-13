#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    char text[2005];
    int num = 0;
    scanf("%[^\n]", text);
    for (int i = 0; i < strlen(text); i++){
        if((text[i] == 'c' || text[i] == 'C') && (text[i+1] == 'a' || text[i+1] == 'A') && (text[i+2] == 't' || text[i+2] == 'T')){
            if (num >= 1){
                printf(", ");
            }
            printf("%d", i);
            num++;
        }
    }
    return 0;
}