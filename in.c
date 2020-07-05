#include<stdio.h> 

int main() {
    // Declare a variable named 'input_string' to hold our input.
    char input_string[105]; 
    int count = 0;
    int ch;
    
    // Read a full line of input from stdin and save it to our variable, input_string.
    while((ch= getchar()) != '\n'){
    	input_string[count] = ch;
        count++;
    }
    input_string[count] = '\0';
    
    
    // Print a string literal saying "Hello, World." to stdout using printf.
    printf("Hello, World.\n");
    
    // TODO: Write a line of code here that prints the contents of input_string to stdout.
    printf("%s",input_string);
    return 0;
}
