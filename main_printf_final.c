/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjuzen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 15:50:50 by tjuzen            #+#    #+#             */
/*   Updated: 2020/09/19 14:23:03 by zszeredi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"
#include <limits.h>
#include <float.h>
#include <math.h>

void display_return(int i, int j, char *str)
{
	if (i == j)
	{
		printf("\033[1;32m");
		printf("--------------------");
		printf("\n%s TEST SUCCEED\n", str);
		printf("--------------------\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[1;31m");
		printf("--------------------");
		printf("\n%s TEST FAILED\n", str);
		printf("--------------------\n");
		printf("\033[0m");
	}
}

// _#+-0

int	main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	int f = 0;
	int g = 0;
	int h = 0;
	int i = 0;
	int j = 0;
	int k = 0;
	int l = 0;
	int m = 0;
	int n = 0;
	int o = 0;
	int p = 0;
	int q = 0;
	int r = 0;
	int s = 0;
	int t = 0;
	int u = 0;
	int v = 0;
	int w = 0;
	int x = 0;
	int y = 0;
	int z = 0;
	long long test_conv = LONG_MAX;
	long long test_conv_neg = LONG_MIN;
	unsigned long test_conv_u = ULONG_MAX;




	y += printf ("printf9     :|%-0#5f|%-0#5.3f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 0,0,0,0,0);
	x +=  ft_printf ("ft_printf9  :|%-0#5f|%-0#5.3f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 0,0,0,0,0);

	y += printf ("printf7     :|%-#5f|%-#5.3f|%-#5.1f|%-#5.0f|%-#5.f|\n", 0,0,0,0,0);
	x +=  ft_printf ("ft_printf7  :|%-#5f|%-#5.3f|%-#5.1f|%-#5.0f|%-#5.f|\n", 0,0,0,0,0);

	printf("FLOAT\n");

	y +=  printf ("printf1     :|%5f|%5.3f|%5.1f|%5.0f|%5.f|\n", 0,0,0,0,0);
	x +=  ft_printf ("ft_printf1  :|%5f|%5.3f|%5.1f|%5.0f|%5.f|\n", 0,0,0,0,0);

	y +=  printf ("printf2     :|% 5f|% 5.3f|% 5.1f|% 5.0f|% 5.f|\n", 0,0,0,0,0);
	x += ft_printf ("ft_printf2  :|% 5f|% 5.3f|% 5.1f|% 5.0f|% 5.f|\n", 0,0,0,0,0);

	y += printf ("printf2     :|% +5f|% +5.3f|% +5.1f|% +5.0f|% +5.f|\n", 0,0,0,0,0);
	x += ft_printf ("ft_printf3  :|% +5f|% +5.3f|% +5.1f|% +5.0f|% +5.f|\n", 0,0,0,0,0);



	y +=  printf ("printf5     :|%05f|%05.3f|%05.1f|%05.0f|%05.f|\n", 0,0,0,0,0);
	x += ft_printf ("ft_printf5  :|%05f|%05.3f|%05.1f|%05.0f|%05.f|\n", 0,0,0,0,0);

	y += printf ("printf6     :|%#5f|%#5.3f|%#5.1f|%#5.0f|%#5.f|\n", 0,0,0,0,0);
	x += ft_printf ("ft_printf6  :|%#5f|%#5.3f|%#5.1f|%#5.0f|%#5.f|\n", 0,0,0,0,0);

	y += printf ("printf8     :|%0#5f|%0#5.3f|%0#5.1f|%0#5.0f|%0#5.f|\n", 0,0,0,0,0);
	x += ft_printf ("ft_printf8  :|%0#5f|%0#5.3f|%0#5.1f|%0#5.0f|%0#5.f|\n", 0,0,0,0,0);

	y +=   printf ("|% 05f|% 05.3f|% 05.1f|% 05.0f|% 05.f|\n",   0,0,-854,4587,0);
	x += ft_printf ("|% 05f|% 05.3f|% 05.1f|% 05.0f|% 05.f|\n", 0,0,-854,4587,0);
	printf("\n");

	y += printf ("printf4     :|%+-5f|%+-5.3f|%+-5.1f|%+-5.0f|%+-5.f|\n", 0,0,0,0,0);
	x += ft_printf ("ft_printf4  :|%+-5f|%+-5.3f|%+-5.1f|%+-5.0f|%+-5.f|\n", 0,0,0,0,0);
	printf("--------------------\n");
	printf("FLOAT NO MINUS\n");
	printf("--------------------\n");
	printf("\n");
	x += (ft_printf("Coucou float %+#1.f %.0f %1.f %.2f %.3f %.4f %.5f\n", 5.32, 530.66, 530.66, 530.66, 530.66, 530.66, 530.66));
	y +=    (printf("Coucou float %+#1.f %.0f %1.f %.2f %.3f %.4f %.5f\n", 5.32, 530.66, 530.66, 530.66, 530.66, 530.66, 530.66));
	printf("\n");
	x += (ft_printf("Coucou float %# 15.10f %15.0f %5.1f %2.2f %2.3f %3.6f %.5f\n", -5.32, -530.66, 530.66, -530.66, 530.66, -530.66, 530.66));
	y +=    (printf("Coucou float %# 15.10f %15.0f %5.1f %2.2f %2.3f %3.6f %.5f\n", -5.32, -530.66, 530.66, -530.66, 530.66, -530.66, 530.66));
	printf("\n");
	x += (ft_printf("Coucou float %#.15f %#15.0f %.1f %.2f %.3f %.4f %.5f\n", 5.12345678912345678912, (double)-0, 530.66, 530.66, -530.66, 530.66, 530.66));
	y +=    (printf("Coucou float %#.15f %#15.0f %.1f %.2f %.3f %.4f %.5f\n", 5.12345678912345678912, (double)-0, 530.66, 530.66, -530.66, 530.66, 530.66));
	printf("\n");
	x += (ft_printf("Coucou float %+15f %+15f %2.1f %3.2f %7.3f %.4f %.5f\n", -6.12345678912345678912, 536.66, 536.66, -536.66, 536.66, 536.66, 536.66));
	y +=    (printf("Coucou float %+15f %+15f %2.1f %3.2f %7.3f %.4f %.5f\n", -6.12345678912345678912, 536.66, 536.66, -536.66, 536.66, 536.66, 536.66));
	printf("\n");

	printf("--------------------\n");
	printf("FLOAT\n");
	printf("--------------------\n");
	printf("\n");

	y += printf("%f\n", DBL_MAX / DBL_MAX);
	x += ft_printf("%f\n", DBL_MAX / DBL_MAX);
	printf("\n");

	y += 	printf("%f\n", 1.5);
	x += ft_printf("%f\n", 1.5);
	printf("\n");

	y += 	printf("%.f\n", 1.5);
	x +=  ft_printf("%.f\n", 1.5);
	printf("\n");



	y += 	printf("%025f\n", 1.5);
	x += ft_printf("%025f\n", 1.5);
	printf("\n");



	y += printf("%##08.5f\n", 38.521);
	x += ft_printf("%##08.5f\n", 38.521);
	printf("\n");






	y += printf("|% 03.8f|\n", 320.32);
	x += ft_printf("|% 03.8f|\n", 320.32);


	printf("FLOAT\n");

	y += printf ("printf1     :|%5f|%5.3f|%5.1f|%5.0f|%5.f|\n", 1.1,1.1,1.1,1.1,1.1);
	x += ft_printf ("ft_printf1  :|%5f|%5.3f|%5.1f|%5.0f|%5.f|\n", 1.1,1.1,1.1,1.1,1.1);
	//2
	y +=  printf ("printf2     :|% 5f|% 5.3f|% 5.1f|% 5.0f|% 5.f|\n", 1.1,1.1,1.1,1.1,1.1);
	x += ft_printf ("ft_printf2  :|% 5f|% 5.3f|% 5.1f|% 5.0f|% 5.f|\n", 1.1,1.1,1.1,1.1,1.1);
	//3
	y +=  printf ("printf3     :|% +5f|% +5.3f|% +5.1f|% +5.0f|% +5.f|\n", 1.1,1.1,1.1,1.1,1.1);
	x += ft_printf ("ft_printf3  :|% +5f|% +5.3f|% +5.1f|% +5.0f|% +5.f|\n", 1.1,1.1,1.1,1.1,1.1);

	y +=  printf ("printf5     :|%05f|%05.3f|%05.1f|%05.0f|%05.f|\n", 1.1,1.1,1.1,1.1,1.1);
	x += ft_printf ("ft_printf5  :|%05f|%05.3f|%05.1f|%05.0f|%05.f|\n", 1.1,1.1,1.1,1.1,1.1);
	//6
	y +=  printf ("printf6     :|%#5f|%#5.3f|%#5.1f|%#5.0f|%#5.f|\n", 1.1,1.1,1.1,1.1,1.1);
	x += ft_printf ("ft_printf6  :|%#5f|%#5.3f|%#5.1f|%#5.0f|%#5.f|\n", 1.1,1.1,1.1,1.1,1.1);
	//7
	//8
	y += printf ("printf8     :|%0#5f|%0#5.3f|%0#5.1f|%0#5.0f|%0#5.f|\n", 1.1,1.1,1.1,1.1,1.1);
	x += ft_printf ("ft_printf8  :|%0#5f|%0#5.3f|%0#5.1f|%0#5.0f|%0#5.f|\n", 1.1,1.1,1.1,1.1,1.1);

	//9

	printf("--------------------\n");
	printf("FLOAT 0\n");
	printf("--------------------\n");
	printf("\n");
	x += (ft_printf("Coucou float %+0#1.f %0.0f %01.f %0.2f %0.3f %0.4f %0.5f\n", 5.32, 530.66, 530.66, 530.66, 530.66, 530.66, 530.66));
	y +=    (printf("Coucou float %+0#1.f %0.0f %01.f %0.2f %0.3f %0.4f %0.5f\n", 5.32, 530.66, 530.66, 530.66, 530.66, 530.66, 530.66));
	printf("\n");
	x += (ft_printf("Coucou float %#0 15.10f %015.0f %05.1f %02.2f %02.3f %03.6f %0.5f\n", -5.32, -530.66, 530.66, -530.66, 530.66, -530.66, 530.66));
	y +=    (printf("Coucou float %#0 15.10f %015.0f %05.1f %02.2f %02.3f %03.6f %0.5f\n", -5.32, -530.66, 530.66, -530.66, 530.66, -530.66, 530.66));
	printf("\n");
	x += (ft_printf("Coucou float %#0.15f %#015.0f %0.1f %0.2f %0.3f %0.4f %0.5f\n", 5.12345678912345678912, (double)-0, 530.66, 530.66, -530.66, 530.66, 530.66));
	y +=    (printf("Coucou float %#0.15f %#015.0f %0.1f %0.2f %0.3f %0.4f %0.5f\n", 5.12345678912345678912, (double)-0, 530.66, 530.66, -530.66, 530.66, 530.66));
	printf("\n");
	x += (ft_printf("Coucou float %+015f %+015f %02.1f %03.2f %07.3f %0.4f %0.5f\n", -6.12345678912345678912, 536.66, 536.66, -536.66, 536.66, 536.66, 536.66));
	y +=    (printf("Coucou float %+015f %+015f %02.1f %03.2f %07.3f %0.4f %0.5f\n", -6.12345678912345678912, 536.66, 536.66, -536.66, 536.66, 536.66, 536.66));
	printf("\n");

	y += printf("%-10.8f\n", 32.5);
	x += ft_printf("%-10.8f\n", 32.5);
	printf("\n");



	y += printf("%-#025.2f\n", 4587.254504541);
	x += ft_printf("%-#025.2f\n", 4587.254504541);
	printf("\n");

	y += printf("%-0#2.15f\n", 485.2);
	x += ft_printf("%-0#2.15f\n", 485.2);
	printf("\n");


	y += printf ("printf4     :|%+-5f|%+-5.3f|%+-5.1f|%+-5.0f|%+-5.f|\n", 1.1,1.1,1.1,1.1,1.1);
	x += ft_printf ("ft_printf4  :|%+-5f|%+-5.3f|%+-5.1f|%+-5.0f|%+-5.f|\n", 1.1,1.1,1.1,1.1,1.1);


	y += printf ("printf7     :|%-#5f|%-#5.3f|%-#5.1f|%-#5.0f|%-#5.f|\n", 1.1,1.1,1.1,1.1,1.1);
	x += ft_printf ("ft_printf7  :|%-#5f|%-#5.3f|%-#5.1f|%-#5.0f|%-#5.f|\n", 1.1,1.1,1.1,1.1,1.1);


	y += printf ("printf9     :|%-0#5f|%-0#5.3f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 1.1,1.1,1.1,1.1,1.1);
	x += ft_printf ("ft_printf9  :|%-0#5f|%-0#5.3f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 1.1,1.1,1.1,1.1,1.1);

	printf("--------------------\n");
	printf("FLOAT MINUS\n");
	printf("--------------------\n");
	printf("\n");

	x += (ft_printf("Coucou float %-20.15f %-10.0f %-1.5f %-#20.2f %-6.3f %-.4f %-.5f\n", 5.32, 530.66, 530.66, 530.66, 530.66, 530.66, 530.66));
	y +=    (printf("Coucou float %-20.15f %-10.0f %-1.5f %-#20.2f %-6.3f %-.4f %-.5f\n", 5.32, 530.66, 530.66, 530.66, 530.66, 530.66, 530.66));
	printf("\n");
	x += (ft_printf("Coucou float %-# 15.10f %-15.1f %-5.1f %-2.2f %-2.3f %-3.6f %-4.5f\n", -5.32, -530.66, 530.66, -530.66, 530.66, -530.66, 530.66));
	y +=    (printf("Coucou float %-# 15.10f %-15.1f %-5.1f %-2.2f %-2.3f %-3.6f %-4.5f\n", -5.32, -530.66, 530.66, -530.66, 530.66, -530.66, 530.66));
	printf("\n");
	x += (ft_printf("Coucou float %-#.15f %-#15.1f %-.1f %-.2f % -7.3f %-5.4f %-5.5f\n", 5.12345678912345678912, (double)-0, 530.66, 530.66, -530.66, 530.66, 530.66));
	y +=    (printf("Coucou float %-#.15f %-#15.1f %-.1f %-.2f % -7.3f %-5.4f %-5.5f\n", 5.12345678912345678912, (double)-0, 530.66, 530.66, -530.66, 530.66, 530.66));
	printf("\n");
	x += (ft_printf("Coucou float %-f %-+15f %-2.1f %-3.2f %-7.3f %-.4f %-.5f\n", 5.0, 536.66, 536.66, -536.66, 536.66, 536.66, 536.66));
	y +=    (printf("Coucou float %-f %-+15f %-2.1f %-3.2f %-7.3f %-.4f %-.5f\n", 5.0, 536.66, 536.66, -536.66, 536.66, 536.66, 536.66));
	printf("\n");

	x += (ft_printf("Coucou float %15f %+15f %2.1f %3.2f %7.3f %.4f %.5f\n", -5.0, 536.66, 536.66, -536.66, 536.66, 536.66, 536.66));
	y +=    (printf("Coucou float %15f %+15f %2.1f %3.2f %7.3f %.4f %.5f\n", -5.0, 536.66, 536.66, -536.66, 536.66, 536.66, 536.66));
	printf("\n");

	printf("--------------------\n");
	printf("FLOAT LAST TEST\n");
	printf("--------------------\n");
	printf("\n");
	x += (ft_printf("Test %-#5.f %-+5f %-f %-01.1f %-1fi\n", 1.0, 1.0, 1.0, 1.0, 1.0));
	y +=    (printf("Test %-#5.f %-+5f %-f %-01.1f %-1fi\n", 1.0, 1.0, 1.0, 1.0, 1.0));
	printf("\n");
	x += (ft_printf("Test %- #5.f i\n", 1.0));
	y +=    (printf("Test %- #5.f i\n", 1.0));
	printf("\n");
	x += (ft_printf("Test %-#5.f i\n", 1.0));
	y +=    (printf("Test %-#5.f i\n", 1.0));
	printf("\n");

	x += (ft_printf("Test %-#5.f %-+5f %-f %-01.1f %-1fi\n", 1.0, 1.0, 1.0, 1.0, 1.0));
	y +=    (printf("Test %-#5.f %-+5f %-f %-01.1f %-1fi\n", 1.0, 1.0, 1.0, 1.0, 1.0));
	printf("\n");
	x += (ft_printf("Test % -#5.f i\n", 1.0));
	y +=    (printf("Test % -#5.f i\n", 1.0));
	printf("\n");
	x += (ft_printf("Test %#-5.f i\n", 1.0));
	y +=    (printf("Test %#-5.f i\n", 1.0));
	printf("\n");
	x += (ft_printf("Test %-ld\n", 0xff11ff11ff88));
	y +=    (printf("Test %-ld\n", 0xff11ff11ff88));


	printf("FLOAT\n");

	y += printf ("printf1     :|%-5.3f|%-5.2f|%-5.1f|%-5.0f|%-5.f|\n", 999.999,999.999,999.999,999.999,999.999);
	x += ft_printf ("ft_printf1  :|%-5.3f|%-5.2f|%-5.1f|%-5.0f|%-5.f|\n", 999.999,999.999,999.999,999.999,999.999);

	y += printf ("printf2     :|%- 5f|%- 5.3f|%- 5.1f|%- 5.0f|%- 5.f|\n", 999.999,999.999,999.999,999.999,999.999);
	x += ft_printf ("ft_printf2  :|%- 5f|%- 5.3f|%- 5.1f|%- 5.0f|%- 5.f|\n", 999.999,999.999,999.999,999.999,999.999);
	//3
	y += printf ("printf3     :|%- +5f|%- +5.3f|%- +5.1f|%- +5.0f|%- +5.f|\n", 999.999,999.999,999.999,999.999,999.999);
	x += ft_printf ("ft_printf3  :|%- +5f|%- +5.3f|%- +5.1f|%- +5.0f|%- +5.f|\n", 999.999,999.999,999.999,999.999,999.999);
	//4
	y += printf ("printf4     :|%+-5f|%+-5.3f|%+-5.1f|%+-5.0f|%+-5.f|\n", 999.999,999.999,999.999,999.999,999.999);
	x += ft_printf ("ft_printf4  :|%+-5f|%+-5.3f|%+-5.1f|%+-5.0f|%+-5.f|\n", 999.999,999.999,999.999,999.999,999.999);
	//5
	y += printf ("printf5     :|%-05f|%-05.3f|%-05.1f|%-05.0f|%-05.f|\n", 999.999,999.999,999.999,999.999,999.999);
	x += ft_printf ("ft_printf5  :|%-05f|%-05.3f|%-05.1f|%-05.0f|%-05.f|\n", 999.999,999.999,999.999,999.999,999.999);
	//6
	y += printf ("printf6     :|%-#5f|%-#5.3f|%-#5.1f|%-#5.0f|%-#5.f|\n", 999.999,999.999,999.999,999.999,999.999);
	x += ft_printf ("ft_printf6  :|%-#5f|%-#5.3f|%-#5.1f|%-#5.0f|%-#5.f|\n", 999.999,999.999,999.999,999.999,999.999);
	//7
	y += printf ("printf7     :|%-#5f|%-#5.3f|%-#5.1f|%-#5.0f|%-#5.f|\n", 999.999,999.999,999.999,999.999,999.999);
	x += ft_printf ("ft_printf7  :|%-#5f|%-#5.3f|%-#5.1f|%-#5.0f|%-#5.f|\n", 999.999,999.999,999.999,999.999,999.999);
	// //9
	y += printf ("printf9         :|%-0#5f|%-0#5.11f|%-0#5.9f|%-0#5.8f|%-0#5.7f|%-0#5.6f|%-0#5.5f|%-0#5.4f|%-0#5.3f|%-0#5.2f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.10,999.10,999.10,999.10,999.10,999.10,999.10,999.10,999.10,999.10,999.10,999.10,999.10);
	x += ft_printf ("ft_printf9      :|%-0#5f|%-0#5.11f|%-0#5.9f|%-0#5.8f|%-0#5.7f|%-0#5.6f|%-0#5.5f|%-0#5.4f|%-0#5.3f|%-0#5.2f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.10,999.10,999.10,999.10,999.10,999.10,999.10,999.10,999.10,999.10,999.10,999.10,999.10);


	//
	y += printf ("printf8         :|%-.2f|%-0#5.10f|%-0#5.9f|%-0#5.8f|%-0#5.7f|%-0#5.6f|%-0#5.5f|%-0#5.4f|%-0#5.3f|%-0#5.2f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.999,999.999,999.999,999.999,999.999,999.999,999.999,999.999,999.999,999.999,999.999,999.999,999.999);
	x += ft_printf ("ft_printf8      :|%-.2f|%-0#5.10f|%-0#5.9f|%-0#5.8f|%-0#5.7f|%-0#5.6f|%-0#5.5f|%-0#5.4f|%-0#5.3f|%-0#5.2f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.999,999.999,999.999,999.999,999.999,999.999,999.999,999.999,999.999,999.999,999.999,999.999,999.999);
	//9
	y += printf ("printf10        :|%-0#5f|%-0#5.10f|%-0#5.9f|%-0#5.8f|%-0#5.7f|%-0#5.6f|%-0#5.5f|%-0#5.4f|%-0#5.3f|%-0#5.2f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.9,999.9,999.9,999.9,999.9,999.9,999.9,999.9,999.9,999.9,999.9,999.9,999.9);
	x += ft_printf ("ft_printf10     :|%-0#5f|%-0#5.10f|%-0#5.9f|%-0#5.8f|%-0#5.7f|%-0#5.6f|%-0#5.5f|%-0#5.4f|%-0#5.3f|%-0#5.2f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.9,999.9,999.9,999.9,999.9,999.9,999.9,999.9,999.9,999.9,999.9,999.9,999.9);
	// //9
	y += printf ("printf11        :|%-0#5f|%-0#5.10f|%-0#5.9f|%-0#5.8f|%-0#5.7f|%-0#5.6f|%-0#5.5f|%-0#5.4f|%-0#5.3f|%-0#5.2f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.8,999.8,999.8,999.8,999.8,999.8,999.8,999.8,999.8,999.8,999.8,999.8,999.8);
	x += ft_printf ("ft_printf11     :|%-0#5f|%-0#5.10f|%-0#5.9f|%-0#5.8f|%-0#5.7f|%-0#5.6f|%-0#5.5f|%-0#5.4f|%-0#5.3f|%-0#5.2f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.8,999.8,999.8,999.8,999.8,999.8,999.8,999.8,999.8,999.8,999.8,999.8,999.8);
	// //9
	y += printf ("printf12        :|%-0#5f|%-0#5.10f|%-0#5.9f|%-0#5.8f|%-0#5.7f|%-0#5.6f|%-0#5.5f|%-0#5.4f|%-0#5.3f|%-0#5.2f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.7,999.7,999.7,999.7,999.7,999.7,999.7,999.7,999.7,999.7,999.7,999.7,999.7);
	x += ft_printf ("ft_printf12     :|%-0#5f|%-0#5.10f|%-0#5.9f|%-0#5.8f|%-0#5.7f|%-0#5.6f|%-0#5.5f|%-0#5.4f|%-0#5.3f|%-0#5.2f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.7,999.7,999.7,999.7,999.7,999.7,999.7,999.7,999.7,999.7,999.7,999.7,999.7);
	//9
	y += printf ("printf13        :|%-0#5f|%-0#5.10f|%-0#5.9f|%-0#5.8f|%-0#5.7f|%-0#5.6f|%-0#5.5f|%-0#5.4f|%-0#5.3f|%-0#5.2f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.6,999.6,999.6,999.6,999.6,999.6,999.6,999.6,999.6,999.6,999.6,999.6,999.6);
	x += ft_printf ("ft_printf13     :|%-0#5f|%-0#5.10f|%-0#5.9f|%-0#5.8f|%-0#5.7f|%-0#5.6f|%-0#5.5f|%-0#5.4f|%-0#5.3f|%-0#5.2f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.6,999.6,999.6,999.6,999.6,999.6,999.6,999.6,999.6,999.6,999.6,999.6,999.6);
	//9
	y +=   printf ("printf14        :|%-0#5f|%-0#5.10f|%-0#5.9f|%-0#5.8f|%-0#5.7f|%-0#5.6f|%-0#5.5f|%-0#5.4f|%-0#5.3f|%-0#5.2f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.5,999.5,999.5,999.5,999.5,999.5,999.5,999.5,999.5,999.5,999.5,999.5,999.5);
	x += ft_printf ("ft_printf14     :|%-0#5f|%-0#5.10f|%-0#5.9f|%-0#5.8f|%-0#5.7f|%-0#5.6f|%-0#5.5f|%-0#5.4f|%-0#5.3f|%-0#5.2f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.5,999.5,999.5,999.5,999.5,999.5,999.5,999.5,999.5,999.5,999.5,999.5,999.5);
	// //9


	y += printf ("printf15        :|%-0#5f|%-0#5.10f|%-0#5.9f|%-0#5.8f|%-0#5.7f|%-0#5.6f|%-0#5.5f|%-0#5.4f|%-0#5.3f|%-0#5.2f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.4,999.4,999.4,999.4,999.4,999.4,999.4,999.4,999.4,999.4,999.4,999.4,999.4);
	x += ft_printf ("ft_printf15     :|%-0#5f|%-0#5.10f|%-0#5.9f|%-0#5.8f|%-0#5.7f|%-0#5.6f|%-0#5.5f|%-0#5.4f|%-0#5.3f|%-0#5.2f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.4,999.4,999.4,999.4,999.4,999.4,999.4,999.4,999.4,999.4,999.4,999.4,999.4);
	//9
	y += printf ("printf16        :|%-0#5f|%-0#5.10f|%-0#5.9f|%-0#5.8f|%-0#5.7f|%-0#5.6f|%-0#5.5f|%-0#5.4f|%0-#5.3f|%-0#5.2f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.3,999.3,999.3,999.3,999.3,999.3,999.3,999.3,999.3,999.3,999.3,999.3,999.3);
	x += ft_printf ("ft_printf16     :|%-0#5f|%-0#5.10f|%-0#5.9f|%-0#5.8f|%-0#5.7f|%-0#5.6f|%-0#5.5f|%-0#5.4f|%-0#5.3f|%-0#5.2f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.3,999.3,999.3,999.3,999.3,999.3,999.3,999.3,999.3,999.3,999.3,999.3,999.3);
	//9
	y += printf ("printf17        :|%-0#5f|%-0#5.10f|%-0#5.9f|%-0#5.8f|%-0#5.7f|%-0#5.6f|%-0#5.5f|%-0#5.4f|%-0#5.3f|%-0#5.2f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.2,999.2,999.2,999.2,999.2,999.2,999.2,999.2,999.2,999.2,999.2,999.2,999.2);
	x += ft_printf ("ft_printf17     :|%-0#5f|%-0#5.10f|%-0#5.9f|%-0#5.8f|%-0#5.7f|%-0#5.6f|%-0#5.5f|%-0#5.4f|%-0#5.3f|%-0#5.2f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.2,999.2,999.2,999.2,999.2,999.2,999.2,999.2,999.2,999.2,999.2,999.2,999.2);
	//9
	y +=   printf ("printf18        :|%-0#5f|%-0#5.10f|%-0#5.9f|%-0#5.8f|%-0#5.7f|%-0#5.6f|%-0#5.5f|%-0#5.4f|%-0#5.3f|%-0#5.2f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.1,999.1,999.1,999.1,999.1,999.1,999.1,999.1,999.1,999.1,999.1,999.1,999.1);
	x += ft_printf ("ft_printf18     :|%-0#5f|%-0#5.10f|%-0#5.9f|%-0#5.8f|%-0#5.7f|%-0#5.6f|%-0#5.5f|%-0#5.4f|%-0#5.3f|%-0#5.2f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.1,999.1,999.1,999.1,999.1,999.1,999.1,999.1,999.1,999.1,999.1,999.1,999.1);
	//9
	y +=   printf ("printf19        :|%-0#5f|%-0#5.10f|%-0#5.9f|%-0#5.8f|%-0#5.7f|%-0#5.6f|%-0#5.5f|%-0#5.4f|%-0#5.3f|%-0#5.2f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.,999.,999.,999.,999.,999.,999.,999.,999.,999.,999.,999.,999.);
	x += ft_printf ("ft_printf19     :|%-0#5f|%-0#5.10f|%-0#5.9f|%-0#5.8f|%-0#5.7f|%-0#5.6f|%-0#5.5f|%-0#5.4f|%-0#5.3f|%-0#5.2f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.,999.,999.,999.,999.,999.,999.,999.,999.,999.,999.,999.,999.);
	//
	y +=  printf ("printf20        :|%-0#5f|%-0#5.10f|%-0#5.9f|%-0#5.8f|%-0#5.7f|%-0#5.6f|%-0#5.5f|%-0#5.4f|%-0#5.3f|%-0#5.2f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.0,999.0,999.0,999.0,999.0,999.0,999.0,999.0,999.0,999.0,999.0,999.0,999.0);
	x += ft_printf ("ft_printf20     :|%-0#5f|%-0#5.10f|%-0#5.9f|%-0#5.8f|%-0#5.7f|%-0#5.6f|%-0#5.5f|%-0#5.4f|%-0#5.3f|%-0#5.2f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.0,999.0,999.0,999.0,999.0,999.0,999.0,999.0,999.0,999.0,999.0,999.0,999.0);

	y +=   printf ("printf21        :|%-0#5f|%-0#5.10f|%-0#5.9f|%-0#5.8f|%-0#5.7f|%-0#5.6f|%-0#5.5f|%-0#5.4f|%-0-#5.3f|%-0#5.2f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.9999999,999.9999999,999.9999999,999.9999999,999.9999999,999.9999999,999.9999999,999.9999999,999.9999999,999.9999999,999.9999999,999.9999999,999.9999999);
	x += ft_printf ("ft_printf21     :|%-0#5f|%-0#5.10f|%-0#5.9f|%-0#5.8f|%-0#5.7f|%-0#5.6f|%-0#5.5f|%-0#5.4f|%-0-#5.3f|%-0#5.2f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.9999999,999.9999999,999.9999999,999.9999999,999.9999999,999.9999999,999.9999999,999.9999999,999.9999999,999.9999999,999.9999999,999.9999999,999.9999999);

	y += printf ("printf22        :|%-0#5f|%-0#5.10f|%-0#5.9f|%-0#5.8f|%-0#5.7f|%-0#5.6f|%-0#5.5f|%-0#5.4f|%-0#5.3f|%-0#5.2f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.8999999,999.8999999,999.8999999,999.8999999,999.8999999,999.8999999,999.8999999,999.8999999,999.8999999,999.8999999,999.8999999,999.8999999,999.8999999);
	x += ft_printf ("ft_printf22     :|%-0#5f|%-0#5.10f|%-0#5.9f|%-0#5.8f|%-0#5.7f|%-0#5.6f|%-0#5.5f|%-0#5.4f|%-0#5.3f|%-0#5.2f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.8999999,999.8999999,999.8999999,999.8999999,999.8999999,999.8999999,999.8999999,999.8999999,999.8999999,999.8999999,999.8999999,999.8999999,999.8999999);

	y += printf ("printf23        :|%-0#5f|%-0#5.10f|%-0#5.9f|%-0#5.8f|%-0#5.7f|%-0#5.6f|%-0#5.5f|%-0#5.4f|%-0#5.3f|%-0#5.2f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.7999999,999.7999999,999.7999999,999.7999999,999.7999999,999.7999999,999.7999999,999.7999999,999.7999999,999.7999999,999.7999999,999.7999999,999.7999999);
	x += ft_printf ("ft_printf23     :|%-0#5f|%-0#5.10f|%-0#5.9f|%-0#5.8f|%-0#5.7f|%-0#5.6f|%-0#5.5f|%-0#5.4f|%-0#5.3f|%-0#5.2f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.7999999,999.7999999,999.7999999,999.7999999,999.7999999,999.7999999,999.7999999,999.7999999,999.7999999,999.7999999,999.7999999,999.7999999,999.7999999);
	//
	y += printf ("printf24        :|%-0#5f|%-0#5.10f|%-0#5.9f|%-0#5.8f|%-0#5.7f|%-0#5.6f|%-0#5.5f|%-0#5.4f|%-0#5.3f|%-0#5.2f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.6999999,999.6999999,999.6999999,999.6999999,999.6999999,999.6999999,999.6999999,999.6999999,999.6999999,999.6999999,999.6999999,999.6999999,999.6999999);
	x += ft_printf ("ft_printf24     :|%-0#5f|%-0#5.10f|%-0#5.9f|%-0#5.8f|%-0#5.7f|%-0#5.6f|%-0#5.5f|%-0#5.4f|%-0#5.3f|%-0#5.2f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.6999999,999.6999999,999.6999999,999.6999999,999.6999999,999.6999999,999.6999999,999.6999999,999.6999999,999.6999999,999.6999999,999.6999999,999.6999999);

	y += printf ("printf25        :|%-0#5f|%-0#5.10f|%-0#5.9f|%-0#5.8f|%-0#5.7f|%-0#5.6f|%-0#5.5f|%-0#5.4f|%-0#5.3f|%-0#5.2f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.5999999,999.5999999,999.5999999,999.5999999,999.5999999,999.5999999,999.5999999,999.5999999,999.5999999,999.5999999,999.5999999,999.5999999,999.5999999);
	x += ft_printf ("ft_printf25     :|%-0#5f|%-0#5.10f|%-0#5.9f|%-0#5.8f|%-0#5.7f|%-0#5.6f|%-0#5.5f|%-0#5.4f|%-0#5.3f|%-0#5.2f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.5999999,999.5999999,999.5999999,999.5999999,999.5999999,999.5999999,999.5999999,999.5999999,999.5999999,999.5999999,999.5999999,999.5999999,999.5999999);

	y += printf ("printf26        :|%-0#5f|%-0#5.10f|%-0#5.9f|%-0#5.8f|%-0#5.7f|%-0#5.6f|%-0#5.5f|%-0#5.4f|%-0#5.3f|%-0#5.2f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.4999999,999.4999999,999.4999999,999.4999999,999.4999999,999.4999999,999.4999999,999.4999999,999.4999999,999.4999999,999.4999999,999.4999999,999.4999999);
	x += ft_printf ("ft_printf26     :|%-0#5f|%-0#5.10f|%-0#5.9f|%-0#5.8f|%-0#5.7f|%-0#5.6f|%-0#5.5f|%-0#5.4f|%-0#5.3f|%-0#5.2f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.4999999,999.4999999,999.4999999,999.4999999,999.4999999,999.4999999,999.4999999,999.4999999,999.4999999,999.4999999,999.4999999,999.4999999,999.4999999);

	y += printf ("printf27        :|%-0#5f|%-0#5.10f|%-0#5.9f|%-0#5.8f|%-0#5.7f|%-0#5.6f|%-0#5.5f|%-0#5.4f|%-0#5.3f|%-0#5.2f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.3999999,999.3999999,999.3999999,999.3999999,999.3999999,999.3999999,999.3999999,999.3999999,999.3999999,999.3999999,999.3999999,999.3999999,999.3999999);
	x += ft_printf ("ft_printf27     :|%-0#5f|%-0#5.10f|%-0#5.9f|%-0#5.8f|%-0#5.7f|%-0#5.6f|%-0#5.5f|%-0#5.4f|%-0#5.3f|%-0#5.2f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.3999999,999.3999999,999.3999999,999.3999999,999.3999999,999.3999999,999.3999999,999.3999999,999.3999999,999.3999999,999.3999999,999.3999999,999.3999999);

	y += printf ("printf28        :|%-0#5f|%-0#5.10f|%-0#5.9f|%-0#5.8f|%-0#5.7f|%-0#5.6f|%-0#5.5f|%-0#5.4f|%-0#5.3f|%-0#5.2f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.2999999,999.2999999,999.2999999,999.2999999,999.2999999,999.2999999,999.2999999,999.2999999,999.2999999,999.2999999,999.2999999,999.2999999,999.2999999);
	x += ft_printf ("ft_printf28     :|%-0#5f|%-0#5.10f|%-0#5.9f|%-0#5.8f|%-0#5.7f|%-0#5.6f|%-0#5.5f|%-0#5.4f|%-0#5.3f|%-0#5.2f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.2999999,999.2999999,999.2999999,999.2999999,999.2999999,999.2999999,999.2999999,999.2999999,999.2999999,999.2999999,999.2999999,999.2999999,999.2999999);

	y += printf ("printf29        :|%-#15f|%-0#15.10f|%-0#15.9f|%-0#15.8f|%-0#12.7f|%-0#5.6f|%-0#5.5f|%-0#5.4f|%-0#5.3f|%-0#5.2f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.1999999,999.1999999,999.1999999,999.1999999,999.1999999,999.1999999,999.1999999,999.1999999,999.1999999,999.1999999,999.1999999,999.1999999,999.1999999);
	x += ft_printf ("ft_printf29     :|%-#15f|%-0#15.10f|%-0#15.9f|%-0#15.8f|%-0#12.7f|%-0#5.6f|%-0#5.5f|%-0#5.4f|%-0#5.3f|%-0#5.2f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.1999999,999.1999999,999.1999999,999.1999999,999.1999999,999.1999999,999.1999999,999.1999999,999.1999999,999.1999999,999.1999999,999.1999999,999.1999999);


	y += printf ("printf5     :|%-f|\n", 0.0001);
	x += ft_printf ("printf5     :|%-f|\n", 0.0001);

	//
	y += printf("flt value     :   %f\n",  (float)1844674407370955161.1844674407370955161);
	x += ft_printf("flt value     :   %f\n",  (float)1844674407370955161.1844674407370955161);

	y += printf("%f\n", 9999999999999999999.0);
	x += ft_printf("%f\n", 9999999999999999999.0);

	y += printf("%.2f\n", 82.135);
	x += ft_printf("%.2f\n", 82.135);
	y += printf("%.3f\n", 484187171.1235);
	x += ft_printf("%.3f\n", 484187171.1235);
	display_return(x, y, "MODIFIER");
	printf("\n");
	display_return(g, h, "MODIFIER");
	printf("\n");


	return (0);
}
