/* This is free and unencumbered software released into the public domain. */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <string.h> /* for size_t, strspn() */

/**
 * @date   2014-11-23
 * @author Arto Bendiken
 * @see    http://libc11.org/string/strspn.html
 */
size_t
strspn(const char* s1,
       const char* s2) {

  return (void)s1, (void)s2, 0; // TODO
}
