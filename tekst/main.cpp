#include <iostream>
#include "text.h"

void menu(void) {
    printf("Insert text - 1\n");
    printf("Display text - 2 \n");
    printf("Length of text - 3 \n");
    printf("Small letters into big letters - 4 \n");
    printf("Big letters into small letters - 5 \n");
    printf("0-EXIT\n");
    printf("Select an option:  ");
}

int main (int argc, char const *argv[]) {

    char text[100] = "";
    int option=0;
    do{
        menu();
        scanf("%d", &option);
        clean();
        switch (option) {
            case 0:
                break;
            case 1:
                enterText(text);
                break;

            case 2:
                printText(text);
                break;

            case 3:
                printf("Text length: %d\n", textLenght(text));
                break;

            case 4:
                upperCase(text);
                break;
            case 5:
                lowerCase(text);
                break;
        }

    }while (option!=0);
    printf("THE END");

    return 0;
}