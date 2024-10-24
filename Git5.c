#include <stdio.h>

int main() {
  int a, b, c, num;
  scanf("%d %d %d", &a, &b, &c);
  if (a>b) {
    if (a>c) {
      num=a;
    } else {
      num=c;
    }
  } else {
    if (b>c) {
      num=b;
    } else {
      num=c;
    }
  }
  printf("The Biggest number is %d\n",num);
  printf("Hello World\n");
  return 0;
}