#include <stdio.h> 
#include <math.h> 

_Bool isInArea(double x, double y)
{
	if (x >= -1 && y <= 1 && y >= x)
			return(1);
	else
		return(0);
}
