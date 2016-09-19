#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <string>
#include <string.h>
using namespace std;


int main(){

	char input [80];
	int charcount = 0;
	bool ispalindrome = false;
	
	cout << "Enter input\n";
	cin >> input;
	
	int initialsize = sizeof(input) / sizeof(input[0]);
	for(int i = 0; i < initialsize; i++){
		if(isalpha(input[i]) || isdigit(input[i])){
			charcount++;
		}
	}
	char validchars [charcount];
	charcount = 0;
	for(int i = 0; i < initialsize; i++){
		if(isalpha(input[i]) || isdigit(input[i])){
			validchars[charcount] = input[i];
			charcount++;
		}
	}
	for(int i = 0; i < (charcount/2); i++){
		if(validchars[i] == validchars[charcount-i-1]){
			ispalindrome = true;
		}
		else{
			ispalindrome = false;
			break;
		}
	}
	if(ispalindrome == true){
		cout << "Palindrome";
	}
	else{
		cout << "Not a Palindrome";
	}
}
