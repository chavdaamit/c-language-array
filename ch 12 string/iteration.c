#include <stdio.h>

int main(){

char letter[6]="hello";

printf("%c\n",letter[0]);
printf("%c\n",letter[1]);
printf("%c\n",letter[2]);
printf("%c\n",letter[3]);
printf("%c\n",letter[4]);



for(int i=0; i<5;i++){

    printf("%c\n",letter[i]);
}




    return 0;
}