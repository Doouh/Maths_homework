#include <stdio.h>
#include "head.h"

void imprimirPre()
{
	printf("\n\n");
	printf("       Te1   Te2      \n");
	printf("    ┌───┴─────┴───┐   \n");
	printf("    │             │   \n");
	printf(" Te8┤   T1   T2   ├Te3\n");
	printf("    │             │   \n");
	printf(" Te7┤   T3   T4   ├Te4\n");
	printf("    │             │   \n");
	printf("    └───┬─────┬───┘   \n");
	printf("       Te6   Te5      \n");
	printf("\n\n");
}

void imprimirMid(float te1, float te2, float te3, float te4, float te5, float te6, float te7, float te8)
{
	if ((te8 < 10 && te8 >= 0) && (te7 < 10 && te7 >= 0))
	{
		printf("\n\n");
		printf("     %.1f %.1f      \n", te1, te2);
		printf("   ┌───┴─────┴───┐   \n");
		printf("   │             │   \n");
		printf("%.1f┤   T1   T2   ├%.1f\n", te8, te3);
		printf("   │             │   \n");
		printf("%.1f┤   T3   T4   ├%.1f\n", te7, te4);
		printf("   │             │   \n");
		printf("   └───┬─────┬───┘   \n");
		printf("      %.1f   %.1f      \n", te6, te5);
		printf("\n\n");
	}
	else if ((te8 > 10 && te8 < 100) && (te7 > 10 && te7 < 100))
	{
		printf("\n\n");
		printf("      %.1f %.1f      \n", te1, te2);
		printf("    ┌───┴─────┴───┐   \n");
		printf("    │             │   \n");
		printf("%.1f┤   T1   T2   ├%.1f\n", te8, te3);
		printf("    │             │   \n");
		printf("%.1f┤   T3   T4   ├%.1f\n", te7, te4);
		printf("    │             │   \n");
		printf("    └───┬─────┬───┘   \n");
		printf("       %.1f   %.1f      \n", te6, te5);
		printf("\n\n");
	}
	else if ((te8 > 10 && te8 < 100) && (te7 < 10 && te7 >= 0))
	{
		printf("\n\n");
		printf("      %.1f %.1f      \n", te1, te2);
		printf("    ┌───┴─────┴───┐   \n");
		printf("    │             │   \n");
		printf("%.1f┤   T1   T2   ├%.1f\n", te8, te3);
		printf("    │             │   \n");
		printf(" %.1f┤   T3   T4   ├%.1f\n", te7, te4);
		printf("    │             │   \n");
		printf("    └───┬─────┬───┘   \n");
		printf("       %.1f   %.1f      \n", te6, te5);
		printf("\n\n");
	}
	else if ((te8 < 10 && te8 >= 0) && (te7 > 10 && te7 < 100))
	{
		printf("\n\n");
		printf("      %.1f %.1f      \n", te1, te2);
		printf("    ┌───┴─────┴───┐   \n");
		printf("    │             │   \n");
		printf(" %.1f┤   T1   T2   ├%.1f\n", te8, te3);
		printf("    │             │   \n");
		printf("%.1f┤   T3   T4   ├%.1f\n", te7, te4);
		printf("    │             │   \n");
		printf("    └───┬─────┬───┘   \n");
		printf("       %.1f   %.1f      \n", te6, te5);
		printf("\n\n");
	}

}

void imprimirPost(float te1, float te2, float te3, float te4, float te5, float te6, float te7, float te8, float ti1, float ti2, float ti3, float ti4)
{
	if ((te8 < 10 && te8 >= 0) && (te7 < 10 && te7 >= 0))
	{
		printf("\n\n");
		printf("     %.1f %.1f      \n", te1, te2);
		printf("   ┌───┴─────┴───┐   \n");
		printf("   │             │   \n");
		printf("%.1f┤  %.1f %.1f  ├%.1f\n", te8, ti1, ti2, te3);
		printf("   │             │   \n");
		printf("%.1f┤  %.1f %.1f  ├%.1f\n", te7, ti3, ti4, te4);
		printf("   │             │   \n");
		printf("   └───┬─────┬───┘   \n");
		printf("      %.1f   %.1f      \n", te6, te5);
		printf("\n\n");
	}
	else if ((te8 > 10 && te8 < 100) && (te7 > 10 && te7 < 100))
	{
		printf("\n\n");
		printf("      %.1f %.1f      \n", te1, te2);
		printf("    ┌───┴─────┴───┐   \n");
		printf("    │             │   \n");
		printf("%.1f┤  %.1f %.1f  ├%.1f\n", te8, ti1, ti2, te3);
		printf("    │             │   \n");
		printf("%.1f┤  %.1f %.1f  ├%.1f\n", te7, ti3, ti4, te4);
		printf("    │             │   \n");
		printf("    └───┬─────┬───┘   \n");
		printf("       %.1f   %.1f      \n", te6, te5);
		printf("\n\n");
	}
	else if ((te8 > 10 && te8 < 100) && (te7 < 10 && te7 >= 0))
	{
		printf("\n\n");
		printf("      %.1f %.1f      \n", te1, te2);
		printf("    ┌───┴─────┴───┐   \n");
		printf("    │             │   \n");
		printf("%.1f┤  %.1f %.1f  ├%.1f\n", te8, ti1, ti2, te3);
		printf("    │             │   \n");
		printf(" %.1f┤  %.1f %.1f  ├%.1f\n", te7, ti3, ti4, te4);
		printf("    │             │   \n");
		printf("    └───┬─────┬───┘   \n");
		printf("       %.1f   %.1f      \n", te6, te5);
		printf("\n\n");
	}
	else if ((te8 < 10 && te8 >= 0) && (te7 > 10 && te7 < 100))
	{
		printf("\n\n");
		printf("      %.1f %.1f      \n", te1, te2);
		printf("    ┌───┴─────┴───┐   \n");
		printf("    │             │   \n");
		printf(" %.1f┤  %.1f %.1f  ├%.1f\n", te8, ti1, ti2, te3);
		printf("    │             │   \n");
		printf("%.1f┤  %.1f %.1f  ├%.1f\n", te7, ti3, ti4, te4);
		printf("    │             │   \n");
		printf("    └───┬─────┬───┘   \n");
		printf("       %.1f   %.1f      \n", te6, te5);
		printf("\n\n");
	}

}
