#include <stdio.h>
#include <string.h>

struct Entity {
    int id;
    char name[200];
    char type[20]; // ชนิดของ Entity มี "player" และ "item"
    char player_character[50];
    double distance;
    int is_glow;
    int is_alive;
};

int main(){
    int n;
    char cmd[20];
    scanf("%d", &n);
    struct Entity p[n];
    for (int i = 0; i < n; i++){
        scanf("%d %s %s %s %lf %d %d", &p[i].id, p[i].name, p[i].type, p[i].player_character, &p[i].distance, &p[i].is_glow, &p[i].is_alive);
    }
    scanf("%s", cmd);
    if (strcmp(cmd, "Glow") == 0){
        for (int i = 0; i <n; i++){
            p[i].is_glow = 1;
            printf("%d %s %s %s %.2lf %d %d\n", p[i].id, p[i].name, p[i].type, p[i].player_character, p[i].distance, p[i].is_glow, p[i].is_alive);
        }
    }
    else if (strcmp(cmd, "KillThemAll") == 0){
        for (int i = 0; i <n; i++){
            if(strcmp(p[i].type, "player") == 0){
                p[i].is_alive = 0;
            }
            else p[i].is_alive = 1;
            printf("%d %s %s %s %.2lf %d %d\n", p[i].id, p[i].name, p[i].type, p[i].player_character, p[i].distance, p[i].is_glow, p[i].is_alive);
        }
    }
    else if (strcmp(cmd, "NearestP") == 0){
        int id_ans;
        char name_ans[20];
        double d_ans = 999999999;
        for (int i = 0; i < n; i++){
            if(strcmp(p[i].type, "player") == 0){
                if (d_ans >= p[i].distance){
                    d_ans = p[i].distance;
                    id_ans = p[i].id;
                    strcpy(name_ans, p[i].name);
                }
            }
        }
        printf("%d %s %.2lf", id_ans, name_ans, d_ans);
    }
    else if (strcmp(cmd, "NearestItem") == 0){
        int id_ans;
        char name_ans[20];
        double d_ans = 9999999;
        for (int i = 0; i < n; i++){
            if(strcmp(p[i].type, "item") == 0){
                if (d_ans >= p[i].distance){
                    d_ans = p[i].distance;
                    id_ans = p[i].id;
                    strcpy(name_ans, p[i].name);
                }
            }
        }
        printf("%d %s %.2lf", id_ans, name_ans, d_ans);
    }
    return 0;
}