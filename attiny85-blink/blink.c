#include <avr/io.h>
#define F_CPU 1000000L
#include <util/delay.h>

int main(void)
{
				DDRB |= (1 << 4);  /* Seta PORTB bit 4 como saida. */

				while (1) {
								PORTB &= (1 << 4);  /* LED on */
								_delay_ms(1000);
								PORTB |= (1 << 4); /* LED off */
								_delay_ms(1000);
				}

				return 0;
}
