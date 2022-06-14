#include <stdio.h>
int main(){
  int a, b;
  scanf("%d%d", &a,&b);
  for (int j = a; j <= b; j++){
    for (int i = 0; i < j; i++){
      printf("%4d", j);
    }
  }
  // for (int i = 0; i < 10; i++){
  //   for (int j = 0; j < 10; j++){
  //     printf("%d", j);
  //   }
  //   printf("\n");
  // }

  return 0;
}
