#include <stdio.h>

int main(int argc, char *argv[])
{
	if (argc != 2) {
		printf("ERROR: You need one argument");
		return 1;
	}
	
	int i = 0;
	for(i = 0; argv[1][i] != '\0'; i++) {
		char letter = argv[1][i];
		if (letter < 91) {
			letter = letter + 32;
		}
		//printf("%c\n", letter);
	
		switch(letter) {
			case 'a':
			//case 'A':
				printf("%d: 'A'\n", i);
				break;
			
			case 'e':
			//case 'E':
				printf("%d: 'E'\n", i);
				break;
			
			case 'i':
			//case 'I':
				printf("%d: 'I'\n", i);
				break;
			
			case 'o':
			//case 'O':
				printf("%d: 'O'\n", i);
				break;
			
			case 'u':
			//case 'U':
				printf("%d: 'U'\n", i);
				break;
			
			case 'y':
			//case 'Y':
				if(i > 2) {
					printf("%d: 'Y'\n", i);
					break;
				}
				//break;
			
			default:
				printf("%d: %c is not a vowel\n", i, letter);
		}
	}
	
	return 0;
}
