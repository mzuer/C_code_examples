
#include <stdio.h>
#include <stdlib.h>

int main(void){
    int dec;
    int i;
    char exa[50];

while (1){
    dec = 0;
    for (i = 0;i < 50;i++){
        exa[i] = 0;
    }
    i = 0;
    scanf("%d", &dec);

    while ((dec / 16) != 0){
        exa[i] = dec % 16;
        dec = dec / 16;
        i++;
    }

    exa[i] = dec;

while (i >= 0){
    if (exa[i] == 15){
        printf("F");
    }

    else if (exa[i] == 14)    {
        printf("E");
    }

    else if (exa[i] == 13){
        printf("D");
    }
    else if (exa[i] == 12){
        printf("C");
    }
    else if (exa[i] == 11){
        printf("B");
    }
    else if (exa[i] == 10){
        printf("A");
    }
    else{
        printf("%d", exa[i]);
    }

    i--;
    }

    printf("\n");
    }

    return 0;
}
