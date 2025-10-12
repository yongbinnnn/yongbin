#include <stdio.h>

int main(void){
    int note;
    scanf("%d", &note);
    if(note == 1){
        for(int i = 0; i < 7; i++){
            scanf("%d", &note);
            if(note == i+2){
                if(i == 6) printf("ascending");
            }
            else{
                printf("mixed");
                break;
            }
            
        }
    }
    else if(note == 8){
        for(int i = 0; i < 7; i++){
            scanf("%d", &note);
            if(note == 7-i){
                if(i == 6) printf("descending");
            }
            else{
                printf("mixed");
                break;
            }
        }
    }
    else
    {
        printf("mixed");
    }
    
    return 0;
}