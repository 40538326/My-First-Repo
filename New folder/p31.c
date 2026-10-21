#include <stdio.h>
int main(){
    printf("Enter temperature: ");
    int temp;
    scanf("%d", &temp);
    
    char conv;
    printf("Enter conversion required (f/F for Fahrenheit, c/C for Celsius): ");
    scanf(" %c", &conv);
    switch("%c",conv){
        case 'f':
        case 'F':
            int fahrenheit = (temp * 9/5) + 32;
            printf("%d degrees Celsius is equal to %d degrees Fahrenheit\n", temp, fahrenheit);
            break;
        case 'c':
        case 'C':
            int celsius = (temp - 32) * 5/9;
            printf("%d degrees Fahrenheit is equal to %d degrees Celsius\n", temp, celsius);
            break;
    }
}