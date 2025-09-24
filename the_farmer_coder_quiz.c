#include <stdio.h>

int main() {
    
    for (int i = 1; i <= 5; i++) {
       
        int plot_number = i * 10;
        
       
        printf("Plot number for Farmer %d: %d\n", i, plot_number);
    }
    
    return 0;
}
