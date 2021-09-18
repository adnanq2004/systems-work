#include <stdio.h>
int main() {

  // string test_variable = "%d", 1
  printf("Hello World! ");
  printf("hello asker! ");
  // %s example = "hello !" + "you are friends !";
  printf("hello! %s\n", "you are friends!");
  printf("%d\n", 1);
  printf("%d %lf %s %d %d\n", 1, 1.111, "ooo", 2, 5);
  // printf('hello');
  // printf('1' + 'hello friends!');
  // printf('1');
  int find = 0;
  char sting = 'a';
  // for (int i = 0; i < )


  int num;
  printf("%s\n", "Please input a positive integer:");
  scanf("%d", &num);
  while(num <= 0) {
    printf("%s\n", "That is not a positive integer, please give a valid number:");
    scanf("%d", &num);
  }
  for (int i = 0; i < num; i++) {
    printf("%d ", i);
  }
  printf("\n");


  char reed = 'c';
  // reed = 'c'
  int rf = 1;
  rf = rf + 1;
  printf("%d\n", rf);
  reed = reed + 5;
  printf("%c\n", reed);
  reed = reed + 'r';
  printf("%c\n", reed);


  // char cycle = 'a';
  // char dem = 'a';
  // printf("%c ", cycle);
  // cycle = cycle + 1;
  // for (int i = 1; cycle != dem;) {
  //   cycle = i;
  //   printf("%c ", cycle);
  // }

  return 0;
}
