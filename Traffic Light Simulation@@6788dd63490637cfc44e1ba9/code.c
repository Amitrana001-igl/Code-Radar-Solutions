#include <stdio.h>

int main() {
    char light;

    // Input the traffic light color
    printf("Enter the traffic light color (R for Red, G for Green, Y for Yellow): ");
    scanf("%c", &light);

    // Using if-else to simulate the traffic light system
    if (light == 'R' || light == 'r') {
        printf("Stop\n");
    }
    else if (light == 'G' || light == 'g') {
        printf("Go\n");
    }
    else if (light == 'Y' || light == 'y') {
        printf("Slow Down\n");
    }
    else {
        printf("Invalid input\n");
    }

    return 0;
}
