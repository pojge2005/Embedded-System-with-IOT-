#include<Reg51.h>
sbit led=P1^1;
sbit sw = P1^2;
sbit sw = P1^3;

void main()
{
	led=0;
	while(1)
	{
		if(sw==0)
		{
		led=1;
		}
		else{
			led=0;
		}
	}
	}