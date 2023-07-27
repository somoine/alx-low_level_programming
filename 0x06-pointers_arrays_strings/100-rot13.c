#include "main.h"
/**
 *encodes a string using rot13.
 *
 */
#include <stddef.h>

char *rot13(char *str) {
    char *p = str;

    while (*p != '\0') {
        char letter = *p;

        if ((letter >= 'a' && letter <= 'z') || (letter >= 'A' && letter <= 'Z')) {
            char base = (letter >= 'a' && letter <= 'z') ? 'a' : 'A';
            *p = (letter - base + 13) % 26 + base;
        }

        p++;
    }

    return str;
}

