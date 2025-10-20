#include <stdio.h>

int main(void){
    int num[3];
    int mid;
    int min = 1000001;
    int max = 0;
    for(int i = 0; i < 3; i++){
        scanf("%d", &num[i]);
        if(min > num[i]) min = num[i];
        if(max < num[i]) max = num[i];
    }
    for(int i = 0; i <3; i++){
        if(num[i] != min && num[i] != max) mid = num[i];
    }
    printf("%d %d %d", min, mid, max);
    return 0;
}