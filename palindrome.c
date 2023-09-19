#include <stdio.h>
#include <string.h>

int is_palindrome(char str[]) {
  int i, j;

  i = 0;
  j = strlen(str) - 1;

  while (i < j) {
    if (str[i] != str[j]) {
      return 0;
    }

    i++;
    j--;
  }

  return 1;
}

int main() {
  char str[] = "madam";

  if (is_palindrome(str)) {
    printf("%s is a palindrome.\n", str);
  } else {
    printf("%s is not a palindrome.\n", str);
  }

  return 0;
}