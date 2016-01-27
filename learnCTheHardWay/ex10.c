#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 0;
	
	char *states[] = {
		"California", "Oregon",
		"Washington", "Texas"
	};
	
	states[1] = argv[0];
	int num_states = 4;
	
	for(i = 0; i < num_states; i++) {
		printf("state %d: %s\n", i, states[i]);
	}
	
	for(i = 1; i < argc; i++) {
		printf("arg %d: %s\n", i, argv[i]);
	}
	
	return 0;
}
