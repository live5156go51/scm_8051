#include <AT89X51.H>

sbit L1=P1^0;

void delay02s(void)
{
	int i,j,k;
	for (i=0; i<=20; i++)
	{
		for (j=0; j<=20; j++)
		{
			for (k=0; k<=248; k++)
			;
		}
	}	
}

void main(void)
{
	while(1)
	{
		L1=0;
		delay02s();
		L1=1;
	}
}