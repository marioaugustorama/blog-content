#include <avr/io.h>
#include <util/delay.h>

#define LED_PIN PB4
int main(void)
{
  DDRB |= (1 << LED_PIN);  /* Seta PORTB bit 4 como saida. */

  while (1) {
    PORTB |= (1 << LED_PIN);  /* LED on */
		_delay_ms(5000);
		PORTB &= ~(1 << LED_PIN); /* LED off */
		_delay_ms(5000);
	}
	return 0;
}
