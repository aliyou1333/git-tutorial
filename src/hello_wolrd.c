#include <stdio.h>
#include <espl_lib.h>

void main()
{
	int user_input = 0;
	char answer;
	char* results = 0;
	int IOint ;
	int c;

	printf("ESPL_lab\n" );
	while(1)
	{
		printf("--> Enter a number \n" );
		IOint = scanf("%d", &user_input);
		if( IOint != 1) // not an int input, user try again
		{
			printf("You entered the wrong value,please enter an integer value \n");
			
			while ((c = getchar()) != '\n' && c != EOF); //clear stdin
		}
		else // the input was an integer
		{

		results = num_to_words(user_input);	
		printf("Your number in words is *** %s *** \n",results);
		printf("Do you want to put another number? \n");
		printf("--> Type y for yes and n for no \n");

		while ((c = getchar()) != '\n' && c != EOF); //clear stdin

		scanf(" %c", &answer); //note space infront of %c
		if (answer == 'y' || answer == 'Y' )
		{
			printf("the answer was yes \n");
		}
		else if(answer == 'n' || answer == 'N')
		{
			printf("answer was no, terminating ...\n");
			break;
		}
		else
		{
			printf("unexpected answer, terminating...\n");
			break;
		}

		}
		
	}

}