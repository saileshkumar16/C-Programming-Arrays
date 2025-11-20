#include <stdio.h>

int main()
{
    unsigned char num = 0b10101010;  // example 8-bit number
    
    int p = 2;
    int q = 4;
    int r = 6;

    // Step 1: create mask
    unsigned char mask = (1 << p) | (1 << q) | (1 << r);

    // Step 2: operations
    unsigned char set_result    = num | mask;
    unsigned char clear_result  = num & ~mask;
    unsigned char toggle_result = num ^ mask;

    printf("Original : %02X\n", num);
    printf("Set      : %02X\n", set_result);
    printf("Clear    : %02X\n", clear_result);
    printf("Toggle   : %02X\n", toggle_result);

    return 0;
}
