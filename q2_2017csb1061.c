#include<stdio.h>
#include<string.h>
#define MAX_TAPE_LENGTH 1000

int main()
{
	char tape[MAX_TAPE_LENGTH];
	int i,j, tape_head;
	printf("Enter input:\n");
	scanf("%s", tape);

	char blanks[15] = "_______________";

	// for(i = 0;i < 15;i++)
	// {
	// 	tape[strlen(tape)] = '_';	
	// }

	strcat(tape,"_______________");
	
	printf("%s\n", tape);
	printf("%d\n", strlen(tape));

	int num_vertices = 0, counter = 0, current_loc;

	for(i = 0; tape[i] != '#'; i++)
	{
		if(tape[i] == '0')
		{
			num_vertices = 2*num_vertices;
		}
		else if(tape[i] == '1')
		{
			num_vertices = 2*num_vertices + 1;
		}
	}

	printf("count:%d\n", num_vertices);

	for(tape_head = 0;tape[tape_head] != '#';tape_head++)
	{
		//printf("%c:%c %c R tape:%s\n", tape[tape_head], tape[tape_head], tape[tape_head], tape);
	}//Increment tape head till first #
	
	

	tape_head++;
	//printf("%c:%c %c R tape:%s\n", tape[tape_head], tape[tape_head], tape[tape_head], tape);

	printf("line 50 Head_position:%d Symbol:%c Tape:%s\n", tape_head, tape[tape_head],tape);

	//First writing of ones

	// while(tape[tape_head] != '#')
	// {
	// 	if(tape[tape_head] == '0')
	// 	{
	// 		printf("%c:%c ", tape[tape_head], tape[tape_head]);
	// 		tape[tape_head] = '2';
	// 		printf("%c N tape:%s \n", tape[tape_head], tape);
	// 		tape_head++;
	// 		//printf("Head_position:%d Symbol:%c Tape:%s\n", tape_head, tape[tape_head],tape);
	// 	}

	// 	else if (tape[tape_head] == '1')
	// 	{
	// 		printf("%c:%c ", tape[tape_head], tape[tape_head]);
	// 		current_loc = tape_head;
	// 		tape[tape_head] = '2';
	// 		printf("%c N tape:%s \n", tape[tape_head], tape);

	// 		while(tape[tape_head] != '_')
	// 		{
	// 			printf("%c:%c %c R tape:%s\n", tape[tape_head], tape[tape_head], tape[tape_head], tape);
	// 			tape_head++;
				
	// 			//printf("Head_position:%d Symbol:%c Tape:%s\n", tape_head, tape[tape_head],tape);
	// 		}
			
	// 		printf("%c:%c %c R tape:%s\n", tape[tape_head], tape[tape_head], tape[tape_head], tape);
	// 		tape_head++;
			
	// 		//printf("Head_position:%d Symbol:%c Tape:%s\n", tape_head, tape[tape_head],tape);

	// 		if(tape[tape_head] == '_')
	// 		{
	// 			printf("%c:%c ", tape[tape_head], tape[tape_head]);
	// 			tape[tape_head] = '1';
	// 			printf("%c N tape:%s \n", tape[tape_head], tape);
	// 			while(tape_head != current_loc)
	// 			{
	// 				printf("%c:%c %c L tape:%s\n", tape[tape_head], tape[tape_head], tape[tape_head], tape);
	// 				tape_head--;
					
	// 				//printf("Head_position:%d Symbol:%c Tape:%s\n", tape_head, tape[tape_head],tape);
	// 			}
	// 			printf("%c:%c %c R tape:%s\n", tape[tape_head], tape[tape_head], tape[tape_head], tape);
	// 			tape_head++;
					
	// 		}

	// 		else if(tape[tape_head] == '1')
	// 		{
	// 			while(tape[tape_head] == '1')
	// 			{
	// 				printf("%c:%c %c R tape:%s\n", tape[tape_head], tape[tape_head], tape[tape_head], tape);
	// 				tape_head++;
					
	// 				//printf("Head_position:%d Symbol:%c Tape:%s\n", tape_head, tape[tape_head],tape);
	// 			}
	// 			printf("%c:%c ", tape[tape_head], tape[tape_head]);
	// 			tape[tape_head] = '1';
	// 			printf("%c N tape:%s \n", tape[tape_head], tape);

	// 			while(tape_head != current_loc)
	// 			{
	// 				printf("%c:%c %c L tape:%s\n", tape[tape_head], tape[tape_head], tape[tape_head], tape);
	// 				tape_head--;
					
	// 				//printf("Head_position:%d Symbol:%c Tape:%s\n", tape_head, tape[tape_head],tape);
	// 			}
	// 			printf("%c:%c %c R tape:%s\n", tape[tape_head], tape[tape_head], tape[tape_head], tape);	
	// 			tape_head++;
				
	// 		}
			
	// 		//printf("Head_position:%d Symbol:%c Tape:%s\n", tape_head, tape[tape_head],tape);
	// 	}
	// }

	// printf("%c:%c %c R tape:%s\n", tape[tape_head], tape[tape_head], tape[tape_head], tape);
	// tape_head++;
	
	//printf("Head_position:%d Symbol:%c Tape:%s\n", tape_head, tape[tape_head],tape);

	while(counter < num_vertices)
	{
		if(tape[tape_head] == '0')
		{
			printf("%c:%c ", tape[tape_head], tape[tape_head]);
			tape[tape_head] = '2';
			printf("%c N tape:%s \n", tape[tape_head], tape);
			tape_head++;
			// printf("line 144 Head_position:%d Symbol:%c Tape:%s\n", tape_head, tape[tape_head],tape);
		}

		else if(tape[tape_head] == '1')
		{
			printf("%c:%c ", tape[tape_head], tape[tape_head]);
			current_loc = tape_head;
			tape[tape_head] = '2';
			printf("%c N tape:%s \n", tape[tape_head], tape);

			while(tape[tape_head]!='_')
			{
				//printf("%c:%c %c R tape:%s\n", tape[tape_head], tape[tape_head], tape[tape_head], tape);
				tape_head++;
				
				// printf("line 159:Head_position:%d Symbol:%c Tape:%s\n", tape_head, tape[tape_head],tape);
			}

			printf("%c:%c %c R tape:%s\n", tape[tape_head], tape[tape_head], tape[tape_head], tape);
			tape_head++;
			
			// printf("line 165 Head_position:%d Symbol:%c Tape:%s\n", tape_head, tape[tape_head],tape);

			if(tape[tape_head] == '1')
			{
				printf("%c:%c ", tape[tape_head], tape[tape_head]);
				tape[tape_head] = '2';
				printf("%c N tape:%s \n", tape[tape_head], tape);
				while(tape_head != current_loc)
				{
					printf("%c:%c %c L tape:%s\n", tape[tape_head], tape[tape_head], tape[tape_head], tape);
					tape_head--;
					
					// printf("line 177 Head_position:%d Symbol:%c Tape:%s\n", tape_head, tape[tape_head],tape);
				}
				printf("%c:%c %c R tape:%s\n", tape[tape_head], tape[tape_head], tape[tape_head], tape);
				tape_head++;
				
				// printf("line 182 Head_position:%d Symbol:%c Tape:%s\n", tape_head, tape[tape_head],tape);
			}

			else if(tape[tape_head] == '2')
			{
				while(tape[tape_head] == '2')
				{
					printf("%c:%c %c R tape:%s\n", tape[tape_head], tape[tape_head], tape[tape_head], tape);
					tape_head++;
					
					// printf("line 192 Head_position:%d Symbol:%c Tape:%s\n", tape_head, tape[tape_head],tape);
				}

				if(tape[tape_head] == '1')
				{
					printf("%c:%c ", tape[tape_head], tape[tape_head]);
					tape[tape_head] = '2';
					printf("%c N tape:%s \n", tape[tape_head], tape);
					while(tape_head != current_loc)
					{
						printf("%c:%c %c L tape:%s\n", tape[tape_head], tape[tape_head], tape[tape_head], tape);
						tape_head--;
						
						// printf("line 205 Head_position:%d Symbol:%c Tape:%s\n", tape_head, tape[tape_head],tape);
					}
					printf("%c:%c %c R tape:%s\n", tape[tape_head], tape[tape_head], tape[tape_head], tape);
					tape_head++;
					
					// printf("line 210 Head_position:%d Symbol:%c Tape:%s\n", tape_head, tape[tape_head],tape);
				}

				else if(tape[tape_head] == '_')
				{
					printf("%c:%c ", tape[tape_head], tape[tape_head]);
					// printf("line 216");
					tape[tape_head] = '0';
					printf("%c N tape:%s \n", tape[tape_head], tape);
					while(tape_head != current_loc)
					{
						printf("%c:%c %c L tape:%s\n", tape[tape_head], tape[tape_head], tape[tape_head], tape);
						tape_head--;
						
						// printf("line 224 Head_position:%d Symbol:%c Tape:%s\n", tape_head, tape[tape_head],tape);
					}
					printf("%c:%c %c R tape:%s\n", tape[tape_head], tape[tape_head], tape[tape_head], tape);
					tape_head++;
					
					// printf("Head_position:%d Symbol:%c Tape:%s\n", tape_head, tape[tape_head],tape);
				}

				else if(tape[tape_head] == '0')
				{
					// printf("line 234\n");
					while(tape[tape_head] == '0')
					{
						printf("%c:%c %c R tape:%s\n", tape[tape_head], tape[tape_head], tape[tape_head], tape);
						tape_head++;
					}
					printf("%c:%c ", tape[tape_head], tape[tape_head]);
					tape[tape_head] = '0';
					printf("%c N tape:%s \n", tape[tape_head], tape);

					while(tape_head != current_loc)
					{
						printf("%c:%c %c L tape:%s\n", tape[tape_head], tape[tape_head], tape[tape_head], tape);
						tape_head--;
					}
					printf("%c:%c %c R tape:%s\n", tape[tape_head], tape[tape_head], tape[tape_head], tape);
					tape_head++;

				}
			}

			else if(tape[tape_head] == '_')
			{
				printf("%c:%c ", tape[tape_head], tape[tape_head]);
				tape[tape_head] = '0';
				printf("%c N tape:%s \n", tape[tape_head], tape);
				while(tape_head != current_loc)
				{
					printf("%c:%c %c L tape:%s\n", tape[tape_head], tape[tape_head], tape[tape_head], tape);
					tape_head--;
					
					// printf("line 265 Head_position:%d Symbol:%c Tape:%s\n", tape_head, tape[tape_head],tape);
				}
				printf("%c:%c %c R tape:%s\n", tape[tape_head], tape[tape_head], tape[tape_head], tape);
				tape_head++;
				
				// printf("line 270 Head_position:%d Symbol:%c Tape:%s\n", tape_head, tape[tape_head],tape);
			}

			else if(tape[tape_head] == '0')
			{
				// printf("line 275\n");
				while(tape[tape_head] == '0')
				{
					printf("%c:%c %c R tape:%s\n", tape[tape_head], tape[tape_head], tape[tape_head], tape);
					tape_head++;
				}
				printf("%c:%c ", tape[tape_head], tape[tape_head]);
				tape[tape_head] = '0';
				printf("%c N tape:%s \n", tape[tape_head], tape);

				while(tape_head != current_loc)
				{
					printf("%c:%c %c L tape:%s\n", tape[tape_head], tape[tape_head], tape[tape_head], tape);
					tape_head--;
				}
				printf("%c:%c %c R tape:%s\n", tape[tape_head], tape[tape_head], tape[tape_head], tape);
				tape_head++;
			}
		}

		else if(tape[tape_head] == '#')
		{
			counter++;
			//printf("counter:%d\n", counter);
			current_loc = tape_head;

			printf("%c:%c %c R tape:%s\n", tape[tape_head], tape[tape_head], tape[tape_head], tape);
			tape_head++;
			
			// printf("line 304 Head_position:%d Symbol:%c Tape:%s\n", tape_head, tape[tape_head],tape);

			while(tape[tape_head] != '_')
			{
				printf("%c:%c %c R tape:%s\n", tape[tape_head], tape[tape_head], tape[tape_head], tape);
				tape_head++;
				
				// printf("line 311 Head_position:%d Symbol:%c Tape:%s\n", tape_head, tape[tape_head],tape);
			}
			
			// while(tape[tape_head] == '_')
			// {
			// 	//printf("%c:%c %c R tape:%s\n", tape[tape_head], tape[tape_head], tape[tape_head], tape);
			// 	tape_head++;
				
			// 	printf("line 319 Head_position:%d Symbol:%c Tape:%s\n", tape_head, tape[tape_head],tape);
			// }
			 tape_head++;
			

			while(tape[tape_head] == '2' || tape[tape_head] == '0')
			{
				printf("%c:%c ", tape[tape_head], tape[tape_head]);
				tape[tape_head] = '1';
				printf("%c N tape:%s \n", tape[tape_head], tape);
				tape_head++;
				// printf("line 330 Head_position:%d Symbol:%c Tape:%s\n", tape_head, tape[tape_head],tape);
			}

			while(tape_head != current_loc)
			{
				printf("%c:%c %c L tape:%s\n", tape[tape_head], tape[tape_head], tape[tape_head], tape);
				tape_head--;
				
				//printf("Head_position:%d Symbol:%c Tape:%s\n", tape_head, tape[tape_head],tape);
			}
			printf("%c:%c %c R tape:%s\n", tape[tape_head], tape[tape_head], tape[tape_head], tape);
			tape_head++;
			
			// printf("line 343 Head_position:%d Symbol:%c Tape:%s\n", tape_head, tape[tape_head],tape);
		}
	}

	printf("Final tape head position\n");

	printf("%s\n", tape);
	// printf("Head_position:%d Symbol:%c\n", tape_head, tape[tape_head]);
	tape_head++;

	for(i = 0;i < tape_head;i++)
	{
		printf(" ");
	}
	printf("^\n");


	
}