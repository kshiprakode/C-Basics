#include <stdio.h>

int main(int argc, char *argv[])
{

	//got through each string in argv

	int i = 0;
	while(i < argc)
	{
		printf("arg %d: %s\n", i, argv[i]);
		i++;
	}

	//lets make our own array of strings
	char *states[] = {
	"California", "Oregon",
	"Washington", "Texas"
	};

	int num_states = 4;
	i = 0; //watch fos this
	while(i< num_states){
		printf("state %d: %s\n", i, states[i]);
		i++;
	}
	
	//Extra Credit
	if(argc == num_states)
	{
		i=0;
		while(i<num_states){
			states[i]=argv[i];
			i++;
		}
	}

	i = 0;
	while(i< num_states)
	{
		printf("Copied argv %d %s\n", i ,argv[i]);
		i++;
	}
	return 0;
}
