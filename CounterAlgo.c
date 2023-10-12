//(Average a Sequence of Integers) Write a program that calculates and prints the average of several integers. Assume the last value read with scanf is the sentinel 9999.

//importing standard C libraries
#include <stdio.h>
#include <stdbool.h>

int main(){
// Defining number variable and initializing control variable (counter) and sum variables   
    int number;
    int counter = 0;
    int sum = 0;
// Instructions to the user. 
    printf("Enter a series of numbers. Type '9999' to exit the program and print average of inputted numbers\n");
// Entering a while loop as an indefinite iteration.
    while(true) {    
// Receiving input from the user while adding logic accounting for non numerical value input.    
    if(scanf("%d", &number) != 1 ) {
        printf("Invalid Entry\n");
 // Clearing user input if the input is not a new line.       
        while (getchar() != '\n');
// Proceed to the next if statement.
        continue;
// Defining the sentinal variable. Nested within the first if statement, we add logic to account for if the user enters the sentinal variable during the first iteration,when the counter is zero.       
        } if(number == 9999) {
            if (counter == 0) {
            printf("No numbers entered \n");
            } else {
 // we initialize the sumCounter variable to: the sum divided by the counter variable, or - the average of numbers inputted.            
             int sumCounter = (sum / counter) ;
            printf("Average of numbers inputted: %d\n", sumCounter);
        }
 // We break out of the loop when sentinal value is inputted.       
        break;
    } 
// If contitions are not met to break out of the loop - the sum variable value is updated, and we add 1 to the counter variable. we then reiterate the loop, giving the user another chance to enter another number. 
    sum+=number;
    counter++;
}
return 0;
}

