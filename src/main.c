/// @file main.c

#include <stdio.h>
#include "main.h"

 
#define PI       3.1415   ///< Mathematical constant PI.
#define RADIUS_M 7.82     ///< Radius in meters

/**
 * Calculates the Area of the circle.
 * Formula: Area = PI*r^2
 * @param[in] radius
 * @param[out] area
 */ 
float calculate_area(float radius)
{
    float area;
    area = PI * radius * radius;
    return area;
}

/** 
 * Calculates the Perimeter of the circle.
 * Formula: Perimeter = 2*PI*r
 * @param[in] radius
 * @param[out] perimeter
*/
float calculate_perimeter(float radius)
{
    float perimeter;
    perimeter = 2 * PI * radius;
    return perimeter;
}
 
/**
 * Main entry point of the program.
*/
int main()
{
    float radius, area, perimeter;
    radius = RADIUS_M;
    area = calculate_area(radius);
    perimeter = calculate_perimeter(radius);
    printf("Area = %.2f sq.m \n", area);
    printf("perimeter = %.2f m\n", perimeter);
    return 0;
}