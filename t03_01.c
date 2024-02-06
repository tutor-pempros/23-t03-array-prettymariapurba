// 12S23042 - PRETTY MARIA 

#include <stdio.h>

int main(int _argc, char **_argv) 
  {
    int n;
    scanf("%d", &n);
    int i, numbers[n], min, max;
    for(i = 0; i < n; i++) {
    scanf("%d", &numbers[i]);
    }
    for(i = 0; i < n; i++) {
      if(numbers[i] < min) {
      min = numbers[i];
      }
      else if(numbers[i] > max) {
      max = numbers[i];
        }
    }
    // Output
    printf("%d\n", min);
    printf("%d\n", max);
    return 0;
}


