#include <stdio.h>
#include <string.h>
//Find it here -> https://www.quora.com/How-do-you-make-text-blink-on-and-off-in-Linux-bash

int main(){

    int n =0;
    char curword[100];
    int curChar;

    while ((curChar = getchar()) != EOF){ // διαφορο του EOF
        

        if((curChar >= 'A' && curChar <= 'Z') || (curChar >= 'a' && curChar <= 'z') ){
            curword[n] = curChar;
            n++;
        }

        else{
            curword[n] = '\0'; //τελος
            if(strcmp(curword , "Blinky") == 0){
                printf("\e[5m%s%c\e[25m",curword, curChar); // για καποιο λογο δε δουλευει στο vscode

            }
            else{
                printf("%s%c", curword , curChar);
            }
            n = 0;
        }
    }
}