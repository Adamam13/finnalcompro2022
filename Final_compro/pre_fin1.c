#include <stdio.h>
#include <string.h>
 
int main(){
    char name[10][200];
    char dummy[200];
    for (int i = 0; i < 10; i++){
        scanf(" %s", name[i]);
    }
    for(int i = 0; i < 10; i++){
        for(int j = i+1; j < 10; j++){
            if (strcmp(name[j], name[i]) <= 0){
                strcpy(dummy, name[j]);
                strcpy(name[j], name[i]);
                strcpy(name[i], dummy);
            }
        }
    }
    for (int i = 0; i < 10; i++){
        printf("%s\n", name[i]);
    }
    return 0;
}