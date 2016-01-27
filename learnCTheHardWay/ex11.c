#include <stdio.h>

int main(int argc, char *argv[])
{
	char *states[] = {
		"California", "Oregon",
		"Washington", "Texas"
	};
	
	int i = argc;
	
	while(i <= argc) {
		if (i - 1 <= sizeof(states) - 1) {
			states[i - 1] = argv[i - 1];
		}
		
		printf("arg no %d: %s\n", i - 1, argv[i - 1]);
		i--;
		if(i == 1) {
			break;
		}
	}
	
	
	int num_states = 4;
	i = 0;
	while(i < num_states) {
		printf("state %d %s\n", i, states[i]);
		i++;
	}
	return 0;
}
