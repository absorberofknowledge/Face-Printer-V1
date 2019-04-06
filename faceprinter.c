//faceprinter.c
//By Luke Harrison
//include the functions na a seperate header file just because. 

//Choose a mood, get a face!

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "faces.h"

void print_happy(void);
void print_sad(void);
void print_meh(void);


int main(void) {

	int choice;
	int running = 1;

	while (running) {


		puts("Face Printer v1.0");
		puts("Code by Luke Harrison");
		puts("The HarriSoft Corporation");

		printf("\nSelect Your Mood!\n");
		printf("1) Happy\n");
		printf("2) Sad\n");
		printf("3) Indifferent\n");
		printf("9) Exit Program\n");

		printf("\nChoice: ");
		scanf("%i", &choice);

		switch (choice) {
		default: printf("\nOy! You didn't put 1, 2, or 3!\n\n"); break;
		case 1: print_happy(); break;
		case 2: print_sad(); break;
		case 3: print_meh(); break;
		case 9: running = 0; break;

		}

	}
	return 0; 
}

