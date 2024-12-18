// DO NOT FORGET TO FREE THE MEMORY AFTERWARDS


#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

#define ALLOC_FAILED -1
#define REALLOC_FAILED -2
#define FILE_OPEN_FAILED -3

#define STR_ALLOC_FAILED fprintf(stderr, "\a\nFATAL ERROR! MEMORY ALLOCATION FAILED!\n\n")
#define STR_REALLOC_FAILED fprintf(stderr, "\a\nFATAL ERROR! MEMORY REALLOCATION FAILED!\n\n")
#define STR_FILE_OPEN_FAILED fprintf(stderr, "\a\nFATAL ERROR!FILE NOT FOUND!\n\n")

#undef malloc
#undef realloc
#undef fopen

static void* alloc(size_t size) {

    void* mem = malloc(size);
    if (!mem) {

        STR_ALLOC_FAILED;
        exit(ALLOC_FAILED);
    }

    return mem;
}

static void* ralloc(void* ptr, size_t size) {

    void* mem = realloc(ptr, size);
    if (!mem) {

        STR_REALLOC_FAILED;
        exit(REALLOC_FAILED);
    }

    return mem;
}

static FILE* open(const char* fileName, const char* mode) {

    FILE* fptr = fopen(fileName, mode);
    if (!fptr) {

        STR_FILE_OPEN_FAILED;
        exit(FILE_OPEN_FAILED);
    }

    return fptr;
}
