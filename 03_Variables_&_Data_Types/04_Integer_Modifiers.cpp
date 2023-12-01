#include <iostream>

int main(int agrc, char const *argv[]) {

  // Integer Modifiers.

  // When we create int variable let's say. So, the "signed" modifier is by
  // default. Which means, we can add (-5) or (5) [positive or negative] value
  // in that integer. But when we use "unsigned" modifier, the negative value
  // (-5) will create an error.

  // signed keyword by default.
  int a = 5;  // will work
  int b = -5; // will work

  // manually signed keyword.
  signed int c = 5;
  signed int d = -5;

  // Unsigned integer will throw en error when we add negative value.
  unsigned int e = 5;  // fine
  unsigned int f = -5; // error

  // Formula of Unsigned and Signed.
  // Unsigned Range : [0 ~ 2^n - 1];
  // Signed Range : [-2^n-1 ~ 2^n-1 - 1];

  // We can use "short" and "long" modifiers.
  // These plays a huge role.

  short short_var = -3432;                  // 2 bytes
  short int short_int = 433;                // 2 bytes
  signed short signed_short = 343;          // 2 bytes.
  signed short int signed_short_int = -343; // 2 bytes.

  int int_var = 33;                   // 4 bytes.
  signed signed_var = 33;             // 4 bytes.
  signed int signed_int_var = 33;     // 4 bytes.
  unsigned int unsigned_int_var = 33; // 4 bytes.

  long long_var = 88;                       // 4 or 8 bytes.
  long int long_int = 88;                   // 4 or 8 bytes.
  signed long signed_long = 88;             // 4 or 8 bytes.
  signed long int signed_long_int = 88;     // 4 or 8 bytes.
  unsigned long int unsigned_long_int = 88; // 4 or 8 bytes.

  long long long_long = 343;                            // 8 bytes.
  long long int long_long_int = 888;                    // 8 bytes.
  signed long long signed_long_long = 343;              // 8 bytes.
  signed long long int signed_long_long_int = 343;      // 8 bytes.
  unsigned long long int unsigned_long_long_int = 3434; // 8 bytes.

  // NOTE: These modifiers only apply to integral types : those in which you can
  // only store decimal numbers.

  return 0;
}
