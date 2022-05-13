#include <stdio.h>
#include <string.h>
 
struct Book {
    char id[10];
    char name[100];
    char author[100];
};

int main(){
    int n;
    int i;
    char find[3];
    scanf("%d", &n);
    struct Book p[n];
    scanf("%s", find);
    for (i = 0; i < n; i++){
        scanf("%s %s %s", p[i].id, p[i].name, p[i].author);
    }
    for(i = 0; i < n; i++){
        if(strcmp(find, p[i].id) == 0){
            printf("%s %s %s", p[i].id, p[i].name, p[i].author);
            return 0;
        }
    }
    printf("Not Found");
    return 0;
}