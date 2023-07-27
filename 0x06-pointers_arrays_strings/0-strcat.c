#include "main.h"
/**
 * _strncat - concatenate strings, defining the size of second string.
 * @dest: string with concatenation
 * @src: string to be concatenated
 * @n: size of second string
 * Return: Always 0.
 */
#include <stddef.h>

char *_strcat(char *dest, char *src) {
    // Find the end of the destination string
    char *dest_end = dest;
    while (*dest_end != '\0') {
        dest_end++;
    }

    // Append the source string to the destination string
    while (*src != '\0') {
        *dest_end = *src;
        dest_end++;
        src++;
    }

    // Add the terminating null byte
    *dest_end = '\0';

    return dest;
}

