/* This is free and unencumbered software released into the public domain. */

#ifndef _STDIO_H
#define _STDIO_H

/**
 * @file
 *
 * <stdio.h> - Input/output.
 *
 * @see http://pubs.opengroup.org/onlinepubs/9699919799/basedefs/stdio.h.html
 */

#include <stddef.h> /* for size_t */

#ifdef __cplusplus
extern "C" {
#endif

int snprintf(char* restrict str, size_t size, const char* restrict format, ...);

int sprintf(char* restrict str, const char* restrict format, ...);

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* _STDIO_H */
