#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <errno.h>

#define rc4decrypt(x, y) rc4encrypt(x, y)

struct arcfour
{
  /* */
}

typedef unsigned char int8;
typedef unsigned short int int16;
typedef unsigned int int32;

ArcFour *rc4init(int8 *, int16);
int8 rc4byte(void);
int8 *rc4encrypt(int8 *, int16);