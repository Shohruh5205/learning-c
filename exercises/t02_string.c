#include <stdio.h>

size_t my_strlen(const char *s){

    size_t i = 0;

    while(s[i]) i++;

    return i;

}

void my_strcpy(char *cpy, const char *pst){

    size_t i = 0;

    while((cpy[i] = pst[i]) != '\0')
        i++;

}

int my_strcmp(const char *a, const char *b){

    while(*a && *a == *b){a++; b++;}

    return (unsigned char)*a - (unsigned char)*b;
}

void my_reverse(char *s){

    size_t n = my_strlen(s);

    for(size_t i = 0; i < n/2; i++){

        char temp = s[i];
        s[i] = s[n - 1 - i];
        s[n - 1 - i] = temp;
    }
}

int is_palindrome(const char *s){

    size_t n = my_strlen(s);

    for(size_t i = 0; i < n/2; i++)
        if(s[i] != s[n - 1 - i]) return 0;
    return 1;
}


int main(void){

  char matn = "hello";
  char gap[10];

  printf("matn hajmi %zu\n", my_strlen(matn));

  my_strcpy(gap, matn);

  printf("%s\n", gap);

  printf("hello/hello %d\n", my_strcmp("hello", "hello"));
  printf("telfon/komputer %d\n", my_strcmp("telfon", "komputer"));
  pritnf("noutbook/notebook %d\n", my_strcmp("noutbook", "notebook"));

  my_reverse(gap);

  printf("%s\n", gap);

  printf("level is_palindrome %d\n", is_palindrome("level"));
  pritnf("hello is_palindrome %d\n", is_palindrome("hello"));



}
