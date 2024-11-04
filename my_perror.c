#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

void my_perror(const char *msg) {
    
    fprintf(stderr, "%s: %s\n", msg, strerror(errno));
}

int main(int argc, char *argv[]) { 
    FILE *f; 

    if (argc < 2) { 
        printf("Usage: perror_use <filename>\n"); 
        exit(1);  
    } 

    
    if ((f = fopen(argv[1], "r")) == NULL) { 
        my_perror("fopen");
        exit(1);
    } 

    printf("Opened file \"%s\".\n", argv[1]); 

    fclose(f); 
  
}

