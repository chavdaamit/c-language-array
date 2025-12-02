#include <stdio.h>

#include<ctype.h>

int main(){



    char alphabet[]="ABCDE";

    char lowercase[sizeof(alphabet)];

    int i;

    for(i=0;alphabet[i]!='\0'; i++){

        lowercase[i]=tolower(alphabet[i]);
    }

    lowercase[i]='\0';

    printf("lowercase %s",lowercase);



    return 0;
}