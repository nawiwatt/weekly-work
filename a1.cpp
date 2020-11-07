#include <stdio.h>
#include <iostream>
void working ()
{
	struct fighting
	{
		char name[31];
		int score = 0;
	};
	int allvote;
	int rawscore;
	int low = 10001;
	fighting player[8];
	for (int i = 0;i < 8;i++)
	{
		std::cin >> player[i].name;
	}
	scanf_s("%d", &allvote);
	for (int i = 0;i < allvote;i++)
	{
		scanf_s("%d", &rawscore);
		for (int j = 0; j < 8;j++)
		{
			if (rawscore - 1 == j)
			{
				player[j].score++;
				break;
			}
		}
	}
	for (int i = 0;i < 8;i++)
	{
		if (player[i].score < low)
		{
			low = player[i].score;
		}
	}
	for (int i = 0;i < 8;i++)
	{
		if (player[i].score != low)
		{
			std::cout << player[i].name << std::endl ;
		}
	}
}
int main()
{
    working();
	return 0;
}
