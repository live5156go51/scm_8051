#include <AT89X51.H>

sbit L1=P1^0;
sbit L2=P1^1;
sbit L3=P1^2;
sbit L4=P1^3;

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
		L2=0;
		delay02s();
		L2=1;
		L3=0;
		delay02s();
		L3=1;
		L4=0;
		delay02s();
		L4=1;
	}
}