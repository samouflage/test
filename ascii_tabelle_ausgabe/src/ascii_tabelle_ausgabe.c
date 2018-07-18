/*
 ============================================================================
 Name        : ascii_tabelle_ausgabe.c
 Author      : Samuel Bergen
 Version     : 1.1
 Copyright   : Copyright 2018 Samuel Bergen
 Description : Ausgabe der ASCII-Tabelle
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	printf("\n *** ASCII-Tabelle ***\n\n");
	printf(" Okt Dez Hex  Zch    Okt Dez Hex  Zch    Okt Dez Hex  Zch    Okt Dez Hex  Zch  ");
	printf("\n ----------------------------------------------------------------------------");
	int i = 0;
	for(i = 0; i < 32; i++)
	{
		printf("\n %03o %03i %03x  ...  ", i, i, i);
		printf("  %03o %03i %03x   %c   ", i+32, i+32, i+32, i+32);
		printf("  %03o %03i %03x   %c   ", i+64, i+64, i+64, i+64);
		if((i+96) != 127) printf("  %03o %03i %03x   %c   ", i+96, i+96, i+96, i+96);
		else printf("  %03o %03i %03x  ...", i+96, i+96, i+96);
	}
}
