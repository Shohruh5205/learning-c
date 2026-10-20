#include <stdio.h>

int main(void){

 int i = 42;
 float f = 3.14f;
 double d = 2.17181245;
 char c = 'A';
 char s[] = "hello";

 printf("int:  %d, sizeof%zu\n", i, sizeof i);
 printf("float: %f, sizeof=%zu\n", f, sizeof f);
 printf("double: %lf, sizeof=%zu\n", d, sizeof d);
 printf("char: %c (%d), sizeof=%zu\n", c, c, sizeof c);
 printf("string: %s, sizeof=%zu, strlen-ish=%zu\n", s, sizeof s, sizeof s - 1);

 printf("hex: %x, octal: %o\n", i, i);
 printf("padded: [%5d] [%-5d] [%05d]\n", i, i, i);

 return 0;

}



