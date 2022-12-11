#include "stdio.h"
#include "windows.h"

int main() {
    float x,y,a; 
    for(y = 1.5; y > -1.5; y -= 0.12) {
        for(x = -1.5; x < 1.5; x += 0.051) {
            a = x * x + y * y - 1; 
            putchar(a * a * a - x * x * y * y * y <= 0 ? 'N' :' '); 
        } 
        system("color 4"); 
        putchar('\n');
    } printf("I miss you!");  
    return 0; 
}