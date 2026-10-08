/**
 * File: main.c
 * Brief: minimat
 * Author: Julian Bolan
 * Date: 10/1/2026
 * Compile: gcc main.c vectorOps.c vectorOps.h
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main(int argc, char* argv[]) {

    char* input;
    fgets(input, 50, stdin);

    char* token1 = strtok(input, ", ");
    char* token2 = strtok(NULL, ", ");
    char* token3 = strtok(NULL, ", "); 
    char* token4 = strtok(NULL, ", ");
    char* token5 = strtok(NULL, ", ");

    // token1 = input[strlen(token1)-1] = '\0'; // no -1?
    printf("%s", token1); // test

    if (!strcmp(token1, "quit")) {
        printf("Program terminated");
        return 0;
    } else if(!strcmp(token1, "clear\n")) {
        // clearVectors();
        printf("Vectors cleared\n");
    } else if(!strcmp(token1, "list")) {
        printf("Listing vectors");
        // list();
    } else if(!strcmp(token1, "-h")) {
        printf("help info extended for lab6");
    } else if(!strcmp(token2, "=")) {

    }



    return 0;
}
