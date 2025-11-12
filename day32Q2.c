#include <stdio.h>

int main() {
    long long num;
    int digit;
    int freq[10] = {0}; 
    printf("Enter a number: ");
    scanf("%lld", &num);

    if (num == 0)
        freq[0]++;

    
    while (num != 0) {
        digit = num % 10;
        if (digit < 0) digit = -digit; 
        freq[digit]++;
        num /= 10;
    }

    int maxDigit = 0;
    int maxFreq = freq[0];

    for (int i = 1; i < 10; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            maxDigit = i;
        }
    }

    printf("%d\n ", maxDigit);

    return 0;
}
