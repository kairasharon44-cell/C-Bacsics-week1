#include <stdio.h>
#include <math.h>

int main() {
    double v0 = 20.0;    //initial velocity (m/s)
    double angle = 45.0; //launch angle in degrees
    double g = 9.81;     //gravity (m/s*2)

    double rad = angle * M_PI / 180.0;
    double range = (v0 * v0 * sin(2 * rad)) / g;
    double height = (v0 * v0 * pow(sin(rad), 2)) / (2 * g);
    
    printf(" Projectile Range * %.2f m\n", range);
    printf("Maximum Height = %.2f m\n", height);
 
    return 0;

}
