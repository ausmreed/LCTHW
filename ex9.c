#include <stdio.h> 
int main(int argc, char *argv[]) 
{
    int i = 0; 
    while (i < 25) {
        int j = 0;
        while (j <= i) {
            printf("%d", j); 
            j++; 
             
        }
    printf("\n"); 
    i++;
    }
    // Need this to add a final new line: 
    printf("\n");
    return 0; 
}

