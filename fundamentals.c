#include "fundamentals.h"

// Disable certain warnings related to standard library functions in Windows.
#define _CRT_SECURE_NO_WARNINGS

// Define buffer size for storing strings.
#define BUFFER_SIZE 80 

// Define size for input buffer storing numeric inputs.
#define NUM_INPUT_SIZE 10

// Include the header file again to access its functionality.
#include "fundamentals.h"

// Define the function `fundamentals`
void fundamentals(void) {
    // Start of the indexing strings demonstration.
    printf("*** Start of Indexing Strings Demo ***\n");

    // Declare a buffer to store the input string.
    char buffer1[BUFFER_SIZE];

    // Declare a buffer to store numeric input.
    char numInput[NUM_INPUT_SIZE];

    // Declare a variable to store the position of the character.
    size_t position;

    // Start a loop for user interaction.
    do
    {
        // Prompt the user to input a non-empty string.
        printf("Type not empty string (q- to quit):\n");

        // Read the input string from the user.
        fgets(buffer1, BUFFER_SIZE, stdin);

        // Remove the newline character from the input string.
        buffer1[strlen(buffer1) - 1] = '\0';

        // If the input is not "q", proceed with character position input.
        if (strcmp(buffer1, "q") != 0) {
            // Prompt the user to input the character position within the string.
            printf(("Type the character position within the string: \n"));

            // Read the numeric input for character position.
            fgets(numInput, NUM_INPUT_SIZE, stdin);

            // Remove the newline character from the numeric input.
            numInput[strlen(numInput) - 1] = '\0';

            // Convert the numeric input to an integer.
            position = atoi(numInput);

            // If the position is greater than or equal to the length of the string, adjust it.
            if (position >= strlen(buffer1))
            {
                position = strlen(buffer1) - 1;
                printf("Too big... Position reduced to max. available\n");
            }

            // Print the character found at the specified position within the string.
            printf("The character found at %d position is \'%c'\n", (int)position, buffer1[position]);
        }
    } while (strcmp(buffer1, "q") != 0); // Continue looping until the user inputs "q"

    // End of the indexing strings demonstration.
    printf("*** End of Indexing Strings Demo ***\n\n");

    // /* Version 2 */

    /*removing the numInput and size_t position variables and its uses and replacing all three variables with one variable
    called buffer2 and using it in the entire code for better stability in the code */

    // printing the statement to start of our program...
    printf("* Start of Measuring String Demo *\n");

    // declearing the character arrays named buffer2 with size BUFFER_SIZE.
    char buffer2[BUFFER_SIZE];


    // do-while loop initialized...
    do
    {
        //printing the statement to take a string by using the print function..
        printf("Type a string (q - to quit):\n");

        // taking the user input of string and storing it in buffer2 by fget function..
        fgets(buffer2, BUFFER_SIZE, stdin);

        // cutting of the last character of buffer1 and replacing it with the null character...
        buffer2[strlen(buffer2) - 1] = '\0';

        //if condition initialized ...
        if (strcmp(buffer2, "q") != 0)

            // if the condition above satisfies then, it prints the below print statement with the help of print function..
            printf("The length of \'%s\' is %d characters\n",
                buffer2, (int)strlen(buffer2));

    } while (strcmp(buffer2, "q") != 0);


    // last print statement for end of our program..
    printf("* End of Measuring Strings Demo *\n\n");

    /* Version 3 */
   // Print a message indicating the start of the demo.
    printf("*** Start of Copying Strings Demo ***\n"); 
    // Declare a character array to store the destination string.
    char destination[BUFFER_SIZE];  
    // Declare a character array to store the source string.
    char source[BUFFER_SIZE];  
    do {
        // Null terminator at positon 0 of the char array
        destination[0] = '\0'; 
        printf("Destination string is reset to empty\n");
        printf("Type the source string (q - to quit):\n");
        // Getting user input
        fgets(source, BUFFER_SIZE, stdin); 
        // Adding null termintor
        source[strlen(source) - 1] = '\0'; 
        // Check if the user input is not equal to 'q'.
        if (strcmp(source, "q") != 0) { 
            // Copy the contents of the source string to the destination string.
            strcpy(destination, source); 
            // Print the new destination string.
            printf("New destination string is \'%s\'\n", destination); / 

        }
    }// Continue the loop until the user enters 'q'. 
     while (strcmp(source, "q") != 0);
    // Print a message indicating the end of the demo.
    printf("*** End of Copying Strings Demo ***\n\n"); 


}


    

