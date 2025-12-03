#include <stdio.h>
#include <stdlib.h>
long digitalRoot(long n) {
    
    if (n < 10) {
        return n;
    }


    long sum = 0; 
    long t = n;

    while (t > 0) {
        
        sum += t% 10;
        
        t/= 10;
    }
    

    return digitalRoot(sum);
}


int main() {
    long  number;
    printf("Enter a number to find its digital root: ");
    
    
    if (scanf("%ld", &number) != 1) {
        printf("ERROR: Invalid input type.\n");
        return 1;
    }

    long root = digitalRoot(number);

    printf("The digital root of %ld is %ld\n", number, root);


    return 0;
}
