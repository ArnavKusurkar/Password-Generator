# Password-Generator
Header Files:

#include <iostream>: Provides input and output capabilities.
#include <random>: Provides utilities to generate random numbers.
#include <string>: Provides string handling capabilities.
Function generate_password(int length):

Parameters: Takes an integer length indicating the desired length of the generated password.
Character Set: Defines a constant string characters containing all possible characters that can be used in the password (ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789).
Random Number Generation:
Uses std::random_device to obtain a seed for the random number generator (rd()).
Initializes a Mersenne Twister random number generator (std::mt19937 generator(rd())).
Defines a uniform distribution (std::uniform_int_distribution<> distribution(0, characters.size() - 1)), which generates random integers in the range [0, size of characters - 1].
Password Generation:
Iterates length times, each time appending a randomly chosen character from characters to the password string.
Return: Returns the generated password string.
main() Function:

User Input: Prompts the user to enter the desired length of the password.
Password Generation: Calls generate_password(length) to generate a password of the specified length.
Output: Prints the generated password using std::cout.
Example Usage:
Compile and run this code using a C++ compiler (e.g., g++, Visual Studio, or any other C++ compiler of your choice).
Enter the desired length of the password when prompted.
The program will generate and display a random password consisting of uppercase letters, lowercase letters, and digits.
Note:
Ensure your development environment supports C++11 or later, as this code snippet utilizes features introduced in C++11 (e.g., <random> library).
For security-sensitive applications, consider additional measures such as using a cryptographically secure random number generator or ensuring the generated passwords meet specific security requirements.
