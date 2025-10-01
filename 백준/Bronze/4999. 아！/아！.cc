#include <stdio.h>
#include <string.h>

int main(void)
{
    char jae[1000];
    char doc[1000];
    scanf("%s %s", jae, doc);
    if(strlen(jae) >= strlen(doc)){
        printf("go");
    }
    else{
        printf("no");
    }
    return 0;
}