#include "arcfour.h"

#define F fflush(stdout)

int main(void);

void printbin(int8 *input, const int16 size)
{
  int16 i;
  int8 *p;

  assert(size > 0);

  for (i = size, p = input; i; i--, p++)
  {
    if (!((i + 1) % 2))
      printf(" ");
    printf("%.02x", *p);
  }
  printf("\n");

  return;
}

int main()
{
  Arcfour *rc4;
  int16 skey, stext;
  char *key, *text, *encrypted, *decrypted;

  key = "tomatoes";
  skey = strlen(key);
  text = "Shall I compare thee to a summer's day?";
  stext = strlen(text);

  printf("Initializing encryption...");
  F;
  // rc4 = rc4init(key, skey);
  // if (rc4 == 0)
  // {
  //   /* error */
  // }
  printf("done\n");

  printf("'%s'\n ->", text);
  // encrypted = rc4encrypt(text, stext);
  printbin(key, skey);

  return 0;
}