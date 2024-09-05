#include <stdio.h>

int main() {

    // Distance for a single trip
    const double distance_one_way = 1207.0;  

     // Fuel price during forward trip
    const double fuel_price_forward = 118.0; 

    // Fuel price during return trip
    const double fuel_price_return = 123.0;  

    // Variable to store the car's fuel average
    double fuel_average;  
    double total_distance, fuel_consumed_forward, fuel_consumed_return;
    double total_fuel_consumed, total_fuel_cost;

    // Input: Get the car's fuel average
    do {
        printf("Enter the car's fuel average: ");
        scanf("%lf", &fuel_average);

        if (fuel_average <= 0) {
            printf("Invalid input. Please enter a positive value for the fuel average.\n");
        }
    } while (fuel_average <= 0);

    // Calculate the total distance (both ways)
    total_distance = 2 * distance_one_way;

    // Calculate fuel consumed for each trip
    fuel_consumed_forward = distance_one_way / fuel_average;
    fuel_consumed_return = distance_one_way / fuel_average;

    // Calculate total fuel consumed for the entire trip
    total_fuel_consumed = fuel_consumed_forward + fuel_consumed_return;

    // Calculate total fuel cost for the entire trip
    total_fuel_cost = (fuel_consumed_forward * fuel_price_forward) + (fuel_consumed_return * fuel_price_return);

    // Output: Display the total fuel consumed and total fuel cost
    printf("Total fuel consumed for the trip: %.2f liters\n", total_fuel_consumed);
    printf("Total fuel cost for the trip: %.2f currency units\n", total_fuel_cost);

    return 0;
}