#include<stdio.h>
#include<string.h>

#define MAX_TAPE_LENGTH 1000

int main()
{
	char tape[MAX_TAPE_LENGTH];
	int i,j,tape_head = 0;
	int current_loc;

	printf("Enter input:\n");
	scanf("%s", tape);
	// printf("%s", tape);

	strcat(tape,"____________________________________________________________");

	tape_head = 0;

	while(tape[tape_head] != '1')
	{
		printf("%c:%c %c R tape:%s\n", tape[tape_head], tape[tape_head], tape[tape_head], tape);
		tape_head++;
		// printf("Head Position:%d Symbol:%c Tape:%s\n", tape_head, tape[tape_head], tape);
	}

	printf("----------Converting first number to unary------------------------------\n");

	while(tape[tape_head] != '#')
	{
		if(tape[tape_head] == '1')
		{
			printf("%c:%c ", tape[tape_head], tape[tape_head]);
			current_loc = tape_head;
			tape[tape_head] = '2';
			printf("%c N tape:%s \n", tape[tape_head], tape);
			// printf("Head Position:%d Symbol:%c Tape:%s\n", tape_head, tape[tape_head], tape);

			while(tape[tape_head] != '_')
			{
				printf("%c:%c %c R tape:%s\n", tape[tape_head], tape[tape_head], tape[tape_head], tape);
				tape_head++;
				// printf("Head Position:%d Symbol:%c Tape:%s\n", tape_head, tape[tape_head], tape);
			}

			printf("%c:%c %c R tape:%s\n", tape[tape_head], tape[tape_head], tape[tape_head], tape);
			tape_head++;
			// printf("Head Position:%d Symbol:%c Tape:%s\n", tape_head, tape[tape_head], tape);

			if(tape[tape_head] == '_')
			{
				printf("%c:%c ", tape[tape_head], tape[tape_head]);
				tape[tape_head] = 'a';
				printf("%c N tape:%s \n", tape[tape_head], tape);
				// printf("Head Position:%d Symbol:%c Tape:%s\n", tape_head, tape[tape_head], tape);
			}
			else if(tape[tape_head] == 'a')
			{
				while(tape[tape_head] != 'c')
				{
					printf("%c:%c ", tape[tape_head], tape[tape_head]);
					tape[tape_head] = 'b';
					printf("%c N tape:%s \n", tape[tape_head], tape);
					tape_head++;
					// printf("Head Position:%d Symbol:%c Tape:%s\n", tape_head, tape[tape_head], tape);


					while(tape[tape_head] == 'a')
					{
						printf("%c:%c %c R tape:%s\n", tape[tape_head], tape[tape_head], tape[tape_head], tape);
						tape_head++;
						// printf("Head Position:%d Symbol:%c Tape:%s\n", tape_head, tape[tape_head], tape);
					}

					while(tape[tape_head] == 'c')
					{
						printf("%c:%c %c R tape:%s\n", tape[tape_head], tape[tape_head], tape[tape_head], tape);
						tape_head++;
						// printf("Head Position:%d Symbol:%c Tape:%s\n", tape_head, tape[tape_head], tape);
					}

					printf("%c:%c ", tape[tape_head], tape[tape_head]);
					tape[tape_head] = 'c';
					printf("%c N tape:%s \n", tape[tape_head], tape);
					// printf("Head Position:%d Symbol:%c Tape:%s\n", tape_head, tape[tape_head], tape);

					while(tape[tape_head] != 'b')
					{
						// tape[tape_head] = 'a';
						printf("%c:%c %c L tape:%s\n", tape[tape_head], tape[tape_head], tape[tape_head], tape);
						tape_head--;
						// printf("Head Position:%d Symbol:%c Tape:%s\n", tape_head, tape[tape_head], tape);
					}

					printf("%c:%c %c R tape:%s\n", tape[tape_head], tape[tape_head], tape[tape_head], tape);
					tape_head++;
					// printf("Head Position:%d Symbol:%c Tape:%s\n", tape_head, tape[tape_head], tape);
				}

				while(tape[tape_head] != '_')
				{
					printf("%c:%c %c R tape:%s\n", tape[tape_head], tape[tape_head], tape[tape_head], tape);
					tape_head++;
				}

				printf("%c:%c ", tape[tape_head], tape[tape_head]);
				tape[tape_head] = 'a';
				printf("%c N tape:%s \n", tape[tape_head], tape);
			}


			while(tape_head != current_loc)
			{
				if(tape[tape_head] == 'b' || tape[tape_head] == 'c')
				{
					printf("%c:%c ", tape[tape_head], tape[tape_head]);
					tape[tape_head] = 'a';
					printf("%c N tape:%s \n", tape[tape_head], tape);
				}

				printf("%c:%c %c L tape:%s\n", tape[tape_head], tape[tape_head], tape[tape_head], tape);
				tape_head--;
				// printf("Head Position:%d Symbol:%c Tape:%s\n", tape_head, tape[tape_head], tape);
			}

			printf("%c:%c %c R tape:%s\n", tape[tape_head], tape[tape_head], tape[tape_head], tape);
			tape_head++;
			// printf("Head Position:%d Symbol:%c Tape:%s\n", tape_head, tape[tape_head], tape);


		}

		else if(tape[tape_head] == '0')
		{
			printf("%c:%c ", tape[tape_head], tape[tape_head]);
			current_loc = tape_head;
			tape[tape_head] = '2';
			printf("%c N tape:%s \n", tape[tape_head], tape);
			// printf("Head Position:%d Symbol:%c Tape:%s\n", tape_head, tape[tape_head], tape);

			while(tape[tape_head] != '_')
			{
				printf("%c:%c %c R tape:%s\n", tape[tape_head], tape[tape_head], tape[tape_head], tape);
				tape_head++;
				// printf("Head Position:%d Symbol:%c Tape:%s\n", tape_head, tape[tape_head], tape);
			}

			printf("%c:%c %c R tape:%s\n", tape[tape_head], tape[tape_head], tape[tape_head], tape);
			tape_head++;
			// printf("Head Position:%d Symbol:%c Tape:%s\n", tape_head, tape[tape_head], tape);

			if(tape[tape_head] == '_')
			{
				printf("%c:%c ", tape[tape_head], tape[tape_head]);
				tape[tape_head] = 'a';
				printf("%c N tape:%s \n", tape[tape_head], tape);
				// printf("Head Position:%d Symbol:%c Tape:%s\n", tape_head, tape[tape_head], tape);
			}
			else if(tape[tape_head] == 'a')
			{
				while(tape[tape_head] != 'c')
				{
					printf("%c:%c ", tape[tape_head], tape[tape_head]);
					tape[tape_head] = 'b';
					printf("%c N tape:%s \n", tape[tape_head], tape);
					tape_head++;
					// printf("Head Position:%d Symbol:%c Tape:%s\n", tape_head, tape[tape_head], tape);


					while(tape[tape_head] == 'a')
					{
						printf("%c:%c %c R tape:%s\n", tape[tape_head], tape[tape_head], tape[tape_head], tape);
						tape_head++;
						// printf("Head Position:%d Symbol:%c Tape:%s\n", tape_head, tape[tape_head], tape);
					}

					while(tape[tape_head] == 'c')
					{
						printf("%c:%c %c R tape:%s\n", tape[tape_head], tape[tape_head], tape[tape_head], tape);
						tape_head++;
						// printf("Head Position:%d Symbol:%c Tape:%s\n", tape_head, tape[tape_head], tape);
					}

					printf("%c:%c ", tape[tape_head], tape[tape_head]);
					tape[tape_head] = 'c';
					printf("%c N tape:%s \n", tape[tape_head], tape);
					// printf("Head Position:%d Symbol:%c Tape:%s\n", tape_head, tape[tape_head], tape);

					while(tape[tape_head] != 'b')
					{
						// tape[tape_head] = 'a';
						printf("%c:%c %c L tape:%s\n", tape[tape_head], tape[tape_head], tape[tape_head], tape);
						tape_head--;
						// printf("Head Position:%d Symbol:%c Tape:%s\n", tape_head, tape[tape_head], tape);
					}

					printf("%c:%c %c R tape:%s\n", tape[tape_head], tape[tape_head], tape[tape_head], tape);
					tape_head++;
					// printf("Head Position:%d Symbol:%c Tape:%s\n", tape_head, tape[tape_head], tape);
				}
			}

			while(tape[tape_head] != '_')
			{
				printf("%c:%c %c R tape:%s\n", tape[tape_head], tape[tape_head], tape[tape_head], tape);
				tape_head++;
			}

			while(tape_head != current_loc)
			{
				if(tape[tape_head] == 'b' || tape[tape_head] == 'c')
				{
					printf("%c:%c ", tape[tape_head], tape[tape_head]);
					tape[tape_head] = 'a';
					printf("%c N tape:%s \n", tape[tape_head], tape);
				}

				printf("%c:%c %c L tape:%s\n", tape[tape_head], tape[tape_head], tape[tape_head], tape);				
				tape_head--;
				// printf("Head Position:%d Symbol:%c Tape:%s\n", tape_head, tape[tape_head], tape);
			}

			printf("%c:%c %c R tape:%s\n", tape[tape_head], tape[tape_head], tape[tape_head], tape);
			tape_head++;
			// printf("Head Position:%d Symbol:%c Tape:%s\n", tape_head, tape[tape_head], tape);
		}

	}

	printf("%c:%c %c R tape:%s\n", tape[tape_head], tape[tape_head], tape[tape_head], tape);
	tape_head++;

	while(tape[tape_head] != '_')
	{
		printf("%c:%c %c R tape:%s\n", tape[tape_head], tape[tape_head], tape[tape_head], tape);
		tape_head++;
	}

	printf("%c:%c %c R tape:%s\n", tape[tape_head], tape[tape_head], tape[tape_head], tape);
	tape_head++;

	while(tape[tape_head] != '_')
	{
		printf("%c:%c %c R tape:%s\n", tape[tape_head], tape[tape_head], tape[tape_head], tape);
		tape_head++;
	}

	printf("%c:%c ", tape[tape_head], tape[tape_head]);
	tape[tape_head] = '$';
	printf("%c N tape:%s \n", tape[tape_head], tape);

	while(tape[tape_head] != '#')
	{
		printf("%c:%c %c L tape:%s\n", tape[tape_head], tape[tape_head], tape[tape_head], tape);
		tape_head--;
	}

	printf("%c:%c %c R tape:%s\n", tape[tape_head], tape[tape_head], tape[tape_head], tape);
	tape_head++;

	printf("----------Converting second number to unary------------------------------\n");

	while(tape[tape_head] != '_')
	{
		if(tape[tape_head] == '1')
		{
			printf("%c:%c ", tape[tape_head], tape[tape_head]);
			current_loc = tape_head;
			tape[tape_head] = '2';
			printf("%c N tape:%s \n", tape[tape_head], tape);
			// printf("Head Position:%d Symbol:%c Tape:%s\n", tape_head, tape[tape_head], tape);

			while(tape[tape_head] != '$')
			{
				printf("%c:%c %c R tape:%s\n", tape[tape_head], tape[tape_head], tape[tape_head], tape);
				tape_head++;
				// printf("Head Position:%d Symbol:%c Tape:%s\n", tape_head, tape[tape_head], tape);
			}

			printf("%c:%c %c R tape:%s\n", tape[tape_head], tape[tape_head], tape[tape_head], tape);
			tape_head++;
			// printf("Head Position:%d Symbol:%c Tape:%s\n", tape_head, tape[tape_head], tape);

			if(tape[tape_head] == '_')
			{
				printf("%c:%c ", tape[tape_head], tape[tape_head]);
				tape[tape_head] = 'a';
				printf("%c N tape:%s \n", tape[tape_head], tape);
				// printf("Head Position:%d Symbol:%c Tape:%s\n", tape_head, tape[tape_head], tape);
			}
			else if(tape[tape_head] == 'a')
			{
				while(tape[tape_head] != 'c')
				{
					printf("%c:%c ", tape[tape_head], tape[tape_head]);
					tape[tape_head] = 'b';
					printf("%c N tape:%s \n", tape[tape_head], tape);
					tape_head++;
					// printf("Head Position:%d Symbol:%c Tape:%s\n", tape_head, tape[tape_head], tape);


					while(tape[tape_head] == 'a')
					{
						printf("%c:%c %c R tape:%s\n", tape[tape_head], tape[tape_head], tape[tape_head], tape);
						tape_head++;
						// printf("Head Position:%d Symbol:%c Tape:%s\n", tape_head, tape[tape_head], tape);
					}

					while(tape[tape_head] == 'c')
					{
						printf("%c:%c %c R tape:%s\n", tape[tape_head], tape[tape_head], tape[tape_head], tape);
						tape_head++;
						// printf("Head Position:%d Symbol:%c Tape:%s\n", tape_head, tape[tape_head], tape);
					}

					printf("%c:%c ", tape[tape_head], tape[tape_head]);
					tape[tape_head] = 'c';
					printf("%c N tape:%s \n", tape[tape_head], tape);
					// printf("Head Position:%d Symbol:%c Tape:%s\n", tape_head, tape[tape_head], tape);

					while(tape[tape_head] != 'b')
					{
						// tape[tape_head] = 'a';
						printf("%c:%c %c L tape:%s\n", tape[tape_head], tape[tape_head], tape[tape_head], tape);
						tape_head--;
						// printf("Head Position:%d Symbol:%c Tape:%s\n", tape_head, tape[tape_head], tape);
					}

					printf("%c:%c %c R tape:%s\n", tape[tape_head], tape[tape_head], tape[tape_head], tape);
					tape_head++;
					// printf("Head Position:%d Symbol:%c Tape:%s\n", tape_head, tape[tape_head], tape);
				}

				while(tape[tape_head] != '_')
				{
					printf("%c:%c %c R tape:%s\n", tape[tape_head], tape[tape_head], tape[tape_head], tape);
					tape_head++;
				}

				printf("%c:%c ", tape[tape_head], tape[tape_head]);
				tape[tape_head] = 'a';
				printf("%c N tape:%s \n", tape[tape_head], tape);
			}


			while(tape_head != current_loc)
			{
				if(tape[tape_head] == 'b' || tape[tape_head] == 'c')
				{
					printf("%c:%c ", tape[tape_head], tape[tape_head]);
					tape[tape_head] = 'a';
					printf("%c N tape:%s \n", tape[tape_head], tape);
				}

				printf("%c:%c %c L tape:%s\n", tape[tape_head], tape[tape_head], tape[tape_head], tape);
				tape_head--;
				// printf("Head Position:%d Symbol:%c Tape:%s\n", tape_head, tape[tape_head], tape);
			}

			printf("%c:%c %c R tape:%s\n", tape[tape_head], tape[tape_head], tape[tape_head], tape);
			tape_head++;
			// printf("Head Position:%d Symbol:%c Tape:%s\n", tape_head, tape[tape_head], tape);


		}

		else if(tape[tape_head] == '0')
		{
			printf("%c:%c ", tape[tape_head], tape[tape_head]);
			current_loc = tape_head;
			tape[tape_head] = '2';
			printf("%c N tape:%s \n", tape[tape_head], tape);
			// printf("Head Position:%d Symbol:%c Tape:%s\n", tape_head, tape[tape_head], tape);

			while(tape[tape_head] != '$')
			{
				printf("%c:%c %c R tape:%s\n", tape[tape_head], tape[tape_head], tape[tape_head], tape);
				tape_head++;
				// printf("Head Position:%d Symbol:%c Tape:%s\n", tape_head, tape[tape_head], tape);
			}

			printf("%c:%c %c R tape:%s\n", tape[tape_head], tape[tape_head], tape[tape_head], tape);
			tape_head++;
			// printf("Head Position:%d Symbol:%c Tape:%s\n", tape_head, tape[tape_head], tape);

			if(tape[tape_head] == '_')
			{
				printf("%c:%c ", tape[tape_head], tape[tape_head]);
				tape[tape_head] = 'a';
				printf("%c N tape:%s \n", tape[tape_head], tape);
				// printf("Head Position:%d Symbol:%c Tape:%s\n", tape_head, tape[tape_head], tape);
			}
			else if(tape[tape_head] == 'a')
			{
				while(tape[tape_head] != 'c')
				{
					printf("%c:%c ", tape[tape_head], tape[tape_head]);
					tape[tape_head] = 'b';
					printf("%c N tape:%s \n", tape[tape_head], tape);
					tape_head++;
					// printf("Head Position:%d Symbol:%c Tape:%s\n", tape_head, tape[tape_head], tape);


					while(tape[tape_head] == 'a')
					{
						printf("%c:%c %c R tape:%s\n", tape[tape_head], tape[tape_head], tape[tape_head], tape);
						tape_head++;
						// printf("Head Position:%d Symbol:%c Tape:%s\n", tape_head, tape[tape_head], tape);
					}

					while(tape[tape_head] == 'c')
					{
						printf("%c:%c %c R tape:%s\n", tape[tape_head], tape[tape_head], tape[tape_head], tape);
						tape_head++;
						// printf("Head Position:%d Symbol:%c Tape:%s\n", tape_head, tape[tape_head], tape);
					}

					printf("%c:%c ", tape[tape_head], tape[tape_head]);
					tape[tape_head] = 'c';
					printf("%c N tape:%s \n", tape[tape_head], tape);
					// printf("Head Position:%d Symbol:%c Tape:%s\n", tape_head, tape[tape_head], tape);

					while(tape[tape_head] != 'b')
					{
						// tape[tape_head] = 'a';
						printf("%c:%c %c L tape:%s\n", tape[tape_head], tape[tape_head], tape[tape_head], tape);
						tape_head--;
						// printf("Head Position:%d Symbol:%c Tape:%s\n", tape_head, tape[tape_head], tape);
					}

					printf("%c:%c %c R tape:%s\n", tape[tape_head], tape[tape_head], tape[tape_head], tape);
					tape_head++;
					// printf("Head Position:%d Symbol:%c Tape:%s\n", tape_head, tape[tape_head], tape);
				}
			}

			while(tape[tape_head] != '_')
			{
				printf("%c:%c %c R tape:%s\n", tape[tape_head], tape[tape_head], tape[tape_head], tape);
				tape_head++;
			}

			while(tape_head != current_loc)
			{
				if(tape[tape_head] == 'b' || tape[tape_head] == 'c')
				{
					printf("%c:%c ", tape[tape_head], tape[tape_head]);
					tape[tape_head] = 'a';
					printf("%c N tape:%s \n", tape[tape_head], tape);
				}
				printf("%c:%c %c L tape:%s\n", tape[tape_head], tape[tape_head], tape[tape_head], tape);
				tape_head--;
				// printf("Head Position:%d Symbol:%c Tape:%s\n", tape_head, tape[tape_head], tape);
			}
			printf("%c:%c %c R tape:%s\n", tape[tape_head], tape[tape_head], tape[tape_head], tape);
			tape_head++;
			// printf("Head Position:%d Symbol:%c Tape:%s\n", tape_head, tape[tape_head], tape);
		}

	}

	printf("%c:%c ", tape[tape_head], tape[tape_head]);
	tape[tape_head] = '&';
	printf("%c N tape:%s \n", tape[tape_head], tape);
	// printf("Head Position:%d Symbol:%c Tape:%s\n", tape_head, tape[tape_head], tape);

	printf("%c:%c %c R tape:%s\n", tape[tape_head], tape[tape_head], tape[tape_head], tape);
	tape_head++;
	// printf("Head Position:%d Symbol:%c Tape:%s\n", tape_head, tape[tape_head], tape);

	printf("----------Performing repeated subtraction------------------------------\n");

	while(tape[tape_head] != '$')
	{
		printf("%c:%c ", tape[tape_head], tape[tape_head]);
		current_loc = tape_head;
		tape[tape_head] = 'b';
		printf("%c N tape:%s \n", tape[tape_head], tape);
		// printf("Head Position:%d Symbol:%c Tape:%s\n", tape_head, tape[tape_head], tape);

		while(tape[tape_head] != '$')
		{
			printf("%c:%c %c R tape:%s\n", tape[tape_head], tape[tape_head], tape[tape_head], tape);
			tape_head++;
			// printf("Head Position:%d Symbol:%c Tape:%s\n", tape_head, tape[tape_head], tape);
		}

		printf("%c:%c %c R tape:%s\n", tape[tape_head], tape[tape_head], tape[tape_head], tape);
		tape_head++;
		// printf("Head Position:%d Symbol:%c Tape:%s\n", tape_head, tape[tape_head], tape);

		while(tape[tape_head] == 'b')
		{
			printf("%c:%c %c R tape:%s\n", tape[tape_head], tape[tape_head], tape[tape_head], tape);
			tape_head++;
			// printf("Head Position:%d Symbol:%c Tape:%s\n", tape_head, tape[tape_head], tape);
		}

		if(tape[tape_head] == 'a')
		{
			printf("%c:%c ", tape[tape_head], tape[tape_head]);
			tape[tape_head] = 'b';
			printf("%c N tape:%s \n", tape[tape_head], tape);
			// printf("Head Position:%d Symbol:%c Tape:%s\n", tape_head, tape[tape_head], tape);
		}

		else if(tape[tape_head] == '_')
		{
			while(tape[tape_head] != '$')
			{
				if(tape[tape_head] == 'b')
				{
					printf("%c:%c ", tape[tape_head], tape[tape_head]);
					tape[tape_head] = 'a';
					printf("%c N tape:%s \n", tape[tape_head], tape);
					// printf("Head Position:%d Symbol:%c Tape:%s\n", tape_head, tape[tape_head], tape);
				}
				printf("%c:%c %c L tape:%s\n", tape[tape_head], tape[tape_head], tape[tape_head], tape);
				tape_head--;
				// printf("Head Position:%d Symbol:%c Tape:%s\n", tape_head, tape[tape_head], tape);
			}

			printf("%c:%c %c R tape:%s\n", tape[tape_head], tape[tape_head], tape[tape_head], tape);
			tape_head++;
			// printf("Head Position:%d Symbol:%c Tape:%s\n", tape_head, tape[tape_head], tape);

			printf("%c:%c ", tape[tape_head], tape[tape_head]);
			tape[tape_head] = 'b';
			printf("%c N tape:%s \n", tape[tape_head], tape);
			// printf("Head Position:%d Symbol:%c Tape:%s\n", tape_head, tape[tape_head], tape);
		}

		while(tape_head != current_loc)
		{
			printf("%c:%c %c L tape:%s\n", tape[tape_head], tape[tape_head], tape[tape_head], tape);
			tape_head--;
			// printf("Head Position:%d Symbol:%c Tape:%s\n", tape_head, tape[tape_head], tape);
		}

		printf("%c:%c %c R tape:%s\n", tape[tape_head], tape[tape_head], tape[tape_head], tape);
		tape_head++;
		// printf("Head Position:%d Symbol:%c Tape:%s\n", tape_head, tape[tape_head], tape);


	}

	while(tape[tape_head] != '_')
	{
		printf("%c:%c %c R tape:%s\n", tape[tape_head], tape[tape_head], tape[tape_head], tape);
		tape_head++;
	}

	printf("%c:%c ", tape[tape_head], tape[tape_head]);
	tape[tape_head] = '@';
	printf("%c N tape:%s \n", tape[tape_head], tape);

	// printf("Head Position:%d Symbol:%c Tape:%s\n", tape_head, tape[tape_head], tape);

	while(tape[tape_head] != '$')
	{
		printf("%c:%c %c L tape:%s\n", tape[tape_head], tape[tape_head], tape[tape_head], tape);
		tape_head--;
		// printf("Head Position:%d Symbol:%c Tape:%s\n", tape_head, tape[tape_head], tape);
	}

	printf("%c:%c %c R tape:%s\n", tape[tape_head], tape[tape_head], tape[tape_head], tape);
	tape_head++;
	// printf("Head Position:%d Symbol:%c Tape:%s\n", tape_head, tape[tape_head], tape);

	printf("----------Obtaining remainder------------------------------\n");

	if(tape[tape_head + 1] != '@' || 1)
	{
		while(tape[tape_head] == 'b')
		{
			current_loc = tape_head;

			printf("%c:%c ", tape[tape_head], tape[tape_head]);
			tape[tape_head] = 'c';
			printf("%c N tape:%s \n", tape[tape_head], tape);
			// printf("Head Position:%d Symbol:%c Tape:%s\n", tape_head, tape[tape_head], tape);

			while(tape[tape_head] != '@')
			{
				printf("%c:%c %c R tape:%s\n", tape[tape_head], tape[tape_head], tape[tape_head], tape);
				tape_head++;
				// printf("Head Position:%d Symbol:%c Tape:%s\n", tape_head, tape[tape_head], tape);
			}

			printf("%c:%c %c R tape:%s\n", tape[tape_head], tape[tape_head], tape[tape_head], tape);
			tape_head++;
			// printf("Head Position:%d Symbol:%c Tape:%s\n", tape_head, tape[tape_head], tape);

			while(tape[tape_head] == '1')
			{
				printf("%c:%c %c R tape:%s\n", tape[tape_head], tape[tape_head], tape[tape_head], tape);
				tape_head++;
				// printf("Head Position:%d Symbol:%c Tape:%s\n", tape_head, tape[tape_head], tape);
			}

			printf("%c:%c ", tape[tape_head], tape[tape_head]);
			tape[tape_head] = '1';
			printf("%c N tape:%s \n", tape[tape_head], tape);
			// printf("Head Position:%d Symbol:%c Tape:%s\n", tape_head, tape[tape_head], tape);

			while(tape_head != current_loc)
			{
				printf("%c:%c %c L tape:%s\n", tape[tape_head], tape[tape_head], tape[tape_head], tape);
				tape_head--;
				// printf("Head Position:%d Symbol:%c Tape:%s\n", tape_head, tape[tape_head], tape);
			}

			printf("%c:%c %c R tape:%s\n", tape[tape_head], tape[tape_head], tape[tape_head], tape);
			tape_head++;
			// printf("Head Position:%d Symbol:%c Tape:%s\n", tape_head, tape[tape_head], tape);
		}

		if(tape[tape_head] == '@')
		{
			printf("%c:%c %c R tape:%s\n", tape[tape_head], tape[tape_head], tape[tape_head], tape);
			tape_head++;

			current_loc = tape_head;

			while(tape[tape_head] != '_')
			{
				printf("%c:%c ", tape[tape_head], tape[tape_head]);
				tape[tape_head] = '_';
				printf("%c N tape:%s \n", tape[tape_head], tape);
				tape_head++;
			}

			while(tape[tape_head] != '@')
			{
				printf("%c:%c %c L tape:%s\n", tape[tape_head], tape[tape_head], tape[tape_head], tape);
				tape_head--;
			}

		}

		else
		{
			while(tape[tape_head] != '@')
			{
				printf("%c:%c %c R tape:%s\n", tape[tape_head], tape[tape_head], tape[tape_head], tape);
				tape_head++;
			}
		}

		printf("Final tape head Position\n");
		printf("%s\n", tape);
		for(i = 0;i <= tape_head;i++)
		{
			printf(" ");
		}
		printf("^\n");
	}

	else
	{
		printf("%c:%c %c R tape:%s\n", tape[tape_head], tape[tape_head], tape[tape_head], tape);
		// printf("Head Position:%d Symbol:%c Tape:%s\n", tape_head, tape[tape_head], tape);
	}




}