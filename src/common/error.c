#include <common/error.h>

void error_print_usage() {
    printf("Usage: rad <source_file>\n");
    exit(EXIT_FAILURE);
}

void error_file_not_found(char* filename) {
    printf("%s: No Such File or Directory\n", filename);
    exit(EXIT_FAILURE);
}