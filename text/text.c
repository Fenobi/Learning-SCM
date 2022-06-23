#include <reg52.h>

sbit Moto_RA = P1 ^ 6;

sbit Moto_RB = P1 ^ 5;

sbit Moto_LA = P1 ^ 4;

sbit Moto_LB = P1 ^ 3;        //??????

/***********************************

*????:void Delay(unsigned char num)

*????:??

*????:num ???? ????255

*????:?

*????:?????

***********************************/

void Delay(unsigned char num)

{

	unsigned int temp = 0;

	while (num--)

	{

		temp = 2000;

		while (temp--);

	}

}

/***********************************

*????:void Car_Run(unsigned char dire)

*????:??????

*????:dire ?? 0:??   1:?   2:?   3:?   4:?

*????:?

*????:????????? ???????????? ????????? ??????????

***********************************/

void Car_Run(unsigned char dire)

{

	switch (dire)

	{

	case 0:             //??

	{

		Moto_RA = 0;

		Moto_RB = 0;

		Moto_LA = 0;

		Moto_LB = 0;

	}break;

	case 1:            //??

	{

		Moto_RA = 1;

		Moto_RB = 0;

		Moto_LA = 1;

		Moto_LB = 0;

	}break;

	case 2:            //??

	{

		Moto_RA = 0;

		Moto_RB = 1;

		Moto_LA = 0;

		Moto_LB = 1;

	}break;

	case 3:            //??

	{

		Moto_RA = 1;

		Moto_RB = 0;

		Moto_LA = 0;

		Moto_LB = 1;

	}break;

	case 4:            //??

	{

		Moto_RA = 0;

		Moto_RB = 1;

		Moto_LA = 1;

		Moto_LB = 0;

	}break;

	default:break;

	}

}

/***********************************

*????:void main(void)

*????:????

*????:?

*????:?

*????:main????????

***********************************/

void main(void)

{

	while (1)

	{

		Car_Run(1);        //??

		Delay(20);

		Car_Run(2);        //??

		Delay(20);

		Car_Run(3);        //??

		Delay(20);

		Car_Run(4);        //??

		Delay(20);

		Car_Run(0);        //??

		Delay(20);

	}

}
