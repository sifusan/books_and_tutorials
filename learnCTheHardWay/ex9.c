#include <stdio.h>

int main(int argc, char *argv[])
{
	int numbers[4] = {0};
	char *name[4] = "a";
	
	printf("numbers: %d %d %d %d\n",
			numbers[0], numbers[1],
			numbers[2], numbers[3]);
	
	printf("name each: %c %c %c %c\n",
			name[0], name[1],
			name[2], name[3]);
	
	printf("name: %s\n", name);
	
	numbers[0] = 'A';
	numbers[1] = 'b';
	numbers[2] = 'c';
	numbers[3] = 'd';
	
	name[0] = 'a';
	name[1] = 'b';
	name[2] = 'b';
	name[3] = 'd';
	
	printf("numbers: %c %c %c %c\n",
			numbers[0], numbers[1],
			numbers[2], numbers[3]);
	
	printf("name each: %c %c %c %c\n",
			name[0], name[1],
			name[2], name[3]);
	
	printf("name: %s\n", name);
	
	char *another = "Zed";
	
	printf("another each: %c %c %c %c\n",
			another[0], another[1],
			another[2], another[3]);
	
	return 0;
}
