#include <stdio.h>

int sum(const int *a, size_t n){

 int z = 0;

   for(size_t i = 0; i < n; i++){
    z += *(a + i);
}

  printf("\nsum = %d\n", z);

}

int max(const int *a, size_t n){

 int max = *a;
 for(size_t i = 1; i < n; i++){
  if(*(a + i) > max){
    max = *(a + i);
}
  }

printf("max = %d\n", max);


}

void reverse(const int *a, size_t n){

  for(size_t i = n; i > 0; i--){
   printf("%d  ", *(a + i - 1));

}


}


int main(){

 int arr[] = {3, 7, 1, 9, 4, 2};

 size_t n = sizeof(arr) / sizeof(arr[0]);

sum(&arr[0], n);
max(&arr[0], n);
reverse(&arr[0], n);

printf("\n\n");

return 0;

}
