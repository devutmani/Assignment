#include <stdio.h>

int main() 
{
    // Define the coordinates of the two points
    double x1 = 5.0, y1 = 4.0;
    double x2 = 3.0, y2 = 2.0;
    
    // Calculate the slope using the formula: slope = (y2 - y1) / (x2 - x1)
    double slope = (y2 - y1) / (x2 - x1);
    
    // Output the result, capped to 3 decimal places
    printf("The slope of the line passing through points (5,4) and (3,2) is: %.3f\n", slope);
    
    return 0;
}