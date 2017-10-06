#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#define no 0
#define yes 1

placeofxandplus(x,y,xplus,yplus)
int x,y,xplus,yplus;
{
if (xplus<x)
	{
		int i;
		for (i=1;i<xplus;++i)
		{
			printf("\n");
		}
		for (i=1;i<yplus;++i)
		{
			printf(" ");
		}
		printf("+\n");
		for (i=xplus+1;i<x;++i)
		{
			printf("\n");
		}
		for (i=1;i<y;++i)
		{
			printf(" ");
		}
		printf("x\n");
		for (i=11;i>x;--i)
		{
			printf("\n");
		}
	}
	else if (xplus>x)
		{
			int i;
			for (i=1;i<x;++i)
			{
				printf("\n");
			}
			for (i=1;i<y;++i)
			{
				printf(" ");
			}
			printf("x\n");
			for (i=x+1;i<xplus;++i)
			{
				printf("\n");
			}
			for (i=1;i<yplus;++i)
			{
				printf(" ");
			}
			printf("+\n");
			for (i=11;i>xplus;--i)
			{
				printf("\n");
			}
		}
		else
		{
			int i;
			for (i=1;i<x;++i)  
			{
				printf("\n");
			}
			if (yplus<y)
			{
				for (i=1;i<yplus;++i)
				{
					printf(" ");
				}
				printf("+");
				for (i=yplus+1;i<y;++i)
				{
					printf(" ");
				}
				printf("x\n");
			}
			else
			{
				for (i=1;i<y;++i)
				{
					printf(" ");
				}
				printf("x");
				for (i=y+1;i<yplus;++i)
				{
					printf(" ");
				}
				printf("+\n");
			}
			for (i=11;i>xplus;--i)
			{
				printf("\n");
			}
		}
}

int main() 
{
	int x,y,c,infield,xplace,yplace,length,xplusplace,yplusplace;
	y=x=6;
	srand(time(NULL));
	int yplus=rand()%11+1;
	int xplus=rand()%11+1;
	length=1;
	infield=yes;
	while (xplus==x&&yplus==y)
	{
		xplus=(rand()%11)+1;
		yplus=(rand()%11)+1;
	}
	placeofxandplus(x,y,xplus,yplus);
	while((c=getch())!=EOF)
	{
		if (c=='w')
		{
			system("cls");
			--x;
			if (x<=0)
			{
				infield=no;
			}
			if (infield==yes)
			{
				placeofxandplus(x,y,xplus,yplus);
			}
			else
			{
				x=11;
				placeofxandplus(x,y,xplus,yplus);
			}
			if (xplus==x&&yplus==y)
			{
				++length;
				while (xplus==x&&yplus==y)
				{
					xplus=(rand()%11)+1;
					yplus=(rand()%11)+1;
				}
				system("cls");
				placeofxandplus(x,y,xplus,yplus);
			}
		}
		else if (c=='s')
			{
				system("cls");
				++x;
				if (x>=12)
				{
					infield=no;
				}
				if (infield==yes)
				{
					placeofxandplus(x,y,xplus,yplus);
				}
				else
				{
					x=1;
					placeofxandplus(x,y,xplus,yplus);
				}
				if (xplus==x&&yplus==y)
				{
					++length;
					while (xplus==x&&yplus==y)
					{
						xplus=(rand()%11)+1;
						yplus=(rand()%11)+1;
					}
					system("cls");
					placeofxandplus(x,y,xplus,yplus);
				}
			}
			else if (c=='a')
				{
					system("cls");
					--y;
					if (y<=0)
					{
						infield=no;
					}
					if (infield==yes)
					{
						placeofxandplus(x,y,xplus,yplus);
					}
					else
					{
						y=11;
						placeofxandplus(x,y,xplus,yplus);
					}
					if (xplus==x&&yplus==y)
					{
						++length;
						while (xplus==x&&yplus==y)
						{
							xplus=(rand()%11)+1;
							yplus=(rand()%11)+1;
						}
						system("cls");
						placeofxandplus(x,y,xplus,yplus);
					}
				}
				else if (c=='d')
					{
						system("cls");
						++y;
						if (y>=12)
						{
							infield=no;
						}
						if (infield==yes)
						{
							placeofxandplus(x,y,xplus,yplus);
						}
						else
						{
							y=1;
							placeofxandplus(x,y,xplus,yplus);
						}
						if (xplus==x&&yplus==y)
						{
							++length;
							while (xplus==x&&yplus==y)
							{
								xplus=(rand()%11)+1;
								yplus=(rand()%11)+1;
							}
							system("cls");
							placeofxandplus(x,y,xplus,yplus);
						}
					}
	infield=yes;
	}
}
