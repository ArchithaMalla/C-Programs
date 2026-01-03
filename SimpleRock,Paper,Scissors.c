#include<stdio.h>
main()
{
	int player_1,player_2;
	printf("player 1,enter your choice (1=Rock,2=Paper,3=Scissors):");
	scanf("%d",&player_1);
	printf("player 2,enter your choice (1=Rock,2=Paper,3=Scissors):");
	scanf("%d",&player_2);
	if(player_1>player_2)
	{
		printf("player 1 wins");
	}
	else
	{
		printf("player 2 wins");
	}
	
}
