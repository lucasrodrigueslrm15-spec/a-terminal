#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    int r = 1;
    while (r){
        char command[1000];

        printf("&: ");
        fgets(command, sizeof(command), stdin);
        
        int res = system(command);
        printf(res == -1 ? "HOHOHO, your doomed.\n" : "\n");
        if (strcmp(command, "exit\n") == 0){
            r=0;
        }
    }
    return 0;
}
