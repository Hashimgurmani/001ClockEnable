



#include <stdint.h>

#define GPIOA_BASE_ADDR 			0x40020000UL

#define GPIOA_MODER_OFFSET 			0x00UL


#define GPIOA_MODER					(GPIOA_BASE_ADDR      +      GPIOA_MODER_OFFSET)


#define RCC_BASE_ADD 		0x40023800UL

#define RCC_AHB1ENR_OFFSET 		0x30UL

#define RCC_AHB1ENR_REG 			(RCC_BASE_ADD    +    RCC_AHB1ENR_OFFSET );

int main ()
{

// without enabling clock it not work so first enable the peripheral clock

	uint32_t  *pModer 			= 			(uint32_t *)GPIOA_MODER	;

	uint32_t  *rccahbenr 			= 			(uint32_t *)RCC_AHB1ENR_REG ;


	//Enabling the clock to access GPIOA Peripheral

	*rccahbenr   |=   (1<<0);

	//Enabling the PA0 bit

	*pModer |= (1<<0);

return 0;

}
