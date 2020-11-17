#include <atmel_start.h>

int main(void)
{
	/* Initializes MCU, drivers and middleware */
	atmel_start_init();

	/* This is my application code !!*/
	while (1) {
          gpio_set_pin_level(LED0, true);
          gpio_set_pin_level(LED0, false);
	}
}
