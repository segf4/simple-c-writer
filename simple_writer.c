#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE 4096

int main() {
    FILE *f = fopen("filled_ff.bin", "wb");
    if (!f) {
        perror("fopen");
        return 1;
    }

    char buffer[BUFFER_SIZE];
    memset(buffer, 0xFF, BUFFER_SIZE); // Fills the buffer with 0xFF (all bits set)

    for (int i = 0; i < 100; i++) {
        fwrite(buffer, 1, BUFFER_SIZE, f);
    }

    fclose(f);
    return 0;
}

