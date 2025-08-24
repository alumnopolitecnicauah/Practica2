#include "lpc17xx.h"
uint8_t esprimo(uint16_t primo){
uint16_t divisor;

	
	for (divisor=2;divisor<primo;divisor++)
		if((primo%divisor)==0)
			return 0;
	return 1;

}
