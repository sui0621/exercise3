#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
int dice1;
int dice2;
int add;
char name[10];

srand((unsigned int)time(NULL));
printf("What is your name?\n");
scanf("%s",name);
printf("Hello,%s!\n",name);

printf("Rolling dice...\n");
    dice1 = rand()%6+1;
    dice2 = rand()%6+1;
    printf("Die 1: %d\n",dice1);
    printf("Die 2: %d\n",dice2);
    add = dice1 + dice2;
    printf("Total value: %d\n",add);

    if(add > 7) printf("You won\n");
    else printf("You lost\n");


}
