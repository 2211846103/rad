#include <common/file.h>

char* file_read(char* filename) {
    FILE* f = fopen(filename, "rb");
    if (!f) error_file_not_found(filename);

    fseek(f, 0, SEEK_END);
    long length = ftell(f);
    fseek(f, 0, SEEK_SET);

    char* buffer = (char*) malloc(sizeof(char) * (length + 1));
    if (buffer) fread(buffer, 1, length, f);
    buffer[length] = '\0';

    fclose(f);
    return buffer;
}