#include <stdio.h>

int main(void){

 int i;
 float x;

 i = 40;
 x = 829.31f;

 printf("|%d|,|%5d|,|%-5d|,|%5.3d|\n", i, i, i, i);
 printf("|%10.3f|,|%10.3e|,|%-10g|\a\a", x, x, x);

 return 0;

}

