#include <stdio.h>
#include <stdlib.h>
//Brandon Boutchyard
//11-28-2021

void addition(int* counterRadd, int* counterAadd); //Functions are here
void division(int* counterRadd, int* counterAadd);
void multiplication(int* counterRadd, int* counterAadd);
void subtraction(int* counterRadd, int* counterAadd);

int main() 
{
	int option; //Declarations
	int sentinel;
	int counterR;
	int counterA;
	float percent;
	counterR = 0;
	counterA = 0;
	sentinel = 1; //Sentinel set to 0 to get loop started
	
	while (sentinel != 5) //While set to under 5 for exit option
	{
	
	printf("Math Practice Program Main Menu\n"); //Title
	printf("\n\n1. Addition"); //Options
	printf("\n2. Subtraction"); 
	printf("\n3. Multiplication"); 
	printf("\n4. Division"); 
	printf("\n5. Exit\n"); 
	printf("\nSelect an option: "); 
		scanf(" %d", &option); //user selects option
		if (option == 1) //if statements are made for user selection
		{
			addition(&counterR, &counterA);
			
		}
			else 
			{
				if (option==2 )
				{
					 subtraction(&counterR, &counterA);
					 
				}
					else 
					{
						if (option==3)
						{
							multiplication(&counterR, &counterA);
							
						}
							else
							{
								if (option==4)
								{
									division(&counterR, &counterA);
						
								}
							}
						}
					}
			if (option == 5)
			{
				sentinel = 5;
			}
			else
			{
				sentinel = 1;
			}
		}
		printf("You got %d questions correct.\n", counterR);
		printf("Total attemps: %d\n", counterA);
		percent = (float)counterR / (float)counterA;
		printf("Percent correct: %.2f", percent);    //Algorithm fixed need to recode to make faster
		return 0;
}

void addition(int* counterRadd, int* counterAadd) //function work for addition
{
	int answer;
	int num1;
	int num2;
	int sentinel;
	char difficultyLevel;
	
	
	printf("Please enter difficulty level (E for Easy, M for Medium, or H for Hard): \n");
	scanf(" %c", &difficultyLevel);
	
	if (difficultyLevel == 'E') 
	{
		num1=rand()%10+1;
		num2=rand()%10+1;
	}
	else if (difficultyLevel=='M')
	{
		num1=rand()%100+1;
		num2=rand()%100+1;
	}
	else
	{
		num1=rand()%1000+1;
		num2=rand()%1000+1;
	}
	printf(" %d + %d = ?\n", num1, num2);
    for (sentinel = 1; sentinel <= 3; sentinel++) 
	{
        scanf(" %d", &answer);
    if (answer != num1+num2) 
	{
            printf("Sorry, incorrect. Please try again\n");
    } 
	else 
	{
            printf("Correct!\n");
            sentinel = 3;
            *counterRadd = *counterRadd + 1;
    }
            *counterAadd = *counterAadd + 1;
	}
return;
}

void division(int* counterRadd, int* counterAadd)
{
	int answer;
	int num1;
	int num2;
	int sentinel;
	char difficultyLevel;
	
	printf("Please enter difficulty level (E for Easy, M for Medium, or H for Hard): \n");
	scanf(" %c", &difficultyLevel);
	
	if (difficultyLevel == 'E') 
	{
		num1=rand()%10/1;
		num2=rand()%10/1;
	}
	else if (difficultyLevel=='M')
	{
		num1=rand()%100/1;
		num2=rand()%100/1;
	}
	else
	{
		num1=rand()%1000/1;
		num2=rand()%1000/1;
	}
	printf(" %d / %d = ?\n", num1, num2);
    for (sentinel = 1; sentinel <= 3; sentinel++) 
	{
        scanf(" %d", &answer);
    if (answer != num1/num2) 
	{
            printf("Sorry, incorrect. Please try again\n");
    } 
	else 
	{
            printf("Correct!\n");
            sentinel = 3;
            *counterRadd = *counterRadd + 1;
    }
            *counterAadd = *counterAadd + 1;
    }
return;
}

void multiplication(int* counterRadd, int* counterAadd)
{
	int answer;
	int num1;
	int num2;
	int sentinel;
	char difficultyLevel;
	
	printf("Please enter difficulty level (E for Easy, M for Medium, or H for Hard): \n");
	scanf(" %c", &difficultyLevel);
	
	if (difficultyLevel == 'E') 
	{
		num1=rand()%10+1;
		num2=rand()%10+1;
	}
	else if (difficultyLevel=='M')
	{
		num1=rand()%100+1;
		num2=rand()%100+1;
	}
	else
	{
		num1=rand()%1000+1;
		num2=rand()%1000+1;
	}
	printf(" %d x %d = ?\n", num1, num2);
    for (sentinel = 1; sentinel <= 3; sentinel++) 
	{
        scanf(" %d", &answer);
    if (answer != num1*num2) 
	{
            printf("Sorry, incorrect. Please try again\n");
    } 
	else 
	{
            printf("Correct!\n");
            sentinel = 3;
            *counterRadd = *counterRadd + 1;
    }
            *counterAadd = *counterAadd + 1;
    } 
return;
}

void subtraction(int* counterRadd, int* counterAadd)
{
	int answer;
	int num1;
	int num2;
	int sentinel;
	char difficultyLevel;
	
	printf("Please enter difficulty level (E for Easy, M for Medium, or H for Hard): \n");
	scanf(" %c", &difficultyLevel);
	
	if (difficultyLevel == 'E') 
	{
		num1=rand()%10+1;
		num2=rand()%10+1;
	}
	else if (difficultyLevel=='M')
	{
		num1=rand()%100+1;
		num2=rand()%100+1;
	}
	else
	{
		num1=rand()%1000+1;
		num2=rand()%1000+1;
	}
	printf(" %d - %d = ?\n", num1, num2);
    for (sentinel = 1; sentinel <= 3; sentinel++) 
	{
        scanf(" %d", &answer);
    if (answer != num1-num2) 
	{
            printf("Sorry, incorrect. Please try again\n");
    } 
	else 
	{
            printf("Correct!\n");
            sentinel = 3;
            *counterRadd = *counterRadd + 1;
    }
            *counterAadd = *counterAadd + 1;
    
    }
	return;
}
	
