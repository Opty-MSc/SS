#include <stdio.h>
#include <stdlib.h>
void init();

void welcome_user() {
    char buffer[128] = {0};

    system("echo \"Can you ret2system()?\"");
    printf("Input:\n");

    gets(buffer);

    printf("Welcome to your first ret2libc %s!", buffer);
}

int main() {
    init();
    welcome_user();
    return 0;
}

/* Aux Functions */
#include <stdio.h>

void init() {
    setvbuf(stdin, NULL, _IONBF, 0);
    setvbuf(stdout, NULL, _IONBF, 0);
}
