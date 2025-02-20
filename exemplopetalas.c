#include <stdio.h>

int main(){
    int petalas, heroi; 
    
    scanf("%d %d", &petalas, &heroi);

    if(petalas % 2 == 0){ 
        printf("Mal me quer! Estalo!\n");

        // Verificar quem foi a vítima do estalo
        switch(heroi){
            case 0: printf("Iron Man\n"); break;
            case 1: printf("Spider\n"); 
                break;
            case 2: printf("Capitão América\n"); break;
            case 3: printf("Thor\n"); break;
            case 4: printf("Huck\n"); break;
            default: printf("Herói Aleatório\n");
        }
    }
    else {
        printf("Bem me quer! #xatiado\n");
    }
return 0;
}