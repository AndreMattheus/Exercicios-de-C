#include <stdio.h>

int main(){
    int thor, starlord, spider;

    scanf("%d %d %d", &thor, &starlord, &spider);

    if(thor == starlord && thor == spider){
        printf("Empate\n");
    }
    else if(thor != starlord && thor != spider){
        printf("Thor WINS!\n");
    }
    else if(starlord != thor && starlord != spider){
        printf("Starlod WINS!\n");
    }
    else {
        printf("Spider WINS!\n");
    }
    return 0;
}