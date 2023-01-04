#include <stdio.h>
int pal(int n){
        int reversed = 0, remainder; 
    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }
    
    return reversed;
    }
int main() {
  int n, original,reversed;
    printf("Enter an integer: ");
    scanf("%d", &n);
    original = n;
    reversed=pal(n);
    if (original == reversed)
        printf("%d is a palindrome.", original);
    else
        printf("%d is not a palindrome.", original);

}

    
