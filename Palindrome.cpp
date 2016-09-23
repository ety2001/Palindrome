//Elaine Yang
//Palindrome

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <string>
#include <string.h>
using namespace std;


int main(){

	// Initializes different variable to be used later
	char input [81];
	int charcount = 0;
	bool ispalindrome = false;
	
	// Asks for/gets size of input
	cout << "Enter input\n";
	cin.getline(input, sizeof(input));
	int initialsize = strlen(input);

	// Counts how many characters there are
	for(int i = 0; i < initialsize; i++){
		if(isalpha(input[i]) || isdigit(input[i])){
			charcount++;
		}
	}
	
	// Creates new array to hold only characters
	char validchars [charcount];
	charcount = 0;

	// Puts chars into new array
	for(int i = 0; i < initialsize; i++){
		if(isalpha(input[i]) || isdigit(input[i])){
			validchars[charcount] = input[i];
			charcount++;
		}
	}

	// Check if corresponding chars are the same
	for(int i = 0; i < (charcount/2); i++){
		if(validchars[i] == validchars[charcount-i-1]){
			ispalindrome = true;
		}
		else{
			ispalindrome = false;
			break;
		}
	}

	// Print result
	if(ispalindrome == true){
		cout << "Palindrome";
	}
	else{
		cout << "Not a Palindrome";
	}
}
