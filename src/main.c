#include <common/error.h>
#include <common/file.h>

int main(int argc, char* argv[]) {
    if (argc != 2) {
        error_print_usage();
        return 1;
    }

    char* source_filename = argv[1];
    char* source_code = file_read(source_filename);

    printf("Source Code: %s\n", source_code);

    free(source_code);

    return 0;
} 