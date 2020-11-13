#include<stdio.h>
#include<iostream>
int cal (int x,int y);
int cal2 (int x,int y);
int main()
{
	int total,set,highest=0;
	std::cin>>total;
	std::cin>>set;
	struct quiz
	{
		char name[11];
		int score[10]={};
		int totalscore = 0;
		int lowest = 11;	
	};
	quiz student[1000];
	for(int i=0;i<total;i++)
	{
		std::cin>>student[i].name;
		for(int j =0;j<set;j++)
		{
			std::cin>>student[i].score[j];
			student[i].lowest = cal(student[i].score[j],student[i].lowest);
			student[i].totalscore = student[i].totalscore + student[i].score[j];
		}
	}
	for(int i=0;i<total;i++)
	{
		student[i].totalscore = student[i].totalscore - student[i].lowest;
		highest = cal2(student[i].totalscore,highest);
	}
	std::cout<<highest<<std::endl;
	for(int i=0;i<total;i++)
	{
		if(student[i].totalscore == highest)
		{
			std::cout<<student[i].name<<std::endl;
		}
		
	}
	return 0;
}
int cal (int x,int y)
{
	if(x<y)
	{
		y = x;
	}
	return y;
}
int cal2 (int x,int y)
{
	if(x>y)
	{
		y = x;
	}
	return y;
}
