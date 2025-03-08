/**
 * This function converts temperature from Fahrenheit to Celsius.
 * It takes in a float parameter and returns a float.
 * 
 * @param parameter The input parameter for the function.
 * @return The result of the function.
 */
#include <stdio.h>
#include <ctype.h>

int main() {
    float fahr, celsius;
    char scale; // what scale of temperature is being used
    float lower, upper, step;

    printf("Enter the temperature scale (F or C): ");
    scanf("%c", &scale);
    // convert to lowercase
    scale = toupper(scale);
    printf("Enter temperature value: ");
    scanf("%f", &fahr);
    
    if (scale == 'F') {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("Temperature in Celsius: %f\n", celsius);
    } else if (scale == 'C') {
        fahr = (celsius * 9.0 / 5.0) + 32.0;
        printf("Temperature in Fahrenheit: %f\n", fahr);
    } else {
        printf("Invalid temperature scale\n");
    }

    return 0;
}